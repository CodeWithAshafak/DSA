//Quick sort practice :-

#include <iostream>
using namespace std;

//partition function :-
int partition(int arr[],int low , int high)
{
	int pivot = arr[low];
	int p = low+1;
	int q = high;
	int tmp;
	while(p<q)
	{
		while(arr[p]<pivot && p<=high)
		{
			p++;
		}
		while(arr[q]>pivot && q>low)
		{
			q--;	
		}
		if(p<q)
		{
			tmp=arr[p];
			arr[p]=arr[q];
			arr[q]=tmp;
			
		}
	} 
	tmp=arr[low];
	arr[low]=arr[q];
	arr[q]=tmp;
	return q;
	
}
void qs(int arr[],int low,int high)
{
	if(low<high)
	{
		int pivot;
		pivot =  partition(arr, low, high);
		qs(arr,low,pivot-1);
		qs(arr,pivot+1,high);
	}
	
}
void printArray(int arr[],int s)
{
	for(int i=0;i<s;i++)
	{
		cout<<arr[i]<<"\t";
	}
}
int main (){
	int arr[]={35,50,15,25,80,34};
	printArray(arr,6);
	qs(arr,0,5);
	cout<<"\nafter quick sort\n";
	printArray(arr,5);
}
