#include <bits/stdc++.h>
#define INF 1000000000
using namespace std;

int main()
{
    int n, sum;
    cin>>n>>sum;
    int c[n];
    for(int i = 0; i < n; i++){
        cin>>c[i];
    }
    int dp[sum+1];
    dp[0] = 1;
    for(int x = 1; x <= sum; x++){
        dp[x] = 0;
        for(int coin : c){
            if(x - coin >= 0){
                dp[x] += dp[x-coin];
            }
        }
    }

    cout<<(dp[sum]%(1e9+7))<<endl;
}