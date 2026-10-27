// Level Order Traversal -- Right to Left -- BFS approach
#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
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
    vector<vector<int>> zigzagLevelOrder(Node* root) {
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        queue<Node*> q;
        q.push(root);
        int level = 1;
        while(q.size()){
            // even level -- means left to right
            // odd level -- means right to left
            int n = q.size();
            vector<int> v;
            for(int i=0;i<n;i++){
                Node* temp = q.front();
                q.pop();
                v.push_back(temp->val);
                if(temp->left != NULL) q.push(temp->left);
                if(temp->right != NULL) q.push(temp->right);
            }
            if(level%2==0) reverse(v.begin(),v.end());
            level++;
            ans.push_back(v);
        }
        return ans;
    }
};
int main(){
    Node* a = new Node(3);
    Node* b = new Node(9);
    Node* c = new Node(20);
    Node* d = new Node(15);
    Node* e = new Node(7);

    a->left = b;
    a->right = c;
    c->left = d;
    c->right = e;

    Solution s;
    vector<vector<int>> ans = s.zigzagLevelOrder(a);
    for(const auto& row : ans){
        for(const auto& col : row){
            cout<<col<<" ";
        }
        cout<<endl;
    }
}