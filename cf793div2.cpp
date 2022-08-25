/*#include<iostream>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>>n;
        string s =" ";
        for(int i = 0; i < n;i++){
            int char s;
            cin>>c;
            s += c; 
        }


    }
}*/


    #include<bits/stdc++.h>
    using namespace std;
     
    void solve(){
        int n;
        cin >> n;
        string a;
        cin >> a;
        int i, count = 0, x = n/2;
        if(n & 1){
            count++;
        }
        
        for(i = n/2 - 1; i >= 0; i--){
            if(a[i] == a[x] ){
                count += 2;
            }
            else
                break;
        }
     
        cout << count << endl;

    }
     
    int main()
    {
        int t; 
        cin >> t;
        while(t--){
            solve();
        }
        return 0;
    }