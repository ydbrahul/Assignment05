#include<bits/stdc++.h>
using namespace std;

vector<int> findOriginalArray(vector<int> & changed){
    unordered_map<int,int> mp;
    vector<int> ans;
    for(auto x: changed) mp[x]++;
    sort(changed.begin(),changed.end());
    for(auto x: changed){
        if(mp[x]==0) continue;
        mp[x]--;
        if(mp[2*x]==0) return {};
        else{
            ans.push_back(x);
            mp[2*x]--;
        }

    }
    return ans;
}

int main(){
    vector<int> changed={6,3,0,1};

    vector<int> ans=findOriginalArray(changed);

    for(auto x: ans) cout<<x<<" ";

    return 0;
}