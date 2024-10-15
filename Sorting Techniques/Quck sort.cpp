//Quick sort :-
/*
used for large dataset 
=> in this method array devide into two parts 
=> the pivot element is divide the array , pivotleft element have small value element and , pivot rigth element have large vlaue
=> pivot is the center element.

=>QS has the following main 4 steps :-

=>1> consider the first element of array is the pivot element , consider the two poiner P,Q. P pointer pivot element ke ekdam next vala element pr laga hai
and pointer Q last me lagana hai.
=>2> if P>=pivot element then stop also if Q<=pivot element then stop.
=>3> if (P>Q) swap(P,Q) [if P,Q is not crossed to the array ]
=>4> if(p cross Q) swap(Q, pivot) [ if P,Q is crossed to each other]
 
=> it is called divide and conquire method.
*/

#include<iostream>
using namespace std;
// main QS funciton 
void qs(int  arr[],int low,int high)
{
    if(low<high)
        {
            int pvt;
            pvt=srt(arr,low,high);
            qs(arr,0,pvt-1);//step-2 of QS i.e. Recursive Relationship
            qs(arr,pvt+1,high);//step-2 of QS i.e. Recursive Relationship
        }
}
//for show the array 
void prntarr(int arr[],int s)
{
    for(int i=0;i<s;i++)
        {
            cout<<arr[i]<<"\n";
        }
}


int main()
{

int arr[]={3,1,5,2,6};
prntarr(arr,5);
qs(arr,0,4);
}
