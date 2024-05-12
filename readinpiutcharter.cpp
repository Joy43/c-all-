// C++ program to illustrate the use 
// of cin.get() 
#include <iostream> 
using namespace std; 
  
// Driver Code 
int main() 
{ 
    char ch[25]; // Declare an array of characters with a buffer size of 25
  
    // Read characters into the array 'ch'
    cout << "Enter a string: ";
    cin.get(ch, 5); // Read characters into the array 'ch'
  
    // Print ch 
    cout << "You entered: " << ch << endl; // Print the entered string
}
