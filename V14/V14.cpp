#include<iostream>

using namespace std;

typedef struct employee
{
    int eId;
    char favChar;
    float salary;
}ep ;
int main(){
    // struct employee harry;
    ep harry;
    harry.eId=1;
    harry.favChar='c';
    harry.salary=12224450;
    cout<<harry.eId<<endl;
    cout<<harry.favChar<<endl;
    cout<<harry.salary<<endl;


union money
{
    int rice;
    char car;
    float pounds;
};


    union money m1;
    m1.rice=1;
    m1.car='c';
    m1.pounds=12224450;
    cout<<m1.rice<<endl;
    cout<<m1.car<<endl;
    cout<<m1.pounds<<endl;

   enum meal{breakfast , lunch , dinner};
   cout<<breakfast;  
   cout<<dinner;  
   cout<<lunch;  
    return 0;
}