/*2.Write a C++ program to change only every letter in a 
given string with the letter following it in the alphabet 
(i.e. a becomes b, p becomes q, z becomes a).
Example:
Sample Input: cybrom
Sample Output: dzcspn
*/
#include<iostream>
using namespace std;
#include<string>
int main()
{
	string s;
	cout<<"please enter string :-\n";
	getline(cin,s);
	
	for(int i=0;i<s.size();i++)
	{
		s[i]=s[i]+1;
	
	}
	for(auto p :s)
	{
		cout<<p;
	}
}

