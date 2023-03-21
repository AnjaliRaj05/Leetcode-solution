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
    vector<vector<int>> levelOrder(TreeNode* root) {
        // queue<TreeNode*>q;
        // q.push(root);
        // q.push(NULL);
        // while(!q.empty()){
        //     TreeNode*temp=q.front();
        //     q.pop();
        //     if(temp==NULL){
        //         cout<<endl;
        //         if(!q.empty()){
        //             q.push(NULL);
        //         }
        //     }
        //     cout<<endl;
        //     temp->val;
        //     if(temp->left){
        //         q.push(temp->left);
        //     }
        //     if(temp->right){
        //         q.push(temp->right);
        //     }
        // }
        
        vector<vector<int>> ans;
        queue<TreeNode*>q;
        q.push(root);
        if(root==NULL){
            return ans;
        }
        while(1){
            int size=q.size();
            if(size==0){
                return ans;
            }
            vector<int>data;
        while(size>0){
          TreeNode*temp=q.front();  
            q.pop();
            data.push_back(temp->val);
            if(temp->left!=NULL){
               q.push(temp->left) ;
            }
            if(temp->right!=NULL){
               q.push(temp->right) ;
            }
            size--;
        }
            ans.push_back(data);
        }
        return ans;

    }
};