// Print number from 1 to n?
 
// #include<iostream>
// using namespace std;

// int main(){
//      int n;
//      cin>>n;

//      int i=1;
//      while (i<=n){
//           cout<<i<<endl;
//           i=i+1;
//      }
// }

//print the sum from 1 to n using while loop 

#include<iostream>
using namespace std;

int main(){
     int i=1;
     int n;
     cout<<"enter the value of n"<<endl;
     cin>>n;
     int sum=0;

     while(i<=n){
          sum=sum+i;
          cout<<sum<<endl;
          i=i+1;
     }
}