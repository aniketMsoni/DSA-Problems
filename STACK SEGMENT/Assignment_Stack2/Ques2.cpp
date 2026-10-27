// Leetcode 1019 -- Next Greater Node in Linked List
#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node (int val){
        this->next = NULL;
        this->val = val;
    }
};
Node* reverseList(Node* head) {
    Node *curr = head, *prev = NULL, *Next = NULL;
    while(curr){
        Next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = Next;
    }
    return prev;
}
vector<int> nextGreaterElement(Node* head){
    if(head->next==NULL) return {0};
    head = reverseList(head);
    stack<int> st;
    vector<int> result;
    result.push_back(0);
    Node* temp = head->next;
    st.push(head->val);
    while(temp){
        while(st.size()>0 && st.top()<=temp->val) st.pop();
        if(st.size()==0) result.push_back(0);
        else result.push_back(st.top());
        st.push(temp->val);
        temp = temp->next;
    }
    reverse(result.begin(),result.end());
    return result;
}
int main(){
    Node* a = new Node(2);
    Node* b = new Node(7);
    Node* c = new Node(4);
    Node* d = new Node(3);
    Node* e = new Node(5);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    vector<int> result = nextGreaterElement(a);
    for(int ele : result) cout<<ele<<" ";
    return 0;
}