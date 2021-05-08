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


int minDepth(TreeNode* root){
    if (root == NULL){
    	return 0;
    }
    int leftDepth = 1 + minDepth(root->left);
    int rightDepth = 1 + minDepth(root->right);
    return 1 + min(leftDepth,rightDepth);
}

struct qItem{
    TreeNode *node;
    int depth;
};

int minDepth(TreeNode* root) {
    if(root==NULL) return 0;
    queue<qItem> q;
    qItem qi = {root,1};
    q.push(qi);
    
    while(!q.empty()){
        qItem f = q.front();
        q.pop();
        
        TreeNode *node = f.node;
        int depth = f.depth;
        
        /// leaf node
        if(node->left==NULL && node->right==NULL) return depth;
        
        if(node->left){
            qItem a = {node->left,depth+1};
            q.push(a);
        }
        if(node->right){
            qItem a = {node->right,depth+1};
            q.push(a);
        }
    }
    return 0;  /// never get executed , compilation purpose
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

	cout<<minDepth(head)<<endl;

    return 0;
}