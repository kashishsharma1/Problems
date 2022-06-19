#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j = 0;
        for(int i = m; i < n+m;i++){
            nums1[i] = nums2[j++];
        }
        sort(nums1.begin(),nums1.end());
    }

    int main(){
        vector<int> nums1 = {1,2,3,0,0,0}; 
        int m = 3;
        vector<int> nums2 = {2,5,6};
        int n = 3;
        merge(nums1,m,nums2,n);
        for(int i = 0; i < m+n; i++ ){
            cout<<nums1[i]<<" ";
        }
        return 0;
    }