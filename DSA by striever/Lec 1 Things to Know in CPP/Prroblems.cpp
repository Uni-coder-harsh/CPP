#include<bits/stdc++.h>
using namespace std;


int main(){
    string s,p;
    cin>>s>>p;
    size_t pos=s.find(p);
    if (pos!=string::npos)
        {cout<<"found on index : "<<pos<<endl;}
    else{
        cout<<"string not found"<<endl;
    }
    string rev=s;
    reverse(rev.begin(), rev.end());
    cout<<rev<<endl;
    size_t posi=rev.find(p);
    if (posi!=string::npos)
        {cout<<"found on reversing with index : "<<posi<<endl;}
    else{
        cout<<"string not found"<<endl;
    }
    return 0 ; 
}