#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number for factorial :\n";int a,b=1;cin>>a;
    for(int i=1;i<=a;i++){
        b*=i;
    }cout<<b;
}