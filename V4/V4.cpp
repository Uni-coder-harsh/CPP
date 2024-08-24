//**Understanding Variable**
// # include<iostream>


// using namespace std;

// int main(){
//     // int a=4;
//     // int b=10;
//     int a=14 , b=15;
//     float pi=3.14;
//     char z='u';
//     // char d='ud'; recommended to use only one charcter otherwise it will overflow
//     // cout<<"Variable Scope and data type"<<a<<"." <<b;
//     // cout<<"\n value of pi is "<<pi;
//     // cout<<"\n value of z is "<<z;
//     // cout<<"\n value of d is "<<d;
//     return 0;
// }


//**Understanding local scope & global scope**

//we can make local and global with same name but local will take precidence



#include<iostream>

using namespace std;

int global = 10;  // Global variable

void sum(){
    int a;
    cout << global;  // This accesses the global variable
}

int main(){
    int global = 35;  // Local variable, shadows the global variable
    global = 45;      // Assigns a new value to the local variable
    sum();            // Calls the sum function, which prints the global variable (10)
    cout << global;   // Prints the local variable (45)
    return 0;
}
