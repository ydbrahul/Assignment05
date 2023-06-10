#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if (original.size() != m*n) 
            return {};
        vector<vector<int>> ans(m, vector<int>(n,0));
        for(int i=0;i<original.size();i++)
		    ans[i/n][i%n] = original[i];
        return ans;
    }

int main(){
    vector<int> original = {1,2,3,4};
    int m = 2, n = 2;

    vector<vector<int>> ans= construct2DArray(original,m,n);
    for(auto x: ans){
        for(auto y: x) cout<<y<<" ";
        cout<<endl;
    }

    return 0;

}