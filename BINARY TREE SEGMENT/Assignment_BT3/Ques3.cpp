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
    Node* build(vector<int>& in, int inlo, int inhi, vector<int>& post, int postlo, int posthi){
        if(inlo>inhi) return NULL;
        Node* root = new Node(post[posthi]);
        if(inlo==inhi) return root;
        int i = inlo;
        while(i<=inhi){
            if(root->val==in[i]) break;
            i++;
        }
        int leftCount = i - inlo;
        int rightCount = inhi - i;
        root->left = build(in, inlo, i-1, post, postlo, postlo+leftCount-1);
        root->right = build(in, i+1, inhi, post, postlo+leftCount, posthi-1);
        return root;
    }
    Node* buildTree(vector<int>& in, vector<int>& post) {
        int n = in.size();
        return build(in, 0, n-1, post, 0, n-1);
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
    vector<int> post = {4,5,2,6,3,1};
    vector<int> in = {4,2,5,1,3,6};
    Solution s;
    Node* ans = s.buildTree(in, post);
    vector<vector<int>> v = s.bfsTraversal(ans);
    for(const auto& row : v){
        for(const auto& col : row) cout<<col<<" ";
        cout<<endl;
    }
    return 0;
}