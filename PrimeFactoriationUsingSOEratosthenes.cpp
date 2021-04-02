#include<iostream>
using namespace std;

void primeFactor(int n){
    int smallestPrimeFactor[100] = {0};
    for(int i = 2;i <= n;i++){
        smallestPrimeFactor[i] = i;
    }
    for(int i = 2;i <= n;i++){
        if(smallestPrimeFactor[i] == i)
            for(int j = i * i;j <= n;j+=i)
                if(smallestPrimeFactor[j] == j)
                    smallestPrimeFactor[j] = i;
    }
    while(n != 1){
        cout<< smallestPrimeFactor[n]<<" ";
        n = n/smallestPrimeFactor[n];
    }
}

int main(){
    int n;
    cin>>n;

    primeFactor(n);
    return 0;
}