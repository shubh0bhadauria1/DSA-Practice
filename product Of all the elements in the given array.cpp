#include<iostream>
using namespace std;
int main(){
    int pro=1;
    int x;
    cout<<"Enter no. of elements in array: ";
    cin>>x;
    int arr[x];
    for (int i=0;i<x;i++){
        cin>>arr[i];
    }
    for (int i=0;i<x;i++){

        pro*=arr[i];
    }
    cout<<"The Product of all the elements in the array is: "<<pro;
}