#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
int main(){
    int n;
    cout<<"Enter list size: ";
    cin>>n;
    
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
    Node* head = new Node(v[0]);
    Node* temp = head;
    for(int i=1;i<n;i++){
        Node* t = new Node(v[i]);
        temp->next = t;
        temp = temp->next;
    }
    
    temp = head;
    while(temp){
        if(temp->next!=NULL) cout<<temp->val<<" -> ";
        else cout<<temp->val<<" -> NULL";
        temp = temp->next;
    }
}