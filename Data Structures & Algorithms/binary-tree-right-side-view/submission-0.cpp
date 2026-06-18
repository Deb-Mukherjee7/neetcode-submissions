/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int>res;
        if(!root)return res;
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});

        int level=0;
        map<int,int>rightview;

        while(!q.empty()){
            auto curr = q.front();
            q.pop();
            rightview[curr.second]=curr.first->val;
            if(curr.first->left)q.push({curr.first->left,curr.second+1});
            if(curr.first->right)q.push({curr.first->right,curr.second+1});
        }

        for(auto it=rightview.begin();it!=rightview.end();it++){
            res.push_back(it->second);
        }
        return res;
    }
};
