            #include<bits/stdc++.h>
            using namespace std;
             
            int main(){
              long long t;
              cin>>t;
              
              while(t--)                    
              {
                  long long n;
                  cin>>n;
                  
                  long long x=n/3;
                  
                  if(n%3==0)
                  cout<<x<<" "<<x+1<<" "<<x-1;
                  
                  else if(n%3==1)
                  cout<<x<<" "<<x+2<<" "<<x-1;
                  
                  else 
                  cout<<x+1<<" "<<x+2<<" "<<x-1;
                  
                  cout<<'\n';
              }
            }