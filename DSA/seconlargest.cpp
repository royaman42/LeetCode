#include<bits/stdc++.h>
using  namespace std;

int second_largest(vector<int>&a,int n){
    int largest =a[0];
    int slargest = -1;
    for(int i=1;i<n;i++){
        if(a[i]>largest){
            slargest =a[i];
            largest = a[i];

        }
        else if(a[i]<largest && a[i]>slargest){
            slargest = a[i];

        }
    }
    return slargest;
}
int second_smallest(vector<int>&a,int n){
    int max;
    int smallest =a[0];
    int ssmallest = max;
    for(int i=1;i<n;i++){
        if(a[i]<smallest){
            ssmallest=smallest;
            smallest = a[i];

        }
        else if(a[i]=!smallest && a[i]<ssmallest){
            ssmallest = a[i];

        }
    }
    return ssmallest;
}
main(){
vector<int>getsecondorderelement(int n,vector<int>a)
   { 
    int slargest = second_largest(a,n);
    int ssmallest= second_smallest(a,n);
    return {slargest,ssmallest};

}
}
/*#include<bits/stdc++.h>
using namespace std;
int secondSmallest(int arr[],int n)
{
    if(n<2)
        return -1;
    int small = INT_MAX;
    int second_small = INT_MAX;
    int i;
    for(i = 0; i < n; i++) 
    {
       if(arr[i] < small)
       {
          second_small = small;
          small = arr[i];
       }
       else if(arr[i] < second_small && arr[i] != small)
       {
          second_small = arr[i];
       }
    }
   return second_small;     
}
int secondLargest(int arr[],int n)
{
	if(n<2)
	return -1;
    int large=INT_MIN,second_large=INT_MIN;
    int i;
    for (i = 0; i < n; i++) 
    {
        if (arr[i] > large) 
        {
            second_large = large;
            large = arr[i];
        }
 
        else if (arr[i] > second_large && arr[i] != large) 
        {
            second_large = arr[i];
        }
    }
    return second_large;                
}

int main() {
    int arr[]={1,2,4,7,7,5};  
    int n=sizeof(arr)/sizeof(arr[0]);
        int sS=secondSmallest(arr,n);
        int sL=secondLargest(arr,n);
    cout<<"Second smallest is "<<sS<<endl;
    cout<<"Second largest is "<<sL<<endl;
    return 0;
}*/