

/*1. Write a C++ program to reverse a given string.
Example:
Sample Input: Cybrom
Sample Output: morbyC
*/

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//    
// 	return 0;
//}


#include <iostream>
#include <vector>
#include <string>
//#include <algorithm> // For std::reverse

using namespace std;

int main() {
    
    string inputString;
    cout << "Enter a string: ";
    getline(cin,inputString);
   
   
    // Store the string in a vector
    vector<char>charVector(inputString.rbegin(), inputString.rend());
    //cout<<charVector<<"\n";
    for(auto p :charVector)
    {
    	cout<<p;
	}

    // Use std::reverse to reverse the vector
   // reverse(charVector.begin(), charVector.end());

    // Convert the reversed vector back to a string
   // string reversedString(charVector.begin(), charVector.end());

    // Output the reversed string
   // cout << "Reversed string: " << reversedString << endl;

    return 0;
}
