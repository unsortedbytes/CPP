#include<bits/stdc++.h>
using namespace std;

// Selection Sort-> time coplexity N^2
void seclectionshorting(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int mini_index = i;
        for(int j = i+1;j<n;j++){
            if(arr[mini_index]>arr[j]){
                mini_index = j;
            }
        }
        swap(arr[i], arr[mini_index]);
    }
}

// Bubble sort -> N^2
void bubbleShorting(int arr[], int n){
    for(int i=n-1;i>=1;i--){
        int didSwap=0;
        for(int j=0;j<i;j++){
            if(arr[j]>arr[i]){
                swap(arr[j], arr[i]);
                didSwap=1;
            }
        }
        if(didSwap == 0){
            break;
        }
    }
}

// Insertion Sort
void insertionShorting(int arr[], int n){
    for(int i=0;i<n;i++){
        int j = i;
        while(j>0&&arr[j-1]>arr[j]){
            swap(arr[j-1], arr[j]);
            j--;
        }
    }
}

// Merge Sort NlogN
void mergeShorting(int arr[], int n){

}

int main(){
    int arr[7]={3, 4, 2, 5, 7,23,443};

    insertionShorting(arr, 7);
    for(auto it : arr){
        cout<<it<<endl;
    }
}