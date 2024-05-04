//  #include<iostream>

// using namespace std;
// int main(){
//     int arr[10]={
//         10,38,20,40,67,90,78,89,45,76,
//     };
//     int i,num,loc=-1;
//     cout <<"enter number to find:-";
//     cin>>num;
//     for(i=0;i<10;i++){
//         if(arr[i]==num){
//             loc=i;
//             break;
//         }
//     }
//     if(loc==-1)
//     cout<<"Number not found in arry";
//     else
//     cout<<"number found at index"<<loc;
// } 


#include <iostream>
using namespace std;

const int ARRAY_SIZE = 10; // Define array size as a constant

int main() {
    int arr[ARRAY_SIZE];
    int num, loc = -1;

    // Input array elements manually
    cout << "Enter " << ARRAY_SIZE << " elements for the array:\n";
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Input the number to find
    cout << "Enter the number to find: ";
    cin >> num;

    // Search for the number in the array
    for (int i = 0; i < ARRAY_SIZE; i++) {
        if (arr[i] == num) {
            loc = i;
            break;
        }
    }

    // Output the result
    if (loc == -1)
        cout << "Number not found in array.";
    else
        cout << "Number found at index " << loc;

    return 0;
}
