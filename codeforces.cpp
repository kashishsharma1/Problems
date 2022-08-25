#include<iostream>
#include<vector>
using namespace std;
         
         
int SumClosure(vector<int> arr,int n,int sum){

    for(int i = 0; i < n;i++){
        sum += arr[i];
    }
    
}
         
         
int main(){
    int n;
    cin>>n;
    
    vector<int> arr(n);
    
    for(int i = 0; i < n;i++){
        int temp;
        cin>> temp;
        arr.push_back(temp);
    }
   
    int newSum = SumClosure(arr,n,0);
    if(newSum == 0){
        cout<<"Yes";
    }
    else{
        cout<<"NO";
    }

}

