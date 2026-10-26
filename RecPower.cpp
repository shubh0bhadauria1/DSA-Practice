#include<iostream>
using namespace std;
int Power(int n,int m){
    if(m==1) return n;
    int ans=Power(n,m/2);
    if(m%2==0){
        return (ans*ans);
    }
    else return (ans*ans*n);
}
int main(){
    int b,d;
    cout<<"enter 1st element: ";
    cin>>b;
    cout<<"enter 2nd element: ";
    cin>>d;
    cout<<b<<" to the power "<<d<<" is: "<<Power(b,d); 
}