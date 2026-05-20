// #include<bits/stdc++.h>
// using namespace std;

// void print_vec(vector<int> &v){
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }

// void solve(){
//     int n,q;
//     cin>>n>>q;
//     // cout<<"n : "<<n;
//     map<int, vector<int>> m;
//     for(int i=1;i<=n;i++){
//         int x;
//         cin>>x;
        
//         m[x].push_back(i);
//     }
//     for(int i=1;i<=q;i++){
//         int k;
//         cin>>k;
//         print_vec(m[k]);
//     }
// }

// signed main(){
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);cout.tie(0); 
//     int t;
//     cin>>t;
//     while(t--){
//         solve();
//     }
// }

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,q;
    cin>>n>>q;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // peak element index
    int pi=-1;
    int high =n-1;
    int low =0;
    while(low<high){
        int mid = (low+high)/2;
        if(mid>0 && mid<n-1){
            if(arr[mid]>arr[mid-1]&& arr[mid]>arr[mid+1]){
                pi=mid;
                break;
            }else if(arr[mid]>arr[mid-1]&& arr[mid]<arr[mid+1]){
                low = mid+1;
            }else if(arr[mid]<arr[mid-1]&& arr[mid]>arr[mid+1]){
                high = mid-1;
            }
        }else if(mid ==0&& arr[mid]>arr[mid+1]){
            pi = mid;
            break;
        }else{
            pi = n-1;
            break;
        }
    }

    if(pi ==-1){
        pi = low;
    }

    // binary search on the both the parts



    for(int i=0;i<q;i++){
        int k;
        cin>>k;
        // binary search on the lower side 
        int ll=0;
        int lh=pi-1;
        while(ll<=lh){
            int lm = (ll+lh)/2;
            if(arr[lm]==k){
                cout<<lm+1<<" ";
                break;
            }else if (arr[lm]>k){
                lh=lm-1;
            }else{
                ll = lm+1;
            }
        }

        // binary search on the other side 
        int ol = pi;
        int oh = n-1;
        while(ol<=oh){
            int om = (ol+oh)/2;
            if(arr[om]==k){
                cout<<om+1<<" ";
                break;
            }else if (arr[om]>k){
                ol = om +1;
            }else{
                oh = om -1;
            }
        }
        cout<<endl;
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}