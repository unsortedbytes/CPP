#include<bits/stdc++.h>
using namespace std;

const long long MOD = 1000000000 + 7;

long long modpow(long long a, long long b) {
    long long res = 1;

    while (b > 0) {
        if (b & 1)
            res = res * a % MOD;

        a = a * a % MOD;
        b >>= 1;
    }

    return res;
}

struct custom_database{
    // mean
    long long cnt=0;
    long long sum =0;

    // median 
    multiset<long long >lower, upper;
    void balance(){

        while(lower.size()>upper.size()+1){
            long long x = *lower.rbegin();
            upper.insert(x);
            lower.erase(lower.find(x));
        }
        while(lower.size()<upper.size()){
            long long x = *upper.begin();
            lower.insert(x);
            upper.erase(upper.find(x));
        }


    }

    // mode 
    map<long long , long long > freq;
    multiset<pair<long long , long long >>sorted_freq;



    // updates
    void insert(long long x){
        cnt++;
        sum+=x;

        // median
        if(lower.empty()){
            lower.insert(x);
        }else if(x>*lower.rbegin()){
            upper.insert(x);
        }else{
            lower.insert(x);
        }

        // mode 
        if(sorted_freq.find({freq[x],-x}) != sorted_freq.end()){
            sorted_freq.erase(sorted_freq.find({freq[x],-x}));
        }
        freq[x]++;
        if(freq[x]>0) sorted_freq.insert({freq[x],-x});
        balance();
    }
    void remove(long long x){
        cnt--;
        sum-=x;

        // median
        if(upper.find(x)!=upper.end()){
            upper.erase(upper.find(x));
        }else if(lower.find(x) != lower.end()){
            lower.erase(lower.find(x));
        }

        if(sorted_freq.find({freq[x],-x}) != sorted_freq.end()){
            sorted_freq.erase(sorted_freq.find({freq[x],-x}));
        }
        freq[x]--;
        if(freq[x]>0) sorted_freq.insert({freq[x],-x});

        balance();
    }

    // queries
    long long getMean(){
        if(cnt==0) return -1;
        long long x = gcd(sum, cnt);
        long long p = sum/x;
        long long q = cnt/x;
        if(p%q==0)return (1.0*sum/cnt);
        return p%MOD * modpow(q, MOD-2)%MOD;
    }

    long long getMedian(){
        balance();
        if(cnt==0) return -1;
        if(cnt%2){
            return *lower.rbegin();
        }else {
            long long x = gcd(*lower.rbegin()+ *upper.begin(),2);
            long long p = (*lower.rbegin()+ *upper.begin())/x;
            long long q = 2/x;
            if(p%q==0)return (*lower.rbegin()+ *upper.begin())/2;
            return p%MOD * modpow(q, MOD-2)%MOD;
        }
    }

    long long getMode(){
        if(cnt==0) return -1;

        return -sorted_freq.rbegin()->second;
    }


};

void solve(){
    long long q;cin>>q;
    custom_database ddb;
    while(q--){
        string s;cin>>s;
        if(s=="insert"){
            long long x;cin>>x;
            ddb.insert(x);
        }else if(s=="remove"){
            long long x;cin>>x;
            ddb.remove(x);
        }else if(s=="getMean"){
            cout<<ddb.getMean()<<endl;
        }else if(s=="getMedian"){
            cout<<ddb.getMedian()<<endl;
        }else if (s=="getMode"){
            cout<<ddb.getMode()<<endl;
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    long long t;cin>>t;
    while(t--) solve();
}