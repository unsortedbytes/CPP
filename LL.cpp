#include<bits/stdc++.h>
using namespace std;

struct Node{
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
		data=data1;
		next=nullptr;
	}
};


Node* convertArr2LL(vector<int> &arr){
	Node* head= new Node(arr[0]);
	Node* mover = head;
	for(int i=1;i<arr.size();i++){
		Node* temp = new Node(arr[i]);
		// (*mover).next= temp;
		mover->next = temp;
		mover = temp;
	}

	return head;
}


int lengthofLL(Node* head){
	int cnt=0;
	while(head){
		cnt++;
		head=head->next;
	}
	return cnt;
}

bool checkifexistornot(Node* head, int n){
	while(head){
		if(head->data==n){
			return true;
		}
		head=head->next;
	}
	return false;
}



int main(){
	vector<int> arr={3,4 , 53, 23, 5, 3, 1};
	// // Node* y = new Node(arr[0], nullptr);// Heap memory
	// Node y  = Node(arr[0], nullptr);// Stack memory
	// cout<<y.data;


	Node x = Node(2, nullptr);
	cout<<x.data<<endl;
	Node* y = &x;
	cout<<y->data<<endl;
	cout<<(*y).data<<endl;


	Node* a = new Node(4, nullptr);
	cout<<(*a).data<<endl;
	cout<<a->data<<endl;


	Node* head = convertArr2LL(arr);
	cout<<head->data<<endl<<endl<<endl;

	// Transverse

	Node* temp=head;
	while(temp != nullptr){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl<<endl;

	// size
	cout<<"Size of head is "<<lengthofLL(head)<<endl<<endl;

	// checking
	cout<<"Is exit or not  "<<checkifexistornot(head, 3)<<endl;
}