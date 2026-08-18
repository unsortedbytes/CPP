#include<bits/stdc++.h>
using namespace std;

struct Ak_dataset {
    // mean
    int N = 0;
    double   sum =0;
    // varience
    double   squaresum = 0;

    // median
    multiset<double> lower, upper;

    // mode 
    map<double , double > freq;
    multiset<pair<double , double >>sorted_freq;

    void balance(){
        // balance 
        if(lower.size()<upper.size()){
            double t = *upper.begin();
            lower.insert(t);
            upper.erase(upper.find(t));
        }else if(lower.size()-upper.size()>1){
            double t = *lower.rbegin();
            upper.insert(t);
            lower.erase(lower.find(t));
        }
    }

    // updates
    void insert(double  x){
        N++;
        sum+=x;
        squaresum+=x*x;
        // Median 

        if(lower.empty())lower.insert(x);
        else if(x<*lower.rbegin()){
            lower.insert(x);
        }else{
            upper.insert(x);
        }
        balance();

        // mode 
        if(sorted_freq.find({freq[x],x}) != sorted_freq.end()){
            sorted_freq.erase(sorted_freq.find({freq[x],x}));
        }
        freq[x]++;
        sorted_freq.insert({freq[x], x});

    }

    void remove(double  x){
        N--;
        sum-=x;
        squaresum-=x*x;

        // median
        if(upper.find(x)!=upper.end()){
            upper.erase(upper.find(x));
        }else if(lower.find(x)!=lower.end()){
            lower.erase(lower.find(x));
        }

        balance();


        // mode 
        if(sorted_freq.find({freq[x],x}) != sorted_freq.end()){
            sorted_freq.erase(sorted_freq.find({freq[x],x}));
        }

        freq[x]--;
        if(freq[x]>0) sorted_freq.insert({freq[x],x});
    }
    // queries
    double   mean(){
        return 1.0*sum/N;
    }

    double   varience(){
        // return (1.0*squaresum/N)-(1.0*sum*sum/N*N);
        return (squaresum/N) - (mean()*mean());
    }

    double   median(){
        balance();
        if(N%2){
            return *lower.rbegin();
        }else{
            return (*lower.rbegin()+ *upper.begin())/2.0;
        }

    }
    double  mode(){
        return sorted_freq.rbegin()->second;
    }
};


signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    Ak_dataset ddb;
    ddb.insert(3);
    ddb.insert(4);
    ddb.insert(6);
    ddb.insert(2);
    ddb.insert(6);
    cout<<ddb.mean()<<endl;
    cout<<ddb.median()<<endl;
    cout<<ddb.varience()<<endl;
    cout<<ddb.mode()<<endl;

    
}