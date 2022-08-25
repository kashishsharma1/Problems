    #include<bits/stdc++.h>
     
    using namespace std;
     
    int t,n,a[101000],p[101000],flag,old,minn;
     
    int main(){
    	cin>>t;
    	while(t--){
    		cin>>n;
    		for(int i=1;i<=n;i++) cin>>a[i];
    		old=1;
    		minn=a[1];
    		for(int i=1;i<n;i++){
    			if(a[i]==a[i+1]){
    				old++;
    			}
    			else{
    				if(old==1){
    					flag=1;
    					break;
    				}
    				old=1;
    			}
    			minn=min(minn,a[i]);
    		}
    		if(flag) cout<<-1;
    		else{
    			cout<<minn+n-1<<" ";
    			for(int i=minn;i<minn+n-1;i++) cout<<i<<" ";
    		}
    		cout<<endl;
    	}
    }