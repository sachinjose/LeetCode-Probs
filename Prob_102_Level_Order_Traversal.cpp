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

vector<vector<int> > levelOrder(TreeNode* root){
	vector<vector<int> > v;
	if(root == NULL){
		return v;
	}
	queue<TreeNode*> q;
	q.push(root);
	q.push(NULL);

	vector<int> temp;

	while(!q.empty()){
		TreeNode* f  = q.front();
		q.pop();
		if(f == NULL){
			v.push_back(temp);
			temp.clear();
			if(!q.empty()){
				q.push(NULL);
			}
		}
		else{
			temp.push_back(f->val);
			if(f->left){
				q.push(f->left);
			}
			if(f->right){
				q.push(f->right);
			}
		}
	} 
	return v;   
}

vector<vector<int> > levelOrderBottom(TreeNode* root) {

	vector<vector<int> > v;
	v = levelOrder(root);
	int e = v.size()-1;
	for (int i = 0; i < v.size()/2; i++){
		swap(v[i],v[e-i]);
	}
    
    return v;
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

	v = levelOrderBottom(head);


	for (int i = 0; i <v.size(); i++){
		for (int j = 0; j <v[i].size(); j++){
			cout<<v[i][j]<<endl;
		}
	}

    return 0;
}