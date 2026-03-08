#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the digit :\n";int d,s=0;cin>>d;int n=d;
    while (n>0)
    {
        s+=n%10;
        n/=10;

    }
    cout<<s;
    
}