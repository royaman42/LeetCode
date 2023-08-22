#include<bits/stdc++.h>
using namespace std;

int insorted(int n,vector<int> a){
    for(int i=0;i<n;i++){
        if(a[i]>=a[i-1]){

        }
        else{
            return false;
        }
    }
    return true;

}
main(){
    
    vector<int> a1={2,5,3,7,4};

    
    cout<<insorted();

}