#include<iostream>
#include<vector>
using namespace std;


int firstOcc(vector<int> arr,int n,int index,int key){
//to return index of first occurence of the key
    if(index == n){
        return -1;
    }

    if(arr[index] == key){
        return index;
    }

    return firstOcc(arr,n,index+1,key);
}

int lastOcc(vector<int> arr, int n,int index,int key){
    // to return index of last occurence of the key
    int restArr = lastOcc(arr,n.index+1,key);

    if(restArr != -1){
        return restArr;
    }

    if(arr[index] == key){
        return index;
    }

    return -1;
}

int main(){
    int n;
    cin>>n;

    vector<int> arr(n);

    for(int i = 0;i < n;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }

    int index;
    cin>>index;
     
    int key;
    cin>>key; 

    cout<<firstOcc(arr,n,index,key)<<endl;
    cout<<lastOcc(arr,n,index,key)<<endl;

    return 0;
}