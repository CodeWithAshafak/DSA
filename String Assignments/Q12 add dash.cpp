/*12. Write a C++ program to insert a dash character (-) between two odd numbers in a given string of numbers.
//Example:
//Sample Input: 1345789
//Sample Output: Result-> 1-345-789
//
*/


#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cout<<"enter string \n";
    getline(cin,s);
    
    string result;
    
    
    for(int i=0; i<s.size();i++)
    {
    	result =  result + s[i];
    	
    	if(s[i]%2!=0 && s[i+1]%2!=0)
    	{
    		result = result + '-';
		}
	}
	
	
	cout<<"\nAdding '-' between odd numbers \n";
	for(auto p:result)
	{
		cout<<p;
	}
 	return 0;
}


 