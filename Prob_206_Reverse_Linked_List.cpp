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

ListNode* reverse( ListNode* head){

	ListNode* prev = NULL;
	ListNode* curr = head;;

	while(curr!=NULL){
		
		ListNode* n = curr->next;
		curr->next = prev;
		prev = curr;
		curr = n;

	}

	return prev;
}

int main(){

	ListNode *headA = new ListNode(4);
	ListNode *a1 = new ListNode(1);
	ListNode *b1 = new ListNode(8);
	ListNode *c = new ListNode(4);
	ListNode *d = new ListNode(5);

	headA->next = a1;
	a1->next = b1;
	b1->next = c;
	c->next = d;

	print(headA);

	headA = reverse(headA);

	print(headA);

    return 0;
}