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

Node* convertArr2DLL(vector<int> &arr){
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
	while(temp){
		cout<<temp->data << " ";
		temp=temp->next;
	}
	cout<<endl;
}


// Delete head 
Node* deleteHead(Node* head){
	if(head == NULL || head->next == NULL){
		return nullptr;
	}
	Node* prev = head;
	head = head->next;
	head->back = nullptr;
	prev->next =  nullptr;
	delete(prev);
	return head;

}

Node* deleteTail(Node* head){
	Node* temp = head;
	if(temp == NULL || head-> next == NULL){
		return nullptr;
	}
	while(temp->next != nullptr){
		temp=temp->next;
	}

	Node* prev = temp->back;
	prev->next = nullptr;
	temp->back = nullptr;
	delete temp;
	return head;
}

Node* deleteKthNode(Node* head, int k){
	Node* temp = head;
	int cnt = 0;
	while(temp!=NULL){
		cnt++;
		if(cnt == k ) break;
		temp= temp->next;
	}

	Node* prev = temp->back;
	Node* front = temp->next;

	if(prev == NULL && front == NULL){
		delete temp;
		return NULL;
	}else if(prev == NULL){
		head = head->next;
		head->back = nullptr;
		temp->next = nullptr;
		delete temp;
		return head;
	}else if(front == NULL){
		prev->next = nullptr;
		temp->back = nullptr;
		delete temp;
		return head;
	}

	prev->next = front;
	front->back = prev;
	temp->next = nullptr;
	temp->back = nullptr;
	delete temp;
	return head;

};


void deleteNode(Node* temp){
	Node* prev = temp->back;
	Node* front = temp->next;
	if(front == NULL){
		prev->next = nullptr;
		temp->back = nullptr;
		delete temp;
	}
	prev->next = front;
	front->back = prev;
	temp->next = temp->back = nullptr;
	delete temp;
}


Node* insertbeforehead(Node* head, int val){
	Node* newHead = new Node(val, head, nullptr);
	head->back= newHead;
	return newHead;
}
Node* insertafterHead(Node* head, int val){
	Node* temp = new Node(val, head->next, head);
	head->next = temp;
	temp->next->back = temp;
	return head;
}

Node* insertbeforetail(Node* head, int val){
	if(head->next == NULL){
		return insertbeforehead(head, val);
	}
	Node* temp = head;
	while(temp->next!=nullptr){
		temp=temp->next;
	}

	Node* newNode = new Node(val, temp, temp->back);
	temp->back->next = newNode;
	temp->back = newNode;
	return head;
}

Node* insertaftertail(Node* head, int val){
	Node* temp = head;
	while(temp->next != nullptr){
		temp=temp->next;
	}
	Node* newtail = new Node(val, nullptr, temp);
	temp->next=newtail;
	return head;
}

Node* insertbeforeKthElement(Node* head, int k, int val){
	if(k==1){
		return insertbeforehead(head, val);
	}
	Node* temp = head;
	int cnt = 0;
	while(temp!=NULL){
		cnt++;
		if(cnt==k)break;
		temp=temp->next;
	}
	Node* prev = temp->back;
	Node* newNode = new Node(val,temp, prev);
	prev->next = newNode;
	temp->back= newNode;
	return head;
}
Node* insertafterKthelement(Node* head, int k, int val){
	Node* temp = head;
	int cnt = 0;
	while(temp!=NULL){
		cnt++;
		if(cnt==k)break;
		temp=temp->next;
	}
	Node* front = temp->next;
	Node* newNode = new Node(val, front, temp);
	temp->next = newNode;
	if(front!=NULL){
		front->back=newNode;
	}
	return head;
}

void insertBeforeNode(Node* node, int val){
	Node* prev = node->back;
	Node* newNode = new Node(val, node, prev);
	prev->next = newNode;
	node->back=newNode;
}




int main(){
	vector<int> arr  = {2, 3, 4, 5, 6, 7, 2, 5, 6}; 
	Node* head = convertArr2DLL(arr); 
	print(head);
	head = deleteHead(head);
	head = deleteTail(head);
	print(head);

	// print(head);
	// head = deleteKthNode(head, 9);
	// print(head);
	// head = deleteKthNode(head, 9);
	// print(head);
	head = insertbeforehead(head, 7);
	print(head);
	head = insertafterHead(head, 983);
	print(head);
	head = insertbeforeKthElement(head, 1,3);
	print(head);
	return 0; 
}