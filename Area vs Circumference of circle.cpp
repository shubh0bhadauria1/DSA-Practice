#include<iostream>
using namespace std;
int main(){
    int r;
    float a=3.14;
    cout<<"Enter Radius:\n";cin>>r;
    ((a*r*r)>2*a*r)?cout<<"Area is greater than circumference":cout<<"Circumference is greater than area";
}