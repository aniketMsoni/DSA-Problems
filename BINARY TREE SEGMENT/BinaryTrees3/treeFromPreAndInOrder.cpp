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
    Node* build(vector<int>& pre, int prelo, int prehi, vector<int>& in, int inlo, int inhi){
        if(prelo>prehi) return NULL;
        Node* root = new Node(pre[prelo]);
        if(prelo==prehi) return root;
        int i = inlo;
        while(i<=inhi){
            if(in[i]==pre[prelo]) break;
            i++;
        }
        int leftCount = i - inlo;
        int rightCount = inhi - i;
        root->left = build(pre, prelo+1, prelo+leftCount, in, inlo, i-1);
        root->right = build(pre, prelo+leftCount+1, prehi, in, i+1, inhi);
        return root;
    }
    Node* buildTree(vector<int>& pre, vector<int>& in) {
        int n = pre.size();
        Node* root = build(pre, 0, n-1, in, 0, n-1);
        return root;
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
    vector<int> in = {4,2,5,1,3,6};
    Solution s;
    Node* ans = s.buildTree(pre, in);
    vector<vector<int>> v = s.bfsTraversal(ans);
    for(const auto& row : v){
        for(const auto& col : row) cout<<col<<" ";
        cout<<endl;
    }
    return 0;
}