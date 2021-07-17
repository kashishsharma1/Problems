#include<iostream>
using namespcace std;

int main(){
    int n, m;
    cin>>n>>m;

    int key;
    cin>>key;

    int arr[n][m];
     
    for(int i = 0; i < n;i++){
        for(int j = 0; j < m; j++){
            cin>> arr[n][m];
        }
    }

    int r = 0, c = m-1;
    bool found = false;
    while(r < n and c >= 0){
        if(arr[r][c] == key){
            found = true;
        }

        if(arr[r][c] > key){
            c--;
        }
        else{
            r++;
        }
    }
    if(found){
        cout<<"Element found";
    }
    else{
        cout<<"Element does not exist";
    }

 return 0;

}