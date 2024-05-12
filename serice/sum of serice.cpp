//  1+(1/2)^2 +(1/3)^3+(1/4)^4 solve c++ program
#include <iostream>
#include <cmath>
using namespace std;
double calcultedSum(int n){
    int i;
    double sum=0.0;
    for (  i = 1; i <=n; ++i)
    {
      sum+=pow(1.0/i,i);

    }
   return sum; 
}
int main(){
    int n;
    cout << "Enter the value n:";
    cin>>n;
    double result=calcultedSum(n);
    return 0;
}