#include<iostream>

using namespace std;


int main(){
    //arrays example
    // int marks[]={28,85,63 ,46};
    int maths[4];
    maths[0]=74;
    maths[1]=64;
    maths[2]=73;
    maths[3]=97;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    // cout<<maths[1]<<endl;
    
    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<maths[i]<<endl;
    // }
    // int i=0;
    // while (i<=4)
    // {
    //     cout<<maths[i]<<endl;
    //     i++;
    // }
    
    //pointer and arrays
    int *p=maths;
    cout<<*p<<endl;
    cout<<*(p+1)<<endl;
    cout<<*(p+2)<<endl;
    cout<<*(p+3)<<endl;

    
    return 0;
}