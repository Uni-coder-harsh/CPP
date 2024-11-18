#include<bits/stdc++.h>
using namespace std;

void rect_solid(int l , int b ){
    //rectangle shaape 
   for (int i = 0; i < l; i++)
   {
    for (int j = 0; j<b;j++)
    {
        cout<<"* ";
    }
    cout<<endl;
   }
   
}
void down_tri(int a ){
for (int i = 0; i<a; i++)
{
    for (int j = 0; j<=i; j++)
    {
        cout<<"* ";
    }
    cout<<endl;
}

}
void num_down_tri(int a){
    for (int i = 0; i <= a; i++)
    {
        for (int j = 1; j<=i; j++)
        {
            cout<< j <<" ";
        }
         cout<<endl;
    }
   
}
void up_tri(int a){
    for (int i = 0; i < a; i++)
    {
        for (int j = a; j > i; j--)
        {
           cout<<"* ";
        }
        cout<<endl;
    }
    
}
void middle_tri(int a){
    for (int i = 0; i < a; i++)
    {
        //space 
        for (int j=0;j<a-i-1;j++)
        {
            cout<<" ";
        }
        
        //star
        for (int k = 0; k<2*i+1;k++)
        {
            cout<<"*";
        }
        
        //space 
        for (int l=0;l<a-i-1;l++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
    
}
int main(){
   /*1. for the outer loop count the number of rows.
   2. for the inner loop focus on the column andd connect them somehow to the rows .
   3. print them inside the inner forr loop . 
   4. observe summetry {optional} */
   int l , b ;
   cin>>l>>b;
   rect_solid(l , b);
    down_tri(l);
    num_down_tri(b);
    up_tri(l);
    middle_tri(l);
}