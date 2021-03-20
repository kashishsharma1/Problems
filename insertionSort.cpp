#include<iostream>
using namespace std;

int main(){
    int n;    //number of elements in array
    cin>>n;

    int arr[n];  //declaration of array
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
// loop for sorting array
    for(int i = 0; i < n; i++){
        int current = arr[i];
        int j = i - 1;
        while(arr[j] > current && j >= 0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }
// print sorted array
    for(int i = 0; i < n; i++){
        cout<< arr[i] <<" ";
    }cout<<endl;
}