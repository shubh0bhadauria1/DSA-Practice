#include<iostream>
#include<vector>
using namespace std;
int display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    
    }
    cout<<endl;
    }
void reversePart(int i, int j , vector<int> &v){
    while(i<=j){
        int e;
        e=v[i];
        v[i]=v[j];
        v[j]=e;
        i++;j--;
    }
}


int main(){
    int x;vector<int> v;
    cout<<"Enter size of the vector: ";
    cin>>x;
    cout<<"Enter elements of vector: ";
    for(int i=0;i<x;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    display(v);
    int k;
    cout<<"Enter no. of steps to be reversed: ";
    cin>>k;
    if(k>v.size()-1){k=k%v.size(); }
    reversePart(0,v.size()-1-k,v);
    reversePart(v.size()-k,v.size()-1,v);
    reversePart(0,v.size()-1,v);
    display(v);
    
    
    


}