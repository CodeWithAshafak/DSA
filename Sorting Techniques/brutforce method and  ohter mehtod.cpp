//burtforce method :- in  brute force method we try all the possible combination to crack the given thing. 
// Q. find the given number in the arrange if the arrage contain the given number in the array then print found else not found
// not this is not the exaple of brute force method , insructor is not give the any example of bruteforce method 
#include <iostream>
using namespace std;
int main()
{
    int arr[]= {2,35,333,78,90}, n;
    int s = sizeof(arr)/sizeof(arr[0]);
    int index;
    for(int i =0; i<s;i++)
    {
    	cout<<arr[i]<<"\t";
	}
	cout<<endl;
	cout<<"enter the number u wanna find\n";
	cin>>n;
	
	bool f = false;// int c=0; u can also use count variable in this case  
	
	for(int i=0;i<s;i++)
	{
		if(arr[i]==n)
		{   
		    index=i;
			f=true;
			break;	
		}
	}
	if(f==true)
	{
		cout<<"found\n";
		cout<<"element index is "<<index<<endl;
	}
	else
	{
		cout<<"not found\n";
	}
 	return 0;
}
