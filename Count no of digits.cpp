#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the no. to check :\n";
    int a,c=0;cin>>a;
    int n=a;
    while(n>0){
        n/=10;
        c++;
    }
    (a==0)?cout<<1:cout<<c;
}