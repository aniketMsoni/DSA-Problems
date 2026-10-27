#include<iostream>
#include<vector>
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
vector<vector<int>> spiralMatrix(int m, int n, Node* head) {
    vector<vector<int>> result(m,vector<int>(n,-1));
    Node* temp = head;
    int maxr = m-1;
    int minr = 0;
    int maxc = n-1;
    int minc = 0;
    while(maxr>=minr && maxc>=minc){
        for(int i=minc;i<=maxc;i++){
            if(temp==NULL) return result;
            result[minr][i] = temp->val;
            temp = temp->next;
        }
        minr++;
        if(minr>maxr || minc>maxc) break;
        for(int i=minr;i<=maxr;i++){
            if(temp==NULL) return result;
            result[i][maxc] = temp->val;
            temp = temp->next;
        }
        maxc--;
        if(minr>maxr || minc>maxc) break;
        for(int i=maxc;i>=minc;i--){
            if(temp==NULL) return result;
            result[maxr][i] = temp->val;
            temp = temp->next;
        }
        maxr--;
        if(minr>maxr || minc>maxc) break;
        for(int i=maxr;i>=minr;i--){
            if(temp==NULL) return result;
            result[i][minc] = temp->val;
            temp = temp->next;
        }
        minc++;
    }
    return result;
}
void display(vector<vector<int>> result){
    for(int i=0;i<result.size();i++){
        for(int j=0;j<result[0].size();j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    // 3,0,2,6,8,1,7,9,4,2,5,5,0
    Node* a = new Node(3);
    Node* b = new Node(0);
    Node* c = new Node(2);
    Node* d = new Node(6);
    Node* e = new Node(8);
    Node* f = new Node(1);
    Node* g = new Node(7);
    Node* h = new Node(9);
    Node* i = new Node(4);
    Node* j = new Node(2);
    Node* k = new Node(5);
    Node* l = new Node(5);
    Node* m = new Node(0);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;
    g->next = h;
    h->next = i;
    i->next = j;
    j->next = k;
    k->next = l;
    l->next = m;
    Node* head = a;
    vector<vector<int>> result(3,vector<int>(5));
    result = spiralMatrix(3,5,head);
    display(result);
    return 0;
}