#include<iostream>
using namespace std;


int main(){
    int l , b ;
    cout<<"Enter the length ";
    cin>>l;
    cout<<endl;
    cout<<"Enter the breadth ";
    cin>>b;
    for(int i=1;i<=l;i++){
        for(int j=1;j<=b;j++){
            cout<<"*";
        }
        cout<<endl;
    }   
     return 0;
}