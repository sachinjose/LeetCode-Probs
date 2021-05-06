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

ListNode* getIntersect(ListNode *head) {

	ListNode* r1 = head;
	ListNode* r2 = head;

	while((r2!=NULL)&&(r2->next!=NULL)){
		r1 = r1->next;
		r2 = r2->next->next;
		if(r1==r2){
			return r1;
		}
	}

	return NULL;
}

ListNode *detectCycle(ListNode *head) {
    if(head == NULL){
    	return head;
    }
    ListNode* intersect = getIntersect(head);
    if(intersect == NULL){
    	return intersect;
    }

    ListNode* r1 = head;
    ListNode* r2 = intersect;

    while(r1 != r2){
    	r1 = r1->next;
    	r2 = r2->next;
    }

    return r1;
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

	headA = detectCycle(headA);

	print(headA);

	ListNode *headB = new ListNode(1);
	ListNode *a2 = new ListNode(1);

	headB->next = a2;

	cout<<"2"<<endl;

	print(headB);

	headB = detectCycle(headB)

	print(headB);
    return 0;
}