//8. Write a C++ program to count all the words in a given string.
//Example:
//Sample Input:DSA
//Sample Output: number of words -> 1


#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    string s;
    int count=0;
    cout<<"enter string\n";
    getline(cin, s);
    for(int i=0;i<s.size();i++)
    {
    	if(s[i]==' ')
    	{
    		count++;
		}
		
    } 
    cout<<"\n No of words in the string is "<<count;
 	return 0;
}
