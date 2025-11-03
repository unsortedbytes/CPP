#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node* next;

public:
	Node(int data1, Node* next1){
		data = data1;
		next = next1;
	}

public:
	Node(int data1){
		data = data1;
		next = nullptr;
	}
};

Node* convertArr2LL(vector<int> &arr){
	Node* head = new Node(arr[0]);
	Node* mover =head;
	for(int i=1;i<arr.size();i++){
		Node* temp = new Node(arr[i]);
		mover->next = temp;
		mover = temp;
	}
	return head;
}

int lengthOfLL(Node* head){
	int cnt = 0;
	Node* temp = head;
	while(temp){
		cnt++;
		temp= temp->next;
	}
	return cnt;
}

bool checkIpPresent(Node* head, int val){
	Node* temp = head;
	while(temp){
		if(temp->data == val){
			return true;
		}
		temp=temp->next;
	}
	return false;
}

int main(){
	// int x=2;
	// int*y = &x;
	// cout<<y<<endl;
	// cout<<*y<<endl;

	vector<int> arr = {12, 4, 5, 2, 9};
	Node*  y  = new Node(arr[0], nullptr);
	cout<<y<<endl;
	cout<<(*y).data<<endl;
	cout<<y->data<<endl;

	Node* head = convertArr2LL(arr);
	// cout<<head->data<<endl;

	Node* temp = head;
	while(temp){
		cout<<temp->data<<" ";
		temp = temp->next;
	}

	cout<<endl;
	cout<< lengthOfLL(head)<<endl;
	cout<<"Check if 4 is present or not: "<<checkIpPresent(head, 4)<<endl;
}