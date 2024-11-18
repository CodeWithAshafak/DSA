//bubble sort

#include <iostream>
using namespace std;
int main()
{
    int arr[]={3,5,3,5,6,4,7,4};
    int tmp=0;
    int s = sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0;i<s;i++)
    {
    	cout<<arr[i]<<"\t";
	}
	
	for(int i=0;i<s;i++)
	{
		for(int j=0;j<s-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				tmp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j ]=tmp;
			}
		}
	}
	
	cout<<"After sorting \n";
	
	for(int i=0;i<s;i++)
    {
    	cout<<arr[i]<<"\t";
	}
 	return 0;
}

//bubble sort practice :-

//#include<iostream>
//using namespace std;
//int main()
//{
//	int arr[]={2,4,3,6,8,4,5,3,9};
//	int s = sizeof(arr)/sizeof(arr[0]);
//	int temp=0;
//	for(int i=0;i<s;i++)
//	{
//		cout<<arr[i]<<"\t";
//	}
//		cout<<"\n";
//	cout<<"after applying the bubble sort :- \n";
//	
//	for(int i=0;i<s;i++)
//	{
//		for(int j=0;j<s;j++)
//		{
//			if(arr[j]>arr[j+1])
//			{
//				temp = arr[j+1];
//				arr[j+1]=arr[j];
//				arr[j]=temp;
//			}
//		}
//	}
//	
//	cout<<"\n";
//	for(int i=0; i<s;i++)
//	{
//		cout<<arr[i]<<"\t";
//	}
//}
