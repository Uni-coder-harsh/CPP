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
    vector<int>vectorr{5,100};
    //creates 5 spaces of memory 100 bits & can also creates 5 spaces  

    // accessing the vectors
    // using the index 
    cout<<vectorr[2];
    // Usng Iterators
    // iterators refers to the memory not the value 
    // hence pointer * is used to refer to the value
    vector<int>::iterator it = vectorr.begin();
    cout<<" "<<*(it);
    it++;
    cout<<" "<<*(it++);
    vector<int>::iterator itt = vectorr.end();
    // end refers  to thee memory location just after the last element
    //vector<int>::iterator it = vectorr.rend();
    
    // it reffers to the position just before the fist position after reversing 
    //vector<int>::iterator it = vectorr.rbegin();
 
    // while rbegin refer the last position after reversing 
    // doing the post increament to reveerse let it move to the element before the last element
 
    cout<<v[0]<<" "<<v.at(0);

    cout<<" "<< v.back()<<endl;

    for(vector<int>::iterator itt=vectorr.begin(); itt != vectorr.end(); itt++){
        cout<<*(it)<<"  "<<endl;
    }

    // the stl function "auto" automaticly assign the data type by the data 
    for(auto it=v.begin(); it!=v.end() ; it++){
        cout<<*(it)<<endl;
    }  

    // other way 
    for(auto it:v){
        cout<<it<<" ";
    }

    //erasing the element
    v.erase(v.begin()+2 , v.end()+2);
        
    return 0 ; 
}