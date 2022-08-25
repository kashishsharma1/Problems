#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n ;
    cin>> n ;
    int arr [n] ;
    
    int tot = 0 ;
    for ( int i = 0 ; i < n ; i ++ )
    {
        int x ;
        cin>>x ;
        arr[i] = x ;
        tot += x ;
    }
    
    for ( int i = 0 ; i < n ; i ++ )
    {
        if ( arr[i] * n == tot )
        {
            cout<<"YES";
            break;
        }
        if ( i == n - 1)
            cout<<"NO" ;
    }
    cout<<endl;
    
}
 
int main()
{
    int t ;
    cin>>t ;
    
    for ( int i = 0 ; i < t ; i ++ )
    {
        solve() ;
    }
}