#include<bits/stdc++.h>
using namespace std;

const int MAXN = 1007;
int Arr[MAXN][MAXN];
int P[MAXN][MAXN];

void computePrefixSum(int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            P[i][j]=Arr[i][j];
            if(i>0) P[i][j]+=P[i-1][j];
            if(j>0) P[i][j]+=P[i][j-1];
            if(i>0 && j>0) P[i][j] -=P[i-1][j-1];
        }
    }
}

long long querySum(int U, int L, int D, int R){
    long long ans = P[D][R];
    if(L>0) ans-=1LL*P[D][L-1];
    if(U>0) ans-=1LL*P[U-1][R];
    if(L>0 && U>0) ans+=1LL*P[U-1][L-1];

    return ans;
}



signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    
    int n, m, q;
    cin>>n>>m>>q;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>Arr[i][j];
        }
    }

    // Prefix sum 
    computePrefixSum(n,m);

    // ans
    for(int i=0;i<q;i++){
        int x1, y1, x2, y2;
        cin>>x1>>y1>>x2>>y2;
        long long rel = querySum(x1-1,y1-1, x2-1, y2-1);
        cout<<rel<<endl;
    }


}