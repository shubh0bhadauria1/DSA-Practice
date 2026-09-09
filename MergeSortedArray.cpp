#include<iostream>
#include<vector>
using namespace std;
vector<int> mergeArray(vector<int> &a,vector<int> &b){
    int i=0,j=0,k=0;
    vector<int> res(a.size()+b.size());
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]){
            res[k]=a[i];
            i++;
        }
        else{
            res[k]=b[j];
            j++;
        }
        k++;
    }
    if(i==a.size()){
        while(j<b.size()){
            res[k]=b[j];
            j++;k++;
        }
    }
    if(j==b.size()){
        while(i<a.size()){
            res[k]=a[i];
            i++;k++;
        }
    }
    return res;
}
int main(){

    vector<int> a1;
    a1.push_back(1);
    a1.push_back(2);
    a1.push_back(4);
    a1.push_back(8);
    for(int i=0;i<a1.size();i++){
        cout<<a1[i]<<" ";
    }
    cout<<"   ";

    vector<int> a2;
    a2.push_back(2);
    a2.push_back(3);
    a2.push_back(6);
    a2.push_back(7);
    a2.push_back(10);
    a2.push_back(12);
    for(int i=0;i<a2.size();i++){
        cout<<a2[i]<<" ";
    }
    cout<<endl;
    vector<int> v=mergeArray(a1,a2);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    
}