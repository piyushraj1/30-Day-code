#include<iostream>
using namespace std;

int main(){
     float fahren, celsius;
     cout<<"Enter the temp in fahren height:"<<endl;;
     cin>>fahren;

    celsius = 5*(fahren -32)/9;
    cout<<fahren<<"Fahrenheight is equal to "<<celsius<<"centigrade"<<endl;
    return 0;
}