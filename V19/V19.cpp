#include<iostream>
using namespace std;

int sum(int a , int b){
    return a+b;
}
int sum(int a , int b , int c){
    return a+b+c;
}
int volume(double r , int h){
    return(3.14*r*r*h);
}
int main(){
    
    cout<<"sum of 3 and 6 is "<<sum(3,6)<<endl; 
    cout<<"sum of 7 ,3 and 6 is "<<sum(7 ,3,6)<<endl;

    return 0;
}