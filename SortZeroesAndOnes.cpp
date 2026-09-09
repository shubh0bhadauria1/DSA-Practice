#include<iostream>
#include<vector>
using namespace std;
void Sort0and1(vector<int> &a){
    int i=0;int j=a.size()-1;
    while(i<j){
        if(a[i]==1 && a[j]==0){
            a[i]=0;a[j]=1;
            i++;j--;
        }
        if(a[i]==0) i++;
        if(a[j]==1)j--;
    }
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    Sort0and1(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }



}