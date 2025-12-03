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
	Node(int data1, Node* Next1){
		data = data1;
		next = Next1;
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
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}

Node* oddevenLL(Node* head){
	Node* temp = head;
	if(temp==NULL || temp->next == NULL || temp->next->next == NULL){
		return head;
	}
	vector<int> arr ;
	while(temp!=NULL && temp->next !=NULL){
		arr.push_back(temp->data);
		temp=temp->next->next;
	}
	if(temp) arr.push_back(temp->data);
	temp=head->next;
	while(temp!=NULL && temp->next !=NULL){
		arr.push_back(temp->data);
		temp=temp->next->next;
	}
	if(temp) arr.push_back(temp->data); 
	int i=0;
	temp=head;
	while(temp!=NULL){
		temp->data = arr[i];
		i++;
		temp=temp->next;
	}
	return head;
}

Node* oddevenLLoptimaized(Node* head){
	if(head == NULL || head->next == NULL ||head->next->next ==NULL){
		return head;
	}
	Node* oddhead = head;
	Node* evenhead=head->next;

	Node* odd = oddhead;
	Node* even = evenhead;
	while(even!=NULL && even->next->next){
		odd->next=odd->next->next;
		even->next = even->next->next;
		odd=odd->next;
		even=even->next;
	}

	odd->
	++++++++++next = evenhead;

	return head;
}



int main(){
	vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
	Node* head = convert2LL(arr);
	print(head);
	head = oddevenLLoptimaized(head);
	print(head);
}