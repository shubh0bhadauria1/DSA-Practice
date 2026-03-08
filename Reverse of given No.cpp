#include<iostream>
using namespace std;
int  main(){
    cout<<"Enter the no :\n";int a,n,rev=0;cin>>a;n=a;
    while(n>0){
        rev*=10;
        rev+=(n%10);
        n/=10;
    }cout<<rev;
}