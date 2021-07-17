#include<iostream>
#include<vector>
using namespace std;

bool isPalindrome(vector<int> arr, int n){

    vector<int> v;

    for(int i = n-1; i >= 0; i--){

        v.push_back(arr[i]);
    }

    if(arr == v){
        cout<<"palindrome";
    } 
    else{
        cout<<"not palindrome";
    }
}

int main(){
    
    int n;
    cin>>n;
    vector<int> arr;

    for(int i = 0; i < n;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }

    isPalindrome(arr,n);
    return 0;
}