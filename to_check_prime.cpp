#include<iostream>
using namespace std;
int main(){
    int c=0;
    cout<<"Enter a number to check : ";int a;cin>>a;
    for(int i=2;i<a;i++){
        if(a%i==0)c+=1;
    }
    if(c>0)cout<<"Number not prime";else cout<<"Number is prime";
}
