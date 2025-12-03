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
		temp=newNode;
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

Node* sortbruteforce(Node* head){
	Node* temp = head;
	int cnt0=0;
	int cnt1=0;
	int cnt2=0;
	while(temp!=NULL){
		if(temp->data == 0) cnt0++;
		else if(temp->data ==1) cnt1++;
		else cnt2++;
		temp=temp->next;
	}

	temp = head;
	while(cnt0--){
		temp->data = 0;
		temp=temp->next;
	}
	while(cnt1--){
		temp->data = 1;
		temp=temp->next;
	}
	while(cnt2--){
		temp->data = 2;
		temp=temp->next;
	}
	return head;
}

Node* optimasort(Node* head){

	if(!head) return nullptr;

	Node* temp = head;

	Node* headNode0 = new Node(-1);
	Node* Node0 = headNode0;
	Node* headNode1 = new Node(-1);
	Node* Node1 = headNode1;
	Node* headNode2 = new Node(-1);
	Node* Node2 = headNode2;

	while(temp!=NULL){
		if(temp->data ==0){
			Node0->next = temp;
			Node0=Node0->next;
		}else if(temp->data == 1){
			Node1->next = temp;
			Node1=Node1->next;
		}else{
			Node2->next=temp;
			Node2=Node2->next;
		}
		temp=temp->next;
	}
	Node0->next = nullptr;
	Node1->next = nullptr;
	Node2->next = nullptr;

	Node1->next = headNode2->next;
	Node0->next = headNode1->next;
	Node2->next = NULL;
	head = headNode0->next;


	delete headNode0;
	delete headNode1;
	delete headNode2;
	return head;

}

int main(){
	vector<int> arr =  {1,1, 0, 0, 2, 1, 0 , 2, 1, 1};
	Node* head = convert2LL(arr);
	print(head);
	// head = sortbruteforce(head);
	head = optimasort(head);
	print(head);
}