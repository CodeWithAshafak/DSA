o//Quick sort :-
/*
used for large dataset 
=> in this method array devide into two parts 
=> the pivot element is divide the array , pivotleft element have small value element and , pivot rigth element have large vlaue
=> pivot is the center element.

=>QS has the following main 4 steps :-

=>1> consider the first element of array is the pivot element , consider the two poiner P,Q. P pointer pivot element ke ekdam next vala element pr laga hai
and pointer Q last me lagana hai.
=>2> if P>=pivot element then stop also if Q<=pivot element then stop.
=>3> if (P>Q) swap(P,Q) [ if P,Q is not crossed to the array ]
=>4> if(p cross Q) swap(Q, pivot) [ if P,Q is crossed to each other]
 
=> it is called divide and conquire method.
*/

#include<iostream>
using namespace std;
//
int srt(int arr[],int low,int high)
{
	int pvt=arr[low]; // setting arr[0] as the pivot element 
	int p =low+1;     // setting p next to pivit element 
	int q =high;      // setting q to the high
	int tmp;
	do
	{
		while(arr[p]<pvt)
		{
			p++;
		}
		while(arr[q]>pvt)
		{
			q--;
		}
		if(p<q)// if p is not crossed the q
		{
			tmp = arr[p];
			arr[p]=arr[q];
			arr[q]=tmp;
		}
		
	}while(p<q); // jaise hi while wali condition fail hogi i.e. p q ko corss kar diyaq
	tmp=arr[low];
	arr[low]=arr[q];
	arr[q]=tmp;
	return q;
}
// main QS  funciton 
void qs(int  arr[],int low,int high)
{
    if(low<high)
        {
            int pvt;
            pvt=srt(arr,low,high);
            qs(arr,low,pvt-1);//step-2 of QS i.e. Recursive Relationship
            qs(arr,pvt+1,high);//step-2 of QS i.e. Recursive Relationship
        }
}
//for show the array 
void prntarr(int arr[],int s)
{
    for(int i=0;i<s;i++)
        {
            cout<<arr[i]<<"\t ";
        }
}


int main()
{

int arr[]={35,50,15,25,80};
prntarr(arr,5);
qs(arr,0,4);
cout<<"\n after quick sort\n";
prntarr(arr,5);
}
