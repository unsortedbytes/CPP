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
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

Node* sumof2LL(Node* head1, Node* head2){
	Node* t1 = head1;
	Node* t2=head2;
	Node* dummyNode = new Node(-1);
	Node* current = dummyNode;
	int carry=0;
	while(t1!=NULL || t2!=NULL){
		int sum = carry;
		if(t1!=NULL) sum +=t1->data;
		if(t2!=NULL) sum += t2->data;

		Node* newNode = new Node(sum%10);
		carry = sum/10;

		current->next= newNode;
		current = current->next;

		if(t1) t1=t1->next;
		if(t2) t2=t2->next;
	}
	if(carry){
		Node* newNode = new Node(carry);
		current->next = newNode;
	}

	return dummyNode->next;


}

int main(){

	vector<int> vec1={3,5,6,2};
	Node* LL1 = convert2LL(vec1);
	print(LL1);
	vector<int> vec2 = {2, 4, 5, 7};
	Node* LL2 = convert2LL(vec2);
	print(LL2);
	Node* sumof2 = sumof2LL(LL1, LL2);
	print(sumof2);
}