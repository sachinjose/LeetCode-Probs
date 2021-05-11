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

bool issorted(vector<int> v){
	for (int i = 0; i < v.size() - 1; i++){
		if(v[i]>v[i+1]){
			return false;
		}
	}
	return true;
}

void helper_2(TreeNode* root, vector<int>& v){
	if(root == NULL){
		return root
	}
	helper(root->left,v);
	v.push_back(root->val);
	helper(root->right,v);
}

bool isValidBST_2(TreeNode* root) {
	if(root == NULL){
		return true;
	}
	helper_2(root,v);
	return issorted(v);

}

bool helper(TreeNode* root,int minv = INT_MIN, int maxv = INT_MAX){
	if(root == NULL){
		return true;
	}
	bool left = helper(root->left,minv,root->val);
	bool right = helper(root->right,root->val,maxv);
	if(left && right && root->val > minv && root->val < maxv){
		return true;
	}	
	else{
		return false;
	}
}
bool isValidBST(TreeNode* root) {
	helper(root);
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

	cout<<isValidBST(head)<<endl;

    return 0;
}