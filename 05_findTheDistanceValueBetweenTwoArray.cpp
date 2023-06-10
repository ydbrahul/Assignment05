#include<bits/stdc++.h>
using namespace std;
int findTheDistanceValue(vector<int> arr1,vector<int> arr2, int d){
     int cnt=0;
        for(auto x: arr1){
            bool flag=true;
            for(auto y: arr2){
                if(abs(x-y)<=d) {
                    flag=false;
                    break;
                }

            }
            if(flag) cnt++;
        }
        return cnt;
    
}

int main(){
    vector<int> arr1={4,5,8};
    vector<int> arr2={10,9,1,8};

    int d=2;
    
    cout <<findTheDistanceValue(arr1,arr2,d);
    return 0;

}
