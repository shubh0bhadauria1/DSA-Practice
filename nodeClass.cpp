#include<iostream>
using namespace std;
int main(){
    int arr[6]={2,3,4,5,7,8};
    int target=5;
    int i=0;
    int j=6-1;
    while(i<=j){
        int mid=i+(j-i)/2;
        if(arr[mid] == target){
            cout<<endl<<mid<<endl;
            break;
        }
        else if(arr[mid]>target) j = mid-1;
        else i = mid+1;
    }
    
    
}