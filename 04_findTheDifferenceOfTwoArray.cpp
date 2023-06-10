#include<bits/stdc++.h>
using namespace std;

 vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st1;
        unordered_set<int> st2;
        for(auto x: nums1){
            st1.insert(x);
        }
        for(auto x: nums2){
            st2.insert(x);
        }
        vector<vector<int>>ans(2, vector<int>());
        for(auto x: st1){
           
            if(!st2.count(x)) ans[0].push_back(x);
        }
        for(auto x: st2){
            if(!st1.count(x)) ans[1].push_back(x);
        }
        return ans;
    }

int main(){
    vector<int> nums1={1,2,3};
    vector<int> nums2={2,4,6};

    vector<vector<int>> ans=findDifference( nums1, nums2);
    for(auto x: ans){
        for(auto y: x) cout<<y<<" ";
        cout<<endl;
    }
}