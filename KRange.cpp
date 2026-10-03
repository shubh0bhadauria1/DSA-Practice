#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int arr[]={5,3,6,10};
    int n=4;
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    float Kmin=(float)(INT_MIN);
    float Kmax=(float)(INT_MAX);
    bool flag=true;
    for(int i=0;i<n;i++){
        if(arr[i]-arr[i+1]>=0){
            Kmin=max(Kmin,(float)(arr[i]+arr[i+1]/2));
        }
        else{
            Kmax=min(Kmax,(float)(arr[i]+arr[i+1]/2));
        }
        if(Kmin>Kmax){
            break;
            flag=false;
        }
    }
    if(flag==false) cout<<-1;
    else if(Kmin==Kmax){
        cout<<"Range of K is : ["<<Kmax<<"]";
    }
    else{
    cout<<"Range of K is : ["<<Kmin<<","<<Kmax<<"]";
    }
}