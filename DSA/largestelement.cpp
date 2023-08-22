#include<bits/stdc++.h>
using namespace std;

int largest_element(vector<int> &arr,int n){
    int largest = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];

        }
    

    }
    return largest;
}
main(){
    int n;
    cin>>n;

    vector<int> arr;
    


   cout<< largest_element(arr,n);
    

     
    return 0;
}


/*#include<bits/stdc++.h>
using namespace std;
 
int sortArr(vector<int>& arr) {
    sort(arr.begin(),arr.end());
    return arr[arr.size()-1];
}
 
int main() {
    vector<int> arr1 = {2,5,1,3,0};
    vector<int> arr2 = {8,10,5,7,9};
   
    cout<<"The Largest element in the array is: "<<sortArr(arr1)<<endl;
    cout<<"The Largest element in the array is: "<<sortArr(arr2);
   
    return 0;
}*/



