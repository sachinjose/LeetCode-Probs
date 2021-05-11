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

TreeNode* buildTree_Helper(int pos, int poe, vector<int>& postorder,int ios, int ioe,vector<int>& inorder){
	if(ios > ioe){
		return NULL;
	}
	int rootData = preorder[poe];
	int rootIndex = -1;
	for (int i = ios ; i <=ioe ; i++){
		if(inorder[i] == rootData){
			rootIndex = i;
            break;
		}
	}

	int lpos = pos;
	int lpoe = lpos + lioe - lios;
	int rpos = lpoe + 1;
	int rpoe = poe - 1;

	int lios = ios;
	int lioe = rootIndex - 1;
	int rios = rootIndex + 1;
	int rioe = inE;

	TreeNode* root = new TreeNode(rootData);
	root->left = buildTree_Helper(lpos,lpoe,postorder,lios,lioe,inorder);
	root->right = buildTree_Helper(rpos,rpoe,postorder,rios,rioe,inorder);

	return root;
}

TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
    return buildTree_Helper(0,postorder.size()-1,postorder,0,inorder.size()-1,inorder);
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