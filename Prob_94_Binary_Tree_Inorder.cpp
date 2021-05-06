#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;

class TreeNode{
	public:
    int val;
    TreeNode *left;
    TreeNode *right;
	TreeNode(int data){
		this->val = data;
		left = NULL;
		right = NULL;

	}
};

void inorderTraversal_2(TreeNode* root, vector<int>& ans){
	if(root == NULL){
		return;
	}
	inorderTraversal_2(root->left,ans);
	ans.push_back(root->val);
	inorderTraversal_2(root->right,ans);
}

vector<int> inorderTraversal(TreeNode* root) {
	vector<int>ans;
	inorderTraversal_2(root,ans);
	return ans;
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

	headA = middleNode(headA);

	print(headA);

    return 0;
}