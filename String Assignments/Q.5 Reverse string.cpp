//5. Write a C++ program to sort characters (numbers and punctuation symbols are not included) in a string.
//Example:
//Sample Input: python
//Sample Output: hnopty


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    
    string s;
    cout<<"enter sting \n";
    getline(cin,s);
    
    vector<char>v{s.begin(),s.end()};
    
    
    
    cout<<"sorting of the string \n";
    
    sort(v.begin(),v.end());
    for(auto p : v)
    {
    	cout<<p;
	}
 	return 0;
}
