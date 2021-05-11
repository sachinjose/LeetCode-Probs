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

TreeNode* buildTree_Helper(int prs, int pre, vector<int>& preorder,int ios, int ioe,vector<int>& inorder){
	if(ios > ioe){
		return NULL;
	}
	int rootData = preorder[prs];
	int rootIndex = -1;
	for (int i = ios ; i <=ioe ; i++){
		if(inorder[i] == rootData){
			rootIndex = i;
            break;
		}
	}
	int lios = ios;
	int lioe = rootIndex - 1;
	int rios = rootIndex + 1;
	int rioe = ioe;

	int lprs = prs + 1;
	int lpre = lioe - lios + lprs;
	int rprs = lpre + 1;
	int rpre = pre;

	TreeNode* root = new TreeNode(rootData);
	root->left = buildTree_Helper(lprs,lpre,preorder,lios,lioe,inorder);
	root->right = buildTree_Helper(rprs,rpre,preorder,rios,rioe,inorder);

	return root;
}

TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
    return buildTree_Helper(0,preorder.size()-1,preorder,0,inorder.size()-1,inorder);
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