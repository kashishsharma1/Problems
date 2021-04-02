#include<iostream>
#include<climits>
using namespace std;

/*int max(int wrapSum,int nonwrapSum){
    if(wrapSum > nonwrapSum)
        return wrapSum;
    else
        return nonwrapSum;    
}*/

int kadane(int arr[],int n){
    //using kadane's algo
    int currentSum = 0;
    int maxSum = INT_MIN;
    for(int i = 0;i < n;i++){
        currentSum += arr[i];
        if(currentSum < 0){
            currentSum = 0;
        }
        maxSum = max(maxSum,currentSum);
    }
    return maxSum;
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0; i < n;i++){
        cin>>arr[i];
    }
    int wrapSum , nonwrapSum;
    nonwrapSum = kadane(arr,n);
    int totalSum = 0;
    for(int i = 0; i < n;i++){
        totalSum += arr[i];
        arr[i] = -arr[i];
    }
    wrapSum = totalSum + kadane(arr,n);
    cout<< max(wrapSum,nonwrapSum)<<endl;
    return 0;
}