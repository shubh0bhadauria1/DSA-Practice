#include<iostream>
#include<vector>
using namespace std;
void sortNP(vector<int> &v){
    int i=0;int j=v.size()-1;
    while(i<j){
    if(v[i]<0 && v[j]>=0){
        int x;
        x=v[i];v[i]=v[j];v[j]=x;i++;j--;
    }
    if(v[i]>=0)i++;
    if(v[j]<0)j--;
} 
}
int main(){
    vector<int> k;
    k.push_back(-1);
    k.push_back(3);
    k.push_back(8);
    k.push_back(-5);
    k.push_back(0);
    k.push_back(-7);
    k.push_back(-5);
    k.push_back(8);
    for(int i=0;i<k.size();i++){
        cout<<k[i]<<" ";
    }
    cout<<endl;
    sortNP(k);
    for(int i=0;i<k.size();i++){
        cout<<k[i]<<" ";
    }
    cout<<endl;


}