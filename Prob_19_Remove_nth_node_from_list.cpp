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

ListNode* removeNthFromEnd(ListNode* head, int n) {
	
	if(head == NULL){
		return NULL;
	}

    int length_a = getLength(head);

    ListNode* runner = head;

    for (int i = 0; i < length_a - n-1; i++){
    	runner = runner->next;
    }
    ListNode* temp = runner->next;
    if((runner == head)&&(n==length_a)){
    	delete head;
        return temp;
    }

    if(temp!=NULL){
    	runner->next = temp->next;
    	temp->next = NULL;
    	delete temp;
    }   

    return head;
}

int main(){

	ListNode *headA = new ListNode(4);
	ListNode *a1 = new ListNode(1);
	ListNode *b1 = new ListNode(8);
	ListNode *c = new ListNode(4);
	ListNode *d = new ListNode(5);
	ListNode *e = new ListNode(5);

	headA->next = a1;
	a1->next = b1;
	b1->next = c;
	c->next = d;
	d->next = e;

	print(headA);

	headA = removeNthFromEnd(headA,3);

	print(headA);

    return 0;
}