//insertion sort
#include<iostream>
using namespace std;
int main()
{
int arr[]={1,2,3,4,5,6};
int sorted,tmp;
int n=sizeof(arr)/sizeof(arr[0]);
int count=0;


for(int i=0;i<n;i++)
{
cout<<arr[i]<<"\t";
}
cout<<"\n";
for(int i=1;i<n;i++)
{
sorted=i;
while(sorted>0 && arr[sorted]<arr[sorted-1])
{
tmp=arr[sorted-1];//1
arr[sorted-1]=arr[sorted];//2
arr[sorted]=tmp;
sorted--;
count++;
}
}
cout<<"\n after insertion sort\n";
for(int i=0;i<n;i++)
{
cout<<arr[i]<<"\t";
}

cout<<"count is "<<count;
}