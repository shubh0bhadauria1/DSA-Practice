#include<iostream>
using namespace std;
int Path(int a){
    if(a==1) return 1;
    if(a==2) return 2;
    if(a==3) return 3;
    return Path(a-1)+Path(a-2)+Path(a-3); 
}
int main(){
    int b;
    cout<<"Enter No. Of Stairs: ";
    cin>>b;
    cout<<"No. Of Ways: ";
    cout<<Path(b); 
}