#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={1,3,2,4,1,3,1,6};
    vector<int> rev;
    for(int i=v.size()-1;i>=0;i--){
        int x=v[i];
        rev.push_back(x);
        cout<<endl;
        
    }
     for(int i=0;i<v.size();i++){
        cout<<rev[i]<<" ";
     }
}