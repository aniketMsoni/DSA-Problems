#include<iostream>
using namespace std;
class minHeap{
public:
    int idx;
    int arr[50];
    minHeap(){
        idx = 1;
    }
    int top(){
        return arr[1];
    }
    void push(int x){
        arr[idx] = x;
        int i = idx;
        idx++;
        // swapping of i with parent till i == 1
        while(i!=1){
            int parent = i/2;
            if(arr[i]<arr[parent])
                swap(arr[i],arr[parent]);
            else break;
            i = parent;
        }
    }
    void pop(){
        idx--;
        arr[1] = arr[idx];
        // rearrangement
        int i = 1;
        while(true){
            int left = 2*i;
            int right = 2*i + 1;
            if(left > idx-1) break;
            if(right > idx-1){
                if(arr[left] < arr[i]){
                    swap(arr[left], arr[i]);
                    i = left;
                }
                break;
            }
            if(arr[left] < arr[right]){
                if(arr[left]<arr[i]){
                    swap(arr[left], arr[i]);
                    i = left;
                }
                else break;
            }
            else{
                if(arr[right]<arr[i]){
                    swap(arr[right], arr[i]);
                    i = right;
                }
                else break;
            }
        }
    }
    int size(){
        return idx-1;
    }
    void display(){
        for(int i=1;i<=idx-1;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    minHeap pq;
    pq.push(10);
    pq.push(20);
    cout<<pq.top()<<" "<<pq.size()<<endl;
    pq.push(11);
    pq.push(2);
    cout<<pq.top()<<" "<<pq.size()<<endl;
    pq.display();
    pq.pop();
    cout<<pq.top()<<" "<<pq.size()<<endl;
    pq.display();
    return 0;
}