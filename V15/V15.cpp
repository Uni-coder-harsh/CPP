#include<iostream>
using namespace std;

int sum(int a , int b);
void g(void);
int main(){
    int num1 , num2;
    cout<<"enter the num 1"<<endl;
    cin>>num1;
    cout<<"Enter the num 2 "<<endl;
    cin>>num2;
    cout<<"the sum is :"<<sum(num1 , num2)<<endl;
    g();
    return 0;
    
}

int sum(int a , int b ){
    int c=a + b;
    return c;
}

void g(){
    cout<<"hello";
}