//6. Write a C++ program to check whether the characters e and g are separated by exactly 2 places anywhere in a given string at least once.
//+ Example:
//Sample Input: eagerer
//Sample Output: eagerer -> 1


#include <iostream>
#include <string>

using namespace std;
int main()
{
    string s;
    cout<<"enter string \n";
    getline(cin, s);
    int c=0;
    
    for(int i=0;i<s.size();i++)
    {
    	if(s[i] == 'g' && s[i+2]== 'e')
    	{
    		c++;
		}
		else if(  s[i] == 'e' && s[i+2]== 'g' )
		{
			c++;
		}
	}
	cout<<c;
 	return 0;
}
