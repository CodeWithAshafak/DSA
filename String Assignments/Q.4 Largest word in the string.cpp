/*
4.	Write a C++ program to find the largest word in a given string.
Example:
Sample Input: C++ is a programming language.
Sample Output: programming
*/



#include <iostream>
#include <string>
//#include <vector>
using namespace std;
int main()
{
    string s;
    cout<<"enter string \n";
    getline(cin,s);
    
    string largestWord = "";
    string currentWord = "";
    
    
    
    
    for(int i=0; i<s.size();i++)
    {
    	
    	if( s[i] == ' ' || ispunct(s[i]) )
    	{
    		if(currentWord.length()>largestWord.length())
    		{
    			largestWord = currentWord;
			}
			
			currentWord = "";
		
			
		}
		else
		{
			currentWord + =s[i];	
		}
    	
	}
	
	cout<<"largest word in the strign is :-"<<largestWord;
	
 	return 0;
}
