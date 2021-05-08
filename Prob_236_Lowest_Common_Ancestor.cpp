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

bool find(TreeNode* root, TreeNode* Node){
	if(root == NULL || Node == NULL){
		return false;
	}
	if(root == Node){
		return true;
	}
	return find(root->right,Node) || find(root->left,Node);
}

TreeNode* lowestCommonAncestor_2(TreeNode* root, TreeNode* p, TreeNode* q) {
    if(root == NULL){
    	return root;
    }

  	TreeNode* ancestor = root;
  	TreeNode* curr = root;

  	while(curr!=NULL){

	    if(curr == p || curr == q){
	    	return curr;
	    }
        
	    bool leftp = find(curr->left,p);
	    bool leftq = find(curr->left,q);
	    bool rightp = find(curr->right,p);
	    bool rightq = find(curr->right,q);

	    if(leftp == true && leftq==true){

	    	ancestor = curr;
	    	curr = curr->left;
	    }

	    else if(rightq == true && rightp == true){
	    	ancestor = curr;
	    	curr = curr->right;
	    }

	    else{
	    	return curr;
	    }

  	}
  	
  	return ancestor;
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