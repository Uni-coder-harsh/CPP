#include<bits/stdc++.h>
using namespace std;


int main(){
    // Vectors in c++
    vector<int>v;//this creates a container with dynamic size
    v.push_back(1);
    v.emplace_back(2);
    // emplace_back is faster than push_back
    vector<pair<int,int>>vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2);
    //for push_back we have to give the curly brackets while in emplace_back we don't require the curly brackets
    vector<int>vector{5,100};
    //creates 5 spaces of memory 100 bits & can also creates 5 spaces  

    return 0 ; 
}