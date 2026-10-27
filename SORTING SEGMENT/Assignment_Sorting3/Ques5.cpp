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
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
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

    else{
        if(kmin-(int)kmin){
            kmin = (int)kmin + 1;
        }
        cout<<"Value of k : "<<kmin;
    }
}