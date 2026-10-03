#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,2,2,2,3,3,3,4,5,6,7,8,8,9};
    int n=9;
    int target;
    cout<<"Enter Target: ";
    cin>>target;
    int low=0;
    int high=n-1;
    while(low<=high){
       int mid=(low+high)/2;
        if(arr[mid]==target){
            if(arr[mid-1]==target){
                high=mid-1;
            }
            else{
                cout<<"First Occurence of "<<target<<" is "<<mid;return 0;
            }
            
        }
        else if (arr[mid]<target) low=mid+1;
        else high=mid-1;
        
    }
    cout<<"Not Present";
    
    
}