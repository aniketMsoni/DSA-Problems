#include<iostream>
#include<climits>
using namespace std;
float max(float a, float b){
    if(a>=b) return a;
    else return b;
}
float min(float a, float b){
    if(a<b) return a;
    else return b;
}
int main(){
    int arr[] = {5,3,10};
    int n = 3;
    for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;
    float kmax = (float)(INT_MAX);
    float kmin = (float)(INT_MIN);
    bool flag = true;
    for(int i=0;i<n-1;i++){
        if(arr[i]>=arr[i+1]){ // kmin
            kmin = max(kmin,(arr[i]+arr[i+1])/2.0); 
        }
        else{ // kmax
            kmax = min(kmax,(arr[i]+arr[i+1])/2.0);
        }
        if(kmax<kmin){
            flag = false;
            break;
        }
    }
    if(flag==false) cout<<-1;
    else if(kmax==kmin){
        if(kmin-(int)kmin==0){
            cout<<"There is only one value of K : "<<kmin;
        }
        else cout<<-1;
    }
    else{
        if(kmin-(int)kmin){
            kmin = (int)kmin + 1;
        }
        cout<<"The Range of K is : ["<<kmin<<","<<(int)kmax<<"]";
    }
}
