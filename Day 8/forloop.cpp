#include<iostream>
using namespace std;

int main(){ 
     // int n;
     // cout<<"Enter the number"<<endl;
     // cin>>n;

     // for(int i=1; i<=n; i++){
     //      cout<<i<<endl;
     // }


     //Printing without any condition in for loop 
     int n;
     cout<<"Enter the value of n";
     cin>>n;

     int i=1;
     for(; ;){
          if(i<=n){
               cout<<i<<endl;
          }
          else{
               break;
          }
          i++;
     }

}




