#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node* next;

public:
	Node(int data1){
		data = data1;
		next = nullptr;
	}

public:
	Node(int data1, Node* next1){
		data = data1;
		next = next1;
	}
};

Node* convert2LL(vector<int> &arr){
	Node* head = new Node(arr[0]);
	Node* temp = head;
	for(int i=1;i<arr.size();i++){
		Node* newNode = new Node(arr[i]);
		temp->next = newNode;
		temp = newNode;
	}
	return head;
}

void print(Node* head){
	Node* temp = head;
	while(temp){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

Node* removingNthelementbruteforce(Node* head, int val){
	
}

int main(){
	vector<int> arr = {2, 5, 2, 6, 8};
	Node* head = convert2LL(arr);
	print(head);
}