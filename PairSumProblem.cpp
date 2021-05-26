#include<iostream>
using namespace std;

//check if there exits two elements in an array such that their sum is equal to given k.
bool pairSum(int arr[],int n, int k){
    int lowLim = 0;
    int uppLim = n-1;

    while(lowLim < uppLim){
        if(arr[lowLim] + arr[uppLim] == k){
            cout<<lowLim<<" "<<uppLim<<endl;
            return true;
        }
        else if(arr[lowLim] + arr[uppLim] > k){
            uppLim--;
        }else{
            lowLim++;
        }
    }
    return false;
} 

int main(){
    int arr[] = {2,4,7,11,16,20,21};
    int k = 23;

    cout<<pairSum(arr,8,k)<<endl;
    return 0;
}