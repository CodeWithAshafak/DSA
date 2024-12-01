//Bubble sort:- 

#include <iostream>
using namespace std;
int main()
{
    int arr[] ={1,2,3,5,4};
    int tmp=0;
    int count=0;
    
    int s = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<s;i++)
    {
    	cout<<arr[i]<<"\t";
	}
	cout<<"After Bubble sortig of the array the result is \n";
	for(int i=0;i<s;i++)
	{
		for(int j=0;j<s-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				tmp = arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=tmp;
				count++;
			}
		}
	}
	for(int i=0;i<s;i++)
    {
    	cout<<arr[i]<<"\t";
	}
	
	cout<<"\n"<<"count is "<<count;
 	return 0;
}


	
