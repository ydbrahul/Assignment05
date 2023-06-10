#include<bits/stdc++.h>
using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
         vector<int> absArr=nums;
         
         int i=0;
         int j=nums.size()-1;
         int k=j;

         while(i<=j){
             if(abs(nums[j])>=abs(nums[i])) {
             absArr[k--]=nums[j]*nums[j];
             j--;
             }
             else {
                 absArr[k--]=nums[i]*nums[i];
                 i++;
             }
            
         }
         return absArr;
    }


int main(){

    vector<int> nums={-4,-1,0,3,10};
    vector<int> ans=sortedSquares(nums);

    for(auto x: ans) cout<<x<<" ";


}