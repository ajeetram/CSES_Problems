#include<bits/stdc++.h>
using namespace std;
#define mod  1000000007

int main()
{
    long long n;
    cin>>n;
    vector<long long>DP(n+1,0); //+> Dp initialized with all value zero if n=3->2,1,0
    //Base case
    DP[0]=1;// not any through
    DP[1]=1;// for getting n=1 only one choice that it will come 1;
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=6;j++)
        {
            if(j>i) continue;
            DP[i]= (DP[i]%mod + DP[i-j]%mod)%mod;
        }
    }
    cout<<DP[n]%mod;
}