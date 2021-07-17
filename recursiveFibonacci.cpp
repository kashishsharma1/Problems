#include<iostream>
using namespace std;

int recFib(int n){

    if(n == 0 || n == 1){
        return n;
    }

    return recFib(n-1) + recFib(n-2);
}

int main(){

    int n;
    cin>>n;

    cout<<recFib(n);
    return 0;
}