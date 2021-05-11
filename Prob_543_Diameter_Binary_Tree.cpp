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

int height(TreeNode* root){
	if(root == NULL){
		return 0;
	}
	return 1 + max(height(root->left),height(root->right));
}

int diameterOfBinaryTree(TreeNode* root) {
    if(root == NULL){
    	return 0;
    }
    int op1 = height(root->left) + height(root->right);
    int op2 = diameterOfBinaryTree(root->left);
    int op3 = diameterOfBinaryTree(root->right);

    return max(op1,max(op2,op3));
}

int main(){

	vector<vector<int> > v;

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

	v = zigzagLevelOrder(head);


	for (int i = 0; i <v.size(); i++){
		for (int j = 0; j <v[i].size(); j++){
			cout<<v[i][j]<<endl;
		}
	}

    return 0;
}