#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={0,1,2,4,5,6,7,8,9};
    int n=8;
    int low=0;
    int high=n-1;
    int small=-1;
    while(low<=high){
       int mid=(low+high)/2;
        if(arr[mid]==mid) low=mid+1;
        else{
            small=mid;
            high=mid-1;
        }

        
    }
    cout<<endl<<"Smallest No. not in array: "<<small<<endl;
    
    
}