#include<iostream>

using namespace std;

int main(){
    int  num,k;
    cout<<"enter the number whose table you want :"<<endl;
    cin>>num;
    cout<<"Enter the number till where you want the table :";
    cin>>k;
    cout<<endl;
    cout<<"this is your table";
    cout<<endl;
    int i=1;
    while (i<=k)
    {
        cout<<num*i<<endl;
        i++;
    }
    
}