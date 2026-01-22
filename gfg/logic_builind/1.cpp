#include<bits/stdc++.h>
using namespace std;

void IsEven(int n){
    if (n&1 !=0){
        cout<<"Odd";
    }else{
        cout<<"Even";
    }
    cout<<endl;
}
void printTable(int n){
    for(int i = 1;i<=10;i++){
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }
}
long long findSum(int n){
    long long sum =0;
    for(int i =1;i<=n;i++){
        sum+=i;
    }
    return sum;
}
long long sumformula(int n){
    return n*1LL*(n+1)/2;
}
long long findSquareSum(int n){
    long long sum = 0;
    for(int i=1;i<=n;i++){
        sum +=i*i;
    }
    return sum;
}
long long findSquareFormula(int n){
    return ((n*1LL*(n+1)/2)*((2*n)+1))/3;
}
template<typename T>
void swapo(T &a, T &b){
    T temp = b;
    b = a;
    a = temp;
}
int closestNumber(int n, int m){
    int closest = 0;
    int minDistance = INT_MAX;
    for (int i=n-abs(m); i<= n+abs(m);i++){
        if(i%m ==0){
            // closest=max(closest, abs(i));
            if(abs(i-n)<= minDistance){
                if(abs(i)> abs(closest)) closest = i;
                minDistance = abs(i-n);
            }
        }
    }

    return closest;
}


int main(){
    // cout<<"HI";
    int n;
    cin>>n;
    IsEven(n);
    printTable(n);
    cout<<findSum(n)<<endl;
    cout<<sumformula(n)<<endl;
    cout<<findSquareSum(n)<<endl;
    cout<<findSquareFormula(n)<<endl;
    string a = "Aditya";
    string b = "Kumar";
    cout<<"Before swap "<<a<<" and "<<b<<endl;
    swapo(a, b);
    cout<<"After swap "<<a<<" and "<<b<<endl;

    int no , mo;
    cin>>no>>mo;
    cout<<closestNumber(no,mo)<<endl;
}