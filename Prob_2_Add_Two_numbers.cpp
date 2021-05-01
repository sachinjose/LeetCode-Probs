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

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

    ListNode* h3 = new ListNode(0);
    ListNode* r1 = l1;
    ListNode* r2 = l2;
    ListNode* r3 = h3;

    int x = 0;
    int y = 0;
    int carry = 0;

    while((r1!=NULL)||(r2!=NULL)){

    	if(r1 != NULL){
    		x = r1->val;
    	}
    	else{
    		x = 0;
    	}

    	if(r2 != NULL){
    		y = r2->val;
    	}
    	else{
    		y = 0;
    	}

    	int answer = x + y + carry;
    	carry = answer / 10;

    	ListNode* secondTemp = new ListNode(answer%10);
    	r3->next = secondTemp;
    	r3 = r3->next;

    	if(r1!=NULL){
    		r1 = r1->next;
    	}
    	if(r2!=NULL){
    		r2 = r2->next;
    	}
    }
    if(carry > 0){
    	ListNode* secondTemp = new ListNode(carry);
    	r3->next = secondTemp;
    	r3 = r3->next;
    }

    return h3->next;
}

int main(){

	ListNode *headA = new ListNode(9);
	ListNode *a1 = new ListNode(9);
	ListNode *b1 = new ListNode(2);
	ListNode *c1 = new ListNode(7);

	headA->next = a1;
	a1->next = b1;
	b1->next = c1;

	ListNode *headB = new ListNode(2);
	ListNode *a2 = new ListNode(8);
	ListNode *b2 = new ListNode(4);

	headB->next = a2;
	a2->next = b2;

	print(headA);
	print(headB);
	

	ListNode* h3 =  addTwoNumbers(headA,headB);

	print(h3);

    return 0;
}