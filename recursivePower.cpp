#include<iostream>
using namespace std;

int recPower(int n, int p){

    if(p == 0){
        return 1;
    }

    int prevPower = recPower(n, p - 1);
    return n * prevPower;

}

int main(){

    int n,p;
    cin>>n>>p;

    cout<<recPower(n,p);
return 0;    
}