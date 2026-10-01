#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={5,4,3,2,1};
    int n=5;
    for(int i=0;i<n-1;i++){
        int small=i;
        for(int j=1+i;j<n;j++){
            if(arr[j]<arr[small]){
                small=j;
            }
        }
        swap(arr[small],arr[i]);

    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}