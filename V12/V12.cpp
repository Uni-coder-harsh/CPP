#include<iostream>

using namespace std;


int main(){
    int a=4;
    int* b = &a;
    // & ---> (Address of) operator
    cout<<"The Address of a is "<<b<<endl;

    // * ---> (Value at)Derefrence operator
    cout<<"The value at address b is "<<*b<<endl;

    // ** ---> Pointer to pointer 
    int** c = &b;
    cout<<"the Address of b is " <<&b<<endl;
    cout<<"the Address of b is " <<&c<<endl;
    cout<<"the Address at c is " <<*c<<endl;
    cout<<"the value at address value_at(value_at(c)) is " <<**c<<endl;
    

    return 0;
}