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

bool isSameTree(TreeNode* p, TreeNode* q){
	if(p == NULL && q == NULL){
			return true;
	}
	if(q == NULL || p == NULL){
			return false;
	}
	if(p->val != q->val){
		return false;
	}
	return isSameTree(p->right,q->right) && isSameTree(p->left,q->left);
}


int main(){

	TreeNode* headA = new TreeNode(1);
	TreeNode* a = new TreeNode(2);
	TreeNode* b = new TreeNode(3);


	headA->left = a;
	headA->right = b;

	TreeNode* headB = new TreeNode(1);
	TreeNode* a1 = new TreeNode(2);
	TreeNode* b1 = new TreeNode(3);


	headB->left = a1;
	headB->right = b1;


	postorderTraversal(headA);

    return 0;
}