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

int countNodes(TreeNode* root) {
    if(root == NULL){
    	return 0;
    }
    return 1 + countNodes(root->left) + countNodes(root->right);
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

	countNodes(head);

    return 0;
}