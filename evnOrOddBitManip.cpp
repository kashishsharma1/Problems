#include<iostream>
using namespace std;

void evenOdd(int n){
   
   if( n & 1
   ){
       cout<<"odd";
   }
   else{
       cout<<"even";
   }
}


int main(){

    int n;
    cin>>n;
    
    cout<<evenOdd(n);
    return 0;
}