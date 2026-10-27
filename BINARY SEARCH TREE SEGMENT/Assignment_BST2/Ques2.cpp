// Given a BST and two keys in it. Find the distance between two nodes with given two keys. It may be assumed that both keys exist in BST.
#include<iostream>
#include<stack>
#include<vector>
#include<climits>
#include<queue>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val) : val(val), left(NULL), right(NULL) {}
};
class Solution{
public:
    int dist1, dist2;
    void distCalculator(Node* root, int value, int& dist){
        if(root->val == value) return;
        dist++;
        if(root->val > value) distCalculator(root->left, value, dist);
        else distCalculator(root->right, value, dist);
    }
    int DistBetweenTwoNodes(Node* root, int a, int b){
        dist1 = dist2 = 0;
        if(root->val == a || root->val == b){
            distCalculator(root, a, dist1);
            distCalculator(root, b, dist2);
        }
        else if((root->val > a && root->val < b) || (root->val < a && root->val > b)){
            distCalculator(root, a, dist1);
            distCalculator(root, b, dist2);
        }
        else{
            if(root->val > a && root->val > b) DistBetweenTwoNodes(root->left, a, b);
            else DistBetweenTwoNodes(root->right, a, b);
        }
        return dist1 + dist2;
    }
};
int main(){
    Node* a = new Node(5);
    Node* b = new Node(2);
    Node* c = new Node(12);
    Node* d = new Node(1);
    Node* e = new Node(3);
    Node* f = new Node(9);
    Node* g = new Node(21);
    Node* h = new Node(19);
    Node* i = new Node(25);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    g->left = h;
    g->right = i;
    Solution s;
    cout<<s.DistBetweenTwoNodes(a, 1, 3);
}