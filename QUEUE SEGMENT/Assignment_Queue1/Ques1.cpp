//  Design Circular Deque Leetcode - 641
#include<iostream>
#include<vector>
using namespace std;
class MyCircularDeque {
public:
    int f;
    int b;
    int s;
    int c;
    vector<int> arr;
    MyCircularDeque(int k) {
        f = b = s = 0;
        c = k;
        vector<int> v(k);
        arr = v;
    }
    
    bool insertFront(int value) {
        if(s==c) return false;
        if(f==0){
            arr[c-1] = value;
            f = c-1;
        }
        else{
            arr[f-1] = value;
            f--;
        }
        s++;
        return true;
    }
    
    bool insertLast(int value) {
        if(s==c) return false;
        arr[b] = value;
        b++;
        if(b==c) b = 0;
        s++;
        return true;
    }
    
    bool deleteFront() {
        if(s==0) return false;
        f++;
        if(f==c) f = 0;
        s--;
        return true;
    }
    
    bool deleteLast() {
        if(s==0) return false;
        if(b==0){
            b = c - 1;
        }
        else b--;
        s--;
        return true;
    }
    
    int getFront() {
        if(s==0) return -1;
        return arr[f];
    }
    
    int getRear() {
        if(s==0) return -1;
        if(b==0) return arr[c-1];
        return arr[b-1];
    }
    
    bool isEmpty() {
        if(s==0) return true;
        return false;
    }
    
    bool isFull() {
        if(s==c) return true;
        return false;
    }
};

int main(){
    MyCircularDeque dq(3);
    dq.insertLast(1);  
    dq.insertLast(2); 
    dq.insertFront(3);
    dq.insertFront(4);
    dq.getRear();      
    dq.isFull();      
    dq.deleteLast();   
    dq.insertFront(4);
    dq.getFront();     
    return 0;
}