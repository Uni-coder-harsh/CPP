#include<iostream>

using namespace std;

int c=45;
int main()
{
    //************Built in data types************
    // int a,b,c;

    // cout<<"enter the 1 number"<<endl;
    // cin>>a;
    // cout<<"enter the 2 number"<<endl;
    // cin>>b;
    // c=a+b;
    // cout<< "the sum of no is : "<< c<<endl;//this is local variable 
    // cout<< "the Global no is : "<<::c;//this is global variable variable denoted by "::" 
    // return 0;


    //  ************Float , double and long double Literals***********
    // //by default decimal is given double value
    // float d=3.14; // 3.14f/3.14F is used for representing float
    // long double e=3.14;//3.14l/3.14L is used for long double
    // cout<<"the value od d is "<<d<<"\nthe value of e is "<<e;

    
    // *************Reference variable***********
    // float x=435;
    // float & y=x;
    // cout<<y;


    // ************TypeCasting************
    float a=34.474;
    cout<<a;
    cout<<endl;
    cout<<int(a) ;
    cout<<endl;
    cout<<(int)a;
    cout<<endl;
    int b =int(a);
    cout<< b;
    return 0;
}
