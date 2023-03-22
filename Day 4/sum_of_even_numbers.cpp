#include<iostream>
using namespace std;

int main(){
     int i=2;
     int n;
     cin>>n;

     int sum = 0;
     while(i<=n){
          sum=sum+i;
          cout<< sum << endl;
          i = i+2;
     }
}
