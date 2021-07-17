#include<iostream>
using namespace std;

void swap(int arr[],int i,int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[],int l,int r,int n){
    int mid = (n/2);
    int pivot = mid;
    int i = l - 1;

    for (int j = 0; j < r; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i + 1,r);
    return i + 1;
}

void quickSort(int arr[],int l,int r,int n){
    if(l < r){
        int part = partition(arr,l,r,n);
        quickSort(arr,l,part - 1,n);
        quickSort(arr,part + 1,r,n);
    }
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0;i < n;i++){
        cin>>arr[i];
    }

    quickSort(arr,0,n-1,n);

    for(int i = 0;i < n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}