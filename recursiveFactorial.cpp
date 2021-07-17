#include<iostream>
using namespace std;

int recFactorial(int n){

    if(n == 0){
        return 1;
    }

    int prevFactorial = recFactorial(n - 1);
    return n * prevFactorial;
}

int main(){

    int n;
    cin>>n;

    cout<<recFactorial(n)<<endl;
    return 0;
}