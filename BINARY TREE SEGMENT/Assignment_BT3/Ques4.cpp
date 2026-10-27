#include<iostream>
#include<vector>
#include<stack>
#include<queue>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
class Solution {
public:
    Node* build(vector<int>& pre, int prelo, int prehi, vector<int>& post, int postlo, int posthi){
        if(prelo>prehi) return NULL;
        Node* root = new Node(pre[prelo]);
        if(prelo==prehi) return root;
        int i = postlo;
        while(i<=posthi){
            if(pre[prelo+1]==post[i]) break;
            i++;
        }
        int leftCount = i - postlo + 1;
        int rightCount = posthi - i;
        root->left = build(pre, prelo+1, prelo+leftCount, post, postlo, i);
        root->right = build(pre, prelo+leftCount+1, prehi, post, i+1, posthi-1);
        return root;
    }
    Node* constructFromPrePost(vector<int>& pre, vector<int>& post) {
        int n = pre.size();
        return build(pre, 0, n-1, post, 0, n-1);
    }
    vector<vector<int>> bfsTraversal(Node* root){
        vector<vector<int>> ans;
        queue<Node*> q;
        q.push(root);
        while(q.size()>0){
            int n = q.size();
            vector<int> v;
            for(int i=0;i<n;i++){
                Node* temp = q.front();
                q.pop();
                v.push_back(temp->val);
                if(temp->left != NULL) q.push(temp->left);
                if(temp->right != NULL) q.push(temp->right);
            }
            ans.push_back(v);
        }
        return ans;
    }
};
int main(){
    vector<int> pre = {1,2,4,5,3,6};
    vector<int> post = {4,5,2,6,3,1};
    Solution s;
    Node* ans = s.constructFromPrePost(pre, post);
    vector<vector<int>> v = s.bfsTraversal(ans);
    for(const auto& row : v){
        for(const auto& col : row) cout<<col<<" ";
        cout<<endl;
    }
    return 0;
}