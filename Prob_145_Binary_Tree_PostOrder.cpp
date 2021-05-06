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

void postorderTraversal_2(TreeNode* root, vector<int>& ans){
	if(root == NULL){
		return;
	}
	postorderTraversal_2(root->left,ans);
	postorderTraversal_2(root->right,ans);
	ans.push_back(root->val);
}

vector<int> postorderTraversal(TreeNode* root) {
	vector<int>ans;
	postorderTraversal_2(root,ans);
	return ans;
}


int main(){

	TreeNode* headA = new TreeNode(1);
	TreeNode* a1 = new TreeNode(2);
	TreeNode* b1 = new TreeNode(3);


	headA->left = a1;
	headA->right = b1;


	postorderTraversal(headA);

    return 0;
}