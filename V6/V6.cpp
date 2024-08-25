// OPERATORS
#include<iostream>

using namespace std;

int main(){

int a,b ;
    cout<<"enter the value of First : \n";
    cin>>a;

    cout<<"enter the value of nSecond : \n";
    cin>>b;

cout<<"Operators in C++ :"<<endl  ;  
cout<<"Following are the types of operators in C++"<<endl  ;
cout<<endl;

//arithmetic operator
cout<< "this is a arrithmetic Operator "<<endl;
cout<<"The value of a+b is "<<a+b<<endl;
cout<<"The value of a-b is "<<a-b<<endl;
cout<<"The value of a*b is "<<a*b<<endl;
cout<<"The value of a/b is "<<a/b<<endl;
cout<<"The value of a%b is "<<a%b<<endl;
cout<<"The value of a++ is "<<a++<<endl;
cout<<"The value of a-- is "<<a--<<endl;
cout<<"The value of ++a is "<<++a<<endl;
cout<<"The value of --a is "<<--a<<endl;
cout<<endl;

//Comparison operators
cout<< "this is a Comparision Operator "<<endl;
cout<<"the value of a == b is "<<(a==b)<<endl;
cout<<"the value of a != b is "<<(a!=b)<<endl;
cout<<"the value of a > b is "<<(a>b)<<endl;
cout<<"the value of a < b is "<<(a<b)<<endl;
cout<<"the value of a <= b is "<<(a<=b)<<endl;
cout<<"the value of a >= b is "<<(a>=b)<<endl;
cout<<endl;

//Logical operators
cout<< "this is a Logical Operator "<<endl;
cout<<"the value of this logical && operator ((a==b)&&(a<b)) is "<<((a==b)&&(a<b))
<<endl;
cout<<"the value of this logical || operator ((a==b) || (a>b)) is "<<((a==b) || (a>b))
<<endl;

cout<<endl;
cout<<"Given 1 is Yes and 0 is no";
return 0;
}
