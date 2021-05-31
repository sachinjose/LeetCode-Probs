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

TreeNode* buildTreeHelper(vector<int>& nums, int s, int e){
	if(s>e){
		return NULL;
	}
	int mid = s + (e-s)/2;
	TreeNode* root = new TreeNode(nums[mid]);
	root->left = buildTreeHelper(nums, s, mid - 1);
	root->right = buildTreeHelper(nums, mid+1 , e);
	return root;
}

TreeNode* sortedArrayToBST(vector<int>& nums) {
    int treesize = nums.size();
    if(nums.size() == 0){
    	return NULL;
    }
    return buildTreeHelper(nums,0,nums.size()-1);
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