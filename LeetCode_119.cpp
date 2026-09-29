#include<iostream>
#include<vector>
using namespace std;
int main(){
    int num;
    cout<<"Enter No. of Rows: ";
    cin>>num;
    vector<int> v(num+1);
    //generating
    for(int i=0;i<num;i++){
        if(i==0 || i==num-1){
            v[i]=1;
        }
        else{
            v[i]=v[i-1]*(((num-1)-(i-1)))/i;
        }
    }
    //printing
    for(int i=0;i<num;i++){
        cout<<v[i]<<" ";
    }

}