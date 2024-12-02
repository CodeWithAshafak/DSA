//insertion sort
//#include<iostream>
//using namespace std;
//int main()
//{
//int arr[]={12,23,31,40,15,60};
//int sorted,tmp;
//int n=sizeof(arr)/sizeof(arr[0]);
//int count=0;
//
//
//for(int i=0;i<n;i++)
//{
//   cout<<arr[i]<<"\t";
//}
//cout<<"\n";
//for(int i=1;i<n;i++)
//{
//    sorted=i;
//    while(sorted>0 && arr[sorted]<arr[sorted-1])
//    {
//        tmp=arr[sorted-1];//1
//        arr[sorted-1]=arr[sorted];//2
//        arr[sorted]=tmp;
//        sorted--;
//        count++;
//    }
//}
//    cout<<"\n after insertion sort\n";
//    for(int i=0;i<n;i++)
//        {
//            cout<<arr[i]<<"\t";
//        }
//cout<<"\n";
//cout<<"count is "<<count;
//}


//insertion sort:-

#include<iostream>
using namespace std;
int main(){
	
	int arr[]={43,6,57,23,90,54,23,67,12};
	int s = sizeof(arr)/sizeof(arr[0]);
	int sorted , temp;
	for(int i=0;i<s ;i++)
	{
		cout<<arr[i]<<"\t";
	}
	cout<<"\n";
	cout<<"after appling the bubble sort :- \n";
	
	
	for(int i=1;i<s;i++)
	{
		sorted = i;
	     while(sorted>0 && arr[sorted]<arr[sorted-1])
		{
			temp= arr[sorted-1];
			arr[sorted-1]=arr[sorted];
			arr[sorted]=temp;
			 sorted--;
			
		}
	}
	for(int i=0;i<s;i++)
	{
		cout<<arr[i]<<"\t";
	}
	
	return 0;
}