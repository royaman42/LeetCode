#include<bits/stdc++.h>
using namespace std;
//wap to reverse a number


//int count(int n){
    /*int cnt =0;
    
    while(n>0){
        int last_digit = n%10;
        cnt += 1;
        n=n/10;
    }*/
    //int cnt = (int) log10(n)+1;


   // return cnt; 
  
//}
main(){
    //int num;
    //cin>>num;

   // cout<<count(num);
   int n;
   cin>>n;
  int dup = n;
   int rev_no =0;
   while(n>0){
     int last_digit = n%10;
     rev_no = (rev_no*10)+last_digit;
     n = n/10;  
   }
   if(dup==rev_no)  //to check whwther number is palindrome or not
   cout<<"true";
   else
   cout<<"false";





}