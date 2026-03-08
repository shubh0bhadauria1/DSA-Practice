#include<iostream>
using namespace std;
int main(){
    cout<<"Enter no. :\n";int a,b=1,c=1,s=0;cin>>a;cout<<b<<" ";
    for(int i=1;i<=a-1;i++){
        cout<<c<<" ";
        s=b+c;
        b=c;c=s;
        
    
    }
}