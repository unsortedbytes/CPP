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
		back = back1;
	}
};

Node* convert2DLL(vector<int> &arr){
	Node* head = new Node(arr[0]);
	Node* prev = head;
	for(int i=1;i<arr.size();i++){
		Node* temp = new Node(arr[i], nullptr, prev);
		prev->next = temp;
		prev = temp;
	}
	return head;
}

void print(Node* head){
	Node* temp = head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

Node* reverseDLLbydata(Node* head){
	// changing the data
	Node* temp = head;
	stack<int> st;
	while(temp!=NULL){
		st.push(temp->data);
		temp=temp->next;
	}
	temp=head;
	while(temp!=NULL){
		temp->data = st.top();
		st.pop();
		temp=temp->next;
	}

	return head;
}

Node* reverseDLLbylink(Node* head){
	// changing the link
	if(head == NULL||head->next==NULL){
		return head;
	}
	Node* temp = head;
	Node* prev = NULL;
	while(temp!=NULL){
		prev=temp->back;
		temp->back=temp->next;
		temp->next=prev;
		temp=temp->back;

	}

	return prev->back;
}

int main(){
	vector<int> arr = {1, 3, 4, 6, 7, 90};
	Node* head = convert2DLL(arr);
	print(head);
	head = reverseDLLbydata(head);
	print(head);
	head = reverseDLLbylink(head);
	print(head);
}