#include<iostream>
using namespace std;

int uniqueNumber(int arr[], int n){
     int j = n - 1;
     int unique = 0;
     for (int i = 0; i < n; i++) {
         unique = unique ^ arr[i];
    }
    return unique; 
}

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i = 0; i < n;i++){
        cin>>arr[i];
    }

    cout<<uniqueNumber(arr,n);
    return 0;
}