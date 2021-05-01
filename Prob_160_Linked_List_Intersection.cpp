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
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

	if(headA == NULL){
		return 0;
	}
	if(headB == NULL){
		return 0;
	}

    int length_a = getLength(headA);
    int length_b = getLength(headB);
    int diff;

    ListNode* Runner_A = headA;
    ListNode* Runner_B = headB;

    if(length_a > length_b){
    	diff = length_a - length_b;
    	for (int i = 0; i < diff; ++i){
    		Runner_A = Runner_A->next;
    	}
    }

    if(length_a < length_b){
    	diff = length_b - length_a;
    	for (int i = 0; i < diff; ++i){
    		Runner_B = Runner_B->next;
    	}
    }

    while(Runner_A!=NULL){
    	if(Runner_A == Runner_B){
    		return Runner_B;
    	}
    	Runner_A = Runner_A->next;
    	Runner_B = Runner_B->next;

    }

    return 0;

}

void print(ListNode *head){

	ListNode *temp = head;
	 
	while(temp != NULL){

		cout << temp-> val << " ";
		temp = temp-> next;

	}

	cout << endl;
}
int main(){

	ListNode *headA = new ListNode(4);
	ListNode *headB = new ListNode(5);
	ListNode *a1 = new ListNode(1);
	ListNode *a2 = new ListNode(6);
	ListNode *b1 = new ListNode(8);
	ListNode *b2 = new ListNode(1);
	ListNode *c = new ListNode(4);
	ListNode *d = new ListNode(5);

	headA->next = a1;
	a1->next = b1;
	b1->next = c;
	c->next = d;

	headB->next = a2;
	a2->next = b2;
	b2->next = b1;

	print(headA);
	print(headB);

	cout<<getLength(headA)<<" "<<getLength(headB)<<endl;

	ListNode* temp = getIntersectionNode(headA,headB);
	cout<<temp->val<<endl;

    return 0;
}