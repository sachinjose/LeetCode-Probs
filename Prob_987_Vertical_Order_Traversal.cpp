class Solution {
public:
    int helper(TreeNode* root, int data,map<int,vector<int> > &map){
        if(root == NULL){
            return 0;
        }
        map[data].push_back(root->val);
        helper(root->left,data - 1,map);
        helper(root->right,data+1,map);
        return 1;
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,vector<int>> myMap;
        helper(root,0,myMap);
        vector<vector<int>> ans;
        vector<int> temp;
        for(auto it = myMap.begin();it!=myMap.end();it++){
            temp = it->second;
            sort(temp.begin(),temp.end());
            ans.push_back(temp);
        }
        return ans;
    }
};