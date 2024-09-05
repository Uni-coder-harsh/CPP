#include<iostream>
using namespace std;

inline int product(int a , int b){
    // not recommented to use inline in static
    // static int c=0;//this run only once 
    // c=c+1;// next time this function is run the value of c will be retained
    return a*b;
}
float money(int current , float factor=1.04){
    return current*factor;
}
// int str(const char *p){

// }
int main(){
    // int a  , b ;
    // cout<<"enter the value of a and b";
    // cin>>a>>b;
    // cout<<"the product is "<<product(a,b)<<endl;
    int saving;
    cin>>saving;
    cout<<"money recieved is "<<money(saving)<<endl;
    cout<<"money recieved is "<<money(saving ,1.1)<<endl;
    return 0;
}