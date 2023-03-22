#include<iostream>
using namespace std;

int main(){
     int n;
     cout<<"write the value of n";
     cin>>n;

     int i=1;
     
     while(i<=n){
          int j=1;
          int count = i;
          while(j<=i){
               cout<<count;
               count = count + 1;
               j=j+1;
          }
          i = i + 1;
          cout<<endl;
     }
}