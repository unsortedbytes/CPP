#include<bits/stdc++.h>
using namespace std; 

void solveNtr(){
    int n;
    cin>>n;
    int arr[n];
    int hsh[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        hsh[i] = -1;
    }

    for(int i=0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(arr[j]>arr[i]){
                hsh[i] = arr[j];
                break;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<hsh[i]<<" ";
    }
    cout<<endl;


}
void solveOptNtr(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }


    vector<int> v;
    stack<int> s;
    for(int i = n-1;i>=0;i--){
        if(s.size() == 0){
            v.push_back(-1);
        }else if(s.size()>0 && s.top()> arr[i]){
            v.push_back(s.top());
        }else if (s.size()> 0 && s.top()<=arr[i]){
            while(s.size()>0 && s.top() <= arr[i]){
                s.pop();
            }
            if(s.size() == 0){
                v.push_back(-1);
            }else {
                v.push_back(s.top());
            }
        }
        s.push(arr[i]);
    }
    reverse(v.begin(), v.end());
    for(int i=0;i<n;i++){
        cout<<v[i] <<" ";
    }
    
}
void solveOptNtl(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> v;
    stack <int> s;
    for(int i=0;i<n;i++){
        if(s.size() == 0){
            v.push_back(-1);
        }else if(s.size() > 0 && s.top()> arr[i]){
            v.push_back(s.top());
        }else if(s.size()>0 && s.top()<=arr[i]){
            while(s.size()>0 && s.top()<=arr[i]){
                s.pop();
            }
            if(s.size() == 0 ){
                v.push_back(-1);
            }else{
                v.push_back(s.top());
            }
        }

        s.push(arr[i]);
    }
    for(int i = 0;i<n;i++){
        cout<<v[i]<<" ";
    }

}
void solveOptSsl(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> v;
    stack<int> s;
    for(int i=0;i<n;i++){
        if(s.size() == 0){
            v.push_back(-1);
        }else if (s.size()>0 && s.top()<arr[i]){
            v.push_back(s.top());
        }else if (s.size()>0 && s.top()>=arr[i]){
            while(s.size()>0 && s.top()>=arr[i]){
                s.pop();
            }
            if(s.size() == 0){
                v.push_back(-1);
            }else{
                v.push_back(s.top());
            }
        }
        s.push(arr[i]);
    }

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    
}
void solveOptSsr(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<int> v;
    stack<int> s;
    for(int i=n-1;i>=0;i--){
        if(s.size() == 0){
            v.push_back(-1);
        }else if (s.size() > 0 && s.top()<arr[i]){
            v.push_back(s.top());
        }else if(s.size()>0 && s.top()>=arr[i]){
            while(s.size()>0 && s.top()>=arr[i]){
                s.pop();
            }
            if(s.size() ==0){
                v.push_back(-1);
            }else{
                v.push_back(s.top());
            }
        }
        s.push(arr[i]);
    }
    reverse(v.begin(), v.end());

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}
void stockSpanProblen(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> v;
    stack<int> s;
    for(int i=0;i<n;i++){
        if(s.size() ==0){
            v.push_back(i+1);
        }
        else if (s.size() >0 && arr[s.top()]>arr[i]){
            v.push_back(i-s.top());
        }else if (s.size()>0 && arr[s.top()]<=arr[i]){
            while(s.size()>0 && arr[s.top()]<=arr[i]){
                s.pop();
            }
            if (s.size() == 0){
                v.push_back(i+1);
            }else{
                v.push_back(i-s.top());
            }
        }
        s.push(i);
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}
void maxAreaHistogram(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<int> vr;
    stack<int> sr;

    for(int i=n-1;i>=0;i--){
        if(sr.size() == 0){
            vr.push_back(n);
        }else if(sr.size()>0 && arr[sr.top()]<arr[i]){
            vr.push_back(sr.top());
        }else if(sr.size()>0 && arr[sr.top()]>=arr[i]){
            while(sr.size()>0 && arr[sr.top()]>=arr[i]){
                sr.pop();
            }
            if(sr.size()==0){
                vr.push_back(n);
            }else{
                vr.push_back(sr.top());
            }
        }

        sr.push(i);
    }
    reverse(vr.begin(), vr.end());
    vector<int> vl;
    stack<int> sl;
    
    for(int i=0;i<n;i++){
        if(sl.size() == 0){
            vl.push_back(-1);
        }else if(sl.size()>0 && arr[sl.top()]<arr[i]){
            vl.push_back(sl.top());
        }else if(sl.size()>0 && arr[sl.top()]>=arr[i]){
            while(sl.size()>0 && arr[sl.top()]>=arr[i]){
                sl.pop();
            }
            if(sl.size()==0){
                vl.push_back(-1);
            }else{
                vl.push_back(sl.top());
            }
        }

        sl.push(i);
    }

    vector<int> area;
    int Maxi = INT_MIN;
    for(int i=0;i<n;i++){
        area.push_back(arr[i]*(vr[i] - vl[i] -1));
        Maxi = max(Maxi, (arr[i]*(vr[i] - vl[i] -1)));
    }

    cout<<"Maxi: "<<Maxi<<endl;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        // solveNtr();
        // solveOptNtr();
        // solveOptNtl();
        // solveOptSsl();
        // solveOptSsr();
        // stockSpanProblen();
        maxAreaHistogram();
    }
}