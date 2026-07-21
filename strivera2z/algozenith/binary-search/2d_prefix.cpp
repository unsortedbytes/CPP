#include<bits/stdc++.h>
using namespace std;

const int MAXN = 1000;
int Arr[MAXN][MAXN];
int P[MAXN][MAXN];

void computePrefixSum(int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            P[i][j] = Arr[i][j];
            if(i>0) P[i][j]+=P[i-1][j];
            if(j>0) P[i][j] +=P[i][j-1];
            if(i>0 &&j>0) P[i][j]-=P[i-1][j-1];
        }
    }
}

int queryRectangleSum(int U, int L, int D, int R){
    // Calculate the sum of values in the specific rectangle
    int ans = P[D][R];
    if(L>0) ans-=P[D][L-1];
    if(U>0) ans-=P[U-1][R];
    if(U>0 && L>0) ans+=P[U-1][L-1];
    
    return ans;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n, m;
    cout<<"Enter the number of rows and columns:";
    cin>>n>>m;

    // Input the values in each cell of the 2D array
    cout<<"Enter the values  of the 2D array:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>Arr[i][j];
        }
    }

    computePrefixSum(n,m);

    int Q;
    cout<<"Enter the number of Queries: ";
    cin>>Q;

    // Query 
    for(int q=0;q<Q;q++){
        int U, L, D, R;
        cout<<"Enter Query"<<q+1<<"(U L D R)";
        cin>>U>>L>>D>>R;

        int result = queryRectangleSum(U, L, D, R);
        cout<<"Sum in the rectangle: "<<result<<endl;
    }
}