/*selection sort:-

=> selection sort is slower than bubble sort ,it takes more time to compare the value, and 
the time complexity in an avarage case , worst case and best case is always O(n^2).

=> in this searching element compare with each and every  element in the array, that's why  time complexity is O(n^2).

=>time complexity :- O(n^2)
=> space complexity :- O(n)
=> Approch  :- subtract and conquare(as like buble sort).
=> it is totaly structure based 
=> it is stable.
=> it is Implace.
Not implace means if u  are not  making extra array in program for
program operation then it is  called implace oterwise it is called implace
 

*/
#include <iostream>
using namespace std;
int main()
{
    int arr[]={2,1,7,9,5};
    
    int chotu;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
    	cout<<arr[i]<<"\t";
    	
	}
	cout<<"\n";
	for(int i=0;i<n;i++)
	{
		chotu=i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[chotu]>arr[j])
			{
				chotu=j;
			}
		}
		
		if(chotu!=i)
		{
			int tmp;
			tmp =arr[chotu];
			arr[chotu]=arr[i];
			arr[i]=tmp;
		}
	}
	cout<<"After selection sort :-\n";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t";
	}
 	return 0;
}
