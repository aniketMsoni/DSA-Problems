#include<iostream>
#include<unordered_map>
#include<vector>
#include<queue>
#include<cmath>
#include<unordered_set>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int value) : val(value), left(NULL), right(NULL) {}
};
class Solution {
public:
    Node* first = NULL;
    void markParent(Node* root, unordered_map<Node*,Node*>& parent){
        if(root==NULL) return;
        if(root->left) parent[root->left] = root;
        if(root->right) parent[root->right] = root;
        markParent(root->left, parent);
        markParent(root->right, parent);
    }
    void find(Node* root, int start){
        if(root==NULL) return;
        if(root->val == start){
            first = root;
            return;
        }
        find(root->left, start);
        find(root->right, start);
    }
    int amountOfTime(Node* root, int start) {
        find(root, start); // finding start value wala node
        unordered_map<Node*,Node*> parent;
        markParent(root, parent); // filling parent child map
        unordered_set<Node*> s; // Is Infected
        s.insert(first);
        queue<pair<Node*,int>> q;
        q.push({first,0});
        int maxLevel = 0;
        // bfs
        while(q.size()>0){
            pair<Node*,int> p = q.front();
            q.pop();
            int level = p.second;
            maxLevel = max(maxLevel, level);
            Node* temp = p.first;
            if(temp->left){
                if(s.find(temp->left)==s.end()){
                    q.push({temp->left, level+1});
                    s.insert(temp->left);
                }
            }
            if(temp->right){
                if(s.find(temp->right)==s.end()){
                    q.push({temp->right, level+1});
                    s.insert(temp->right);
                }
            }
            if(parent.find(temp)!=parent.end()){
                if(s.find(parent[temp])==s.end()){
                    q.push({parent[temp], level+1});
                    s.insert(parent[temp]);
                }
            }

        }
        return maxLevel;
    }
};
int main(){
    Node* a = new Node(1);
    Node* b = new Node(5);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(10);
    Node* f = new Node(6);
    Node* g = new Node(9);
    Node* h = new Node(2);
    a->left = b;
    a->right = c;
    b->right = d;
    c->left = e;
    c->right = f;
    d->left = g;
    d->right = h;
    Solution s;
    cout<<s.amountOfTime(a, 3);
}