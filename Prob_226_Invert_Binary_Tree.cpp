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


bool helperSymmetric(TreeNode* l,TreeNode* r){
	if(l == NULL && r == NULL){
		return true;
	}
	if(l == NULL || r == NULL){
		return false;
	}
	if(l->val == r->val){
		return helperSymmetric(l->left,r->right) && helperSymmetric(l->right,r->left);
	}
	else{
		return false;
	}
}

bool isSymmetric(TreeNode* root){
	if(root == NULL){
		return true;
	}
	return helperSymmetric(root->left,root->right);
}


int main(){

	TreeNode* head = new TreeNode(1);
	TreeNode* a = new TreeNode(2);
	TreeNode* b = new TreeNode(2);
	TreeNode* c = new TreeNode(3);
	TreeNode* d = new TreeNode(4);
	TreeNode* e = new TreeNode(4);
	TreeNode* f = new TreeNode(3);


	head->left = a;
	head->right = b;
	a->left = c;
	a->right = d;
	b->left = e;
	b->right = f;

	isSymmetric(headA);

    return 0;
}