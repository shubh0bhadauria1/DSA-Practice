#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int str[]={1,2,3,0,4,5,1,0,2,5,0};
    int n= 11;
    for(int i=0;i<n-1;i++){
        bool flag=false;
        for(int j=0;j<n-1-i;j++){
            if(str[j]==0 && str[j+1]!=0){
                swap(str[j],str[j+1]);
                flag=false;
            }
        }
        if(flag==true) break;

    }
    for(int i=0;i<n;i++){
        cout<<str[i];
    }
}