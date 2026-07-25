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
		data = data1;
		next = nullptr;
	}
};


Node* ConvertArr2LL(vector<int> &arr){
	Node* head = new Node(arr[0]);
	Node* mover = head;


	for(int i=1;i<arr.size();i++){
		Node* temp = new Node(arr[i]);
		mover->next = temp;
		mover = temp;
	}

	return head;
}

void printLL(Node* head){
	while(head){
		cout<<head->data<<" ";
		head=head->next;
	}
	cout<<endl;
}

int LengthofLL(Node* head){
	int count=0;
	while(head){
		count++;
		head=head->next;
	}
	return count;
}

Node* removeHead(Node* head){
	if(head == NULL) return head;
	Node* temp = head;
	head = head->next;

	delete temp;
	return head;
}

Node* removeTail(Node* head){
	if(head==NULL || head->next ==NULL){
		return NULL;
	}
	Node* temp = head;
	while(temp->next->next !=NULL){
		temp=temp->next;
	}
	Node* fordele = temp->next;
	delete fordele;
	temp->next = nullptr;
	return head;
}

Node* removePostion(Node* head, int k){
	if(head==nullptr) return head;
	if(k==1){
		Node* temp = head;
		head = head->next;
		delete temp;
		return head;
	}

	int cnt =0;
	Node* temp = head;
	Node* prev = nullptr;
	while(temp!=nullptr){
		cnt++;
		if(cnt==k){
			prev->next=prev->next->next;
			delete temp;
			break;
		}
		prev=temp;
		temp=temp->next;
	}

	return head;
}



Node* removeEl(Node* head, int el){
	if(head == NULL) return head;
	if(head->data ==el){
		Node* temp=head;
		head = head->next;
		delete temp;
		return head;
	}

	Node* temp = head;
	Node* prev = NULL;
	while(temp!=NULL){
		if(temp->data==el){
			prev->next = prev->next->next;
			delete temp;
			break;
		}
		prev=temp;;
		temp=temp->next;
	}
	return head;
}

Node* addhead(Node* head , int el){
	Node* temp = new Node(el);
	temp->next = head;
	return temp;
}

Node* addTail(Node* head, int val ){
	if(head == NULL){
		return new Node(val); 
	}
	Node* temp = head;
	while(temp->next!=nullptr){
		temp= temp->next;
	}
	Node* neto = new Node(val);
	temp->next = neto;
	return head;
}

Node* addEll(Node* head, int el, int k){
	if(head==nullptr){
		if(k==1) return new Node(el);
		else return head;
	}
	if(k==1){
		Node* temp = new Node(el, head);
		return temp;
	}

	int cnt=0;
	Node* temp = head;
	while(temp!=nullptr){
		cnt++;
		if(cnt==k-1){
			Node* n = new Node(el);
			n->next = temp->next;
			temp->next = n;
			break;
		}
		temp= temp->next;

	}
	return head;
}

Node* insertBeforeValue(Node* head, int el, int val){
	if(head == NULL){
		return NULL;
	}
	if(head->data == val){
		return new Node(el, head);
	}

	Node* temp = head;
	while(temp->next!=nullptr){
		if(temp->next->data == val){
			Node* x = new Node(el, temp->next);
			temp->next = x;
			break;
		}
		temp = temp->next;
	}
	return head;
}


int main(){

	vector<int> arr={4, 6, 8, 2, 5};
	Node* head = ConvertArr2LL(arr);
	printLL(head);
	head = addEll(head, 8, 2);
	printLL(head);

}