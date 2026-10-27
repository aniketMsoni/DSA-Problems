#include<iostream>
#include<vector>
using namespace std;
class Queue{
public:
    int f;
    int b;
    int s; // current queue size
    int c; // array capacity
    vector<int> arr;
    Queue(int k){
        f = b = 0;
        s = 0;
        c = k;
        vector<int> v(k);
        arr = v;
    }
    bool enQueue(int val){
        if(s==c){
            cout<<"Queue is FULL!"<<endl;
            return false;
        }
        arr[b] = val;
        b++; 
        if(b==c) b = 0; // IMP
        s++;
        return true;
    }
    bool deQueue(){
        if(s==0){
            cout<<"Queue is EMPTY!"<<endl;
            return false;
        }
        f++; 
        if(f==c) f = 0; // IMP
        s--;
        return true;
    }
    int front(){
        if(s==0){
            cout<<"Queue is EMPTY!"<<endl;
            return -1;
        }
        return arr[f];
    }
    int back(){
        if(s==0){
            cout<<"Queue is EMPTY!"<<endl;
            return -1;
        }
        if(b==0) return arr[c-1];
        return arr[b-1];
    }
    bool isEmpty(){
        if(s==0) return true;
        return false;
    }
    bool isFull(){
        if(s==c) return true;
        return false;
    }
};
int main(){
    Queue q(6);
    q.enQueue(10);
    q.enQueue(20);
    q.enQueue(30);
    q.enQueue(40);
    q.enQueue(50);
    q.deQueue();
    return 0;
}