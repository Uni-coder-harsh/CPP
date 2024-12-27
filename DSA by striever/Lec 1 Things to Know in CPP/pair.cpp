#include<bits/stdc++.h>
using namespace std;

// Pair in C++
// they lies inside utilities library 
int main(){
    pair<int , int>p={1,2};
    cout<<p.first<<" "<<p.second<<endl;
    //can use nested pair
    //pair<int , pair<int,int>>pi={1,{2,3}};
    //using array with pair
    pair<int,int>arr[]={{1,2},{3,4},{5,6},{5,7}};
    cout<<arr[1].first;
    return 0 ; 
}