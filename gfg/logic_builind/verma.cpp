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

int main(){
    int t;
    cin>>t;
    while(t--){
        // solveNtr();
        // solveOptNtr();
        solveOptNtl();
    }
}