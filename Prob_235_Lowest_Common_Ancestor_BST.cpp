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

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    if(root == NULL){
    	return root;
    }
    while(root!=NULL){
	    if(root->val > p->val && root->val > q->val){
	    	root = root->left;
	    }
	    else if(root->val < p->val && root->val < q->val){
	    	root = root->right;
	    }
	    else{
	    	return root;
	    }
    }
    return 0;
}

int main(){

	TreeNode* head = new TreeNode(-1);
	TreeNode* a = new TreeNode(0);
	TreeNode* b = new TreeNode(3);
	TreeNode* c = new TreeNode(-2);
	TreeNode* d = new TreeNode(4);
	TreeNode* e = new TreeNode(8);


	head->left = a;
	head->right = b;
	a->left = c;
	a->right = d;
	c->left = e;

	TreeNode* temp = lowestCommonAncestor(head,e,d);

	cout<<temp->val<<endl;

    return 0;
}