#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int calPoints(vector<string>& operations) {
    stack<int> st;
    for(int i=0;i<operations.size();i++){
        if(operations[i]=="+"){
            int x = st.top();
            st.pop();
            int temp = x + st.top();
            st.push(x);
            st.push(temp);
        }
        else if(operations[i]=="D") st.push(2*st.top());
        else if(operations[i]=="C") st.pop();
        else st.push(stoi(operations[i]));
    }
    int result = 0;
    while(st.size()>0){
        result += st.top();
        st.pop();
    }
    return result;
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    vector<string> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<calPoints(arr);
    return 0;
}