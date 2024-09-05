#include<iostream>
using namespace std;

int sum(int a , int b){
int c= a + b;
return c;
}
// using call by refrence by pointers
int swap(int* a , int* b){
    int temp = *a;
    *a=*b;
    *b=temp;
}
int main(){
     int a=4 , b=5 ;
     cout<<sum(a,b)<<endl;
     swap(&a,&b);
     cout<<a<<endl<<b;
   return 0;
}
