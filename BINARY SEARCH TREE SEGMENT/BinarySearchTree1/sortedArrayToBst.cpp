#include<iostream>
#include<queue>
#include<climits>
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
    Node* helper(vector<int>& nums, int start, int end){
        if(start>end) return NULL;
        int mid = start + (end-start)/2;
        Node* root = new Node(nums[mid]);
        root->left = helper(nums, start, mid-1);
        root->right = helper(nums, mid+1, end);
        return root;
    }
    Node* sortedArrayToBST(vector<int>& nums) {
        return helper(nums, 0, nums.size()-1);
    }
};
void bfsTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    while(q.size()>0){
        int n = q.size();
        for(int i=0;i<n;i++){
            Node* temp = q.front();
            q.pop();
            cout<<temp->val<<" ";
            if(temp->left != NULL) q.push(temp->left);
            if(temp->right != NULL) q.push(temp->right);
        }
        cout<<endl;
    }
}
int main(){
    vector<int> v = {1,2,3,4,5,6,7};    
    Solution s;
    Node* temp = s.sortedArrayToBST(v);
    bfsTraversal(temp);
}