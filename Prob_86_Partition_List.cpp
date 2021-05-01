#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;

class ListNode{
	public:
    int val;
    ListNode *next;
	ListNode(int data){
		this->val = data;
		next = NULL;

	}
};

void print(ListNode *head){

	ListNode *temp = head;
	 
	while(temp != NULL){

		cout << temp-> val << " ";
		temp = temp-> next;

	}

	cout << endl;
}

int getLength(ListNode* A){
	if(A==NULL){
		return 0;
	}
	int length_list = 0;
	ListNode* headA = A;
	while(headA!=NULL){
		headA = headA->next;
		length_list++;
	}

	return length_list;
}

ListNode* partition(ListNode* head, int x) {

	if(head == NULL || head->next == NULL){
		return head;
	}

	ListNode* r1 = head;
	ListNode* prev = NULL;
	bool flag = false;

	while(r1!=NULL){
		if(r1->val < x){
			prev = r1;
			r1 = r1->next;	
		}
		else{
			break;
		}
	}

	if(prev == NULL){
		ListNode* temp = new ListNode(0);
		temp->next = head;
		head = temp;
		prev = head;
		flag = true;
	}

	ListNode* r2 = prev;

	while(r1 != NULL){
		if(r1->val < x){
			ListNode* temp = r1-> next;
			prev->next = temp;
			r1->next = r2->next;
			r2->next = r1;
			r2 = r2->next;
			r1 = temp;
		}
		else{
			prev = r1;
			r1 = r1->next;
		}
	}

	if (flag == true){
		return head->next;
	}

	return head;
}

int main(){

	ListNode *headA = new ListNode(1);
	ListNode *a1 = new ListNode(4);
	ListNode *b1 = new ListNode(3);
	ListNode *c = new ListNode(2);
	ListNode *d = new ListNode(5);
	ListNode *e = new ListNode(2);

	headA->next = a1;
	a1->next = b1;
	b1->next = c;
	c->next = d;
	d->next = e;

	print(headA);

	headA = partition(headA,3);

	print(headA);

	ListNode *headB = new ListNode(1);
	ListNode *a2 = new ListNode(1);

	headB->next = a2;

	cout<<"2"<<endl;

	print(headB);

	headB = partition(headB,2);

	print(headB);
    return 0;
}