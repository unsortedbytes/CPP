#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node* next;
	Node* back;

public:
	Node(int data1){
		data = data1;
		next = nullptr;
		back = nullptr;
	}

public:
	Node(int data1, Node* next1, Node* back1){
		data = data1;
		next = next1;
		back = prev1;  
	}

}

Node* convertArr2DLL(vector<int> &arr){
	Node* head = new Node(arr[0]);
}

int main(){
	vector<int> arr  = {12, 3, 5, 6}; 
	Node* head = convertArr2DLL(arr); 
	return 0; 
}