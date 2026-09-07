#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> a;
    a.push_back(5);
    a.push_back(2);
    a.push_back(56);
    a.push_back(9);
    a.push_back(5);
    a.push_back(7);
    int x=5,idx=-1;
    for(int i=a.size()-1;i>=0;i--){
        if(a[i]==x){
            idx=i;
            break;
        }
    }
    cout<<idx;
}