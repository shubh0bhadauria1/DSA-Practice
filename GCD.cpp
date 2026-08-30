#include<iostream>
using namespace std;
int gcd(int a, int b){
    int hcf;
    for( int i=min(a,b); i>=1;i--){
        if(a%i==0 && b%i==0 ){
            hcf=i;
            break;
        }
    }
    return hcf;
}

int main(){
    int a,b;
    cout<<"Enter First Number: ";
    cin>>a;
    cout<<"Enter Second Number: ";
    cin>>b;
    cout<<gcd(a,b);

}