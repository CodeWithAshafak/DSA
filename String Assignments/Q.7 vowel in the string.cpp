//7. Write a C++ program to count all the vowels in a given string.
//Example:
//Sample Input: eagerer
//Sample output: number of vowels -> 4




#include <iostream>
#include <string>

using namespace std;
int main()
{
    string s;
    cout<<"enter string\n";
    int count=0;
    getline(cin,s);
    
    for(int i=0;i<s.size();i++)
    {
    	if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
    	{
    		count++;
		}
		
	}
	cout<<count<<"\n";
    
 	return 0;
}
