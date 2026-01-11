#include<bits/stdc++.h>
using namespace std;

void printpattern1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void printpattern2(int n){
        for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void printpattern3(int n){
        for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<j+1;
        }
        cout<<endl;
    }
}
void printpattern4(int n){
        for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}
void printpattern5(int n){
    for(int i=n;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void printpattern6(int n){
        for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
void printpattern7(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int j=0;j<(2*i)+1;j++){
            cout<<"*";
        }
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void printpattern8(int n){
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int j=0;j<(2*i)+1;j++){
            cout<<"*";
        }
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void printpattern9(int n){
    for(int i=0;i<(2*n);i++){
        int io = i;
        if(i>n-1){
            io= i-2*(i%(n))-1;
        }
        for(int j=0;j<n-io;j++){
            cout<<" ";
        }
        for(int j=0;j<(2*io)+1;j++){
            cout<<"*";
        }
        for(int j=0;j<n-io;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void printpattern10(int n){
    for(int i=0;i<2*n-1;i++){
        int io = i;
        if(io>n-1){
            // io = n-(i%n);
            // io = n - (i-n);
            io = 2*n - i -2;
        }
        for(int j=0;j<=io;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void printpattern11(int n){
    int status = true;
    for(int i =0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<status<<" ";
            status = !status;
        }
        cout<<endl;
    }
}
void printpattern12(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int j = 1;j<=2*(n-i);j++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }    
}
void printpattern13(int n){
    int val = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<val<<" ";
            val++;
        }
        cout<<endl;
    }
}
void printpattern14(int n){
    char val = 'A';
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<char(val+j);
        }
        cout<<endl;
    }
}
void printpattern15(int n){
    char val = 'A';
    for(int i=0;i<n;i++){
        for(int j=0;j<=n-1-i;j++){
            cout<<char(val+j);
        }
        cout<<endl;
    }  
}
void printpattern16(int n){
    char val = 'A';
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<char(val);
        }
        val++;
        cout<<endl;
    }
}
void printpattern17(int n){
    for(int i=0;i<n;i++){
        for(int j =0;j<n-i-1;j++){
            cout<<" ";
        }

        for(int j=0;j<2*i + 1;j++){
            char val = 'A';
            int jo=j;
            if (jo>i) {
                jo = 2*i - j ;
            }
            cout<<char(val + jo);
        }

        for(int j =0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void printpattern18(int n){
    char val =  'E';
    for (int i=0;i<n;i++){
        for(int j = i;j>=0;j--){
            cout<<char(val-j)<<" ";
        }
        cout<<endl;
    }
}
void printpattern19(int n){
    for(int i =0;i<n;i++){
        for(int j = 0;j<n-i;j++){
            cout<<"* ";
        }

        for(int j = 0;j<2*i;j++){
            cout<<"  ";
        }

        for(int j = 0;j<n-i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i =0;i<n;i++){
        for(int j = 0;j<=i;j++){
            cout<<"* ";
        }

        for(int j = 0;j<2*n - 2*i-2;j++){
            cout<<"  ";
        }

        for(int j = 0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void printpattern20(int n){
    for(int i=0;i<2*n -1;i++){
        int start = i;
        if(start>n-1){
            start = 2*n -i -2;
        }
        for(int j = 0;j<=start;j++){
            cout<<"*";
        }
        for(int j = 2*(n-start-1);j>0;j--){
            cout<<" ";
        }
        for(int j = 0;j<=start;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void printpattern21(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0||i==n-1||j==0||j==n-1){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
void printpattern22(int n){
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n -1;j++){
            int top = i;
            int bottom = 2*n - 2 -i;
            int left = j;
            int right = 2*n -2 -j;
            int mini = min(min(top,bottom), min(left, right));
            cout<<n-mini;
        }
        cout<<endl;
    }
}


int main(){
    int n;
    cin>>n;
    printpattern1(n);
    printpattern2(n);
    printpattern3(n);
    printpattern4(n);
    printpattern5(n);
    printpattern6(n);
    printpattern7(n);
    printpattern8(n);
    printpattern9(n);
    printpattern10(n);
    printpattern11(n);
    printpattern12(n);
    printpattern13(n);
    printpattern14(n);
    printpattern15(n);
    printpattern16(n);
    printpattern17(n);
    printpattern18(n);
    printpattern19(n);
    printpattern20(n);
    printpattern21(n);
    printpattern22(n);
}