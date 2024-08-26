#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your Age";
    cin>>age;

    //Selection Control structure : if-else ladder
    // if (age>18)
    // {
    //     cout<<"Your eligible for Fresher Party"<<endl;
    // }
    // else if (age==18){
    //     cout<<"your are not eligble "<<endl;
    // }
    // else{
    //     cout<<"Hey kid go away"<<endl;
    // }

    //Selection control structure:Switch case
    switch (age)
    {
    case 18:
        
        cout<<"you are 18";
         break;
    case 20:
    cout<<"you are 20";
    default:
    cout<<"no age";
         break;
    }
    return 0;
}
