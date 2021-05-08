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
bool change_flag(bool flag){
	if(flag){
		return false;
	}
	return true;
}
vector<vector<int> > zigzagLevelOrder(TreeNode* root) {
	vector<vector<int> > v;

	if(root == NULL){
		return v;
	}

	queue<TreeNode*> q;
	q.push(root);
	q.push(0);

	vector<int> temp;

	bool flag = false;

	while(!q.empty()){

		TreeNode* f  = q.front();
		q.pop();
		if(f == 0){
			if(flag == true){
				reverse(temp.begin(),temp.end());
			}
			flag = change_flag(flag);
			v.push_back(temp);
			temp.clear();
			if(!q.empty()){
				q.push(0);
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