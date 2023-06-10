#include<bits/stdc++.h>
using namespace std;

 
int arrangeCoins(int n) {
        int lb=1,ub=n;
        long mid=0;
        while(lb<=ub)
        {
            mid=lb+(ub-lb)/2;
            long total=(mid*(mid+1))/2;
            if(total==n)
                return mid;
            else if(total<n)
                lb=mid+1;
            else
                ub=mid-1;
        }
        return ub;
}


int main(){

    int n=5;
    cout<<arrangeCoins(n);
}