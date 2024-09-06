#include<iostream>
using namespace std;
// Factorial
// int factorial(n){
//     if(n<=1){
//         return 1;
//         }
//     return n* factorial(n-1);
// }
int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2) + fib(n-1);
}
int main(){
    // factorial of number
    // 6!=6*5*4*3*2*1
    //n!=n*(n-1)!
    int a;
    cout<<"enter the number";
    cin>>a;
    cout<<"fibonacchi at  "<< a <<" is "<<fib(a);
    return 0;
}