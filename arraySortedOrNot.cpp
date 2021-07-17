#include<iostream>
using namespace std;

//checks for strictly increasing
bool isSorted(int arr[],int n){

    if(n == 1){
        return true;
    }

    bool leftArray = isSorted(arr+1,n-1);
    return (arr[0] < arr[1] && leftArray);
}

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i = 0; i < n;i++){
        cin>>arr[i];
    }

    cout<<isSorted(arr,n)<<endl;
    return 0;
}