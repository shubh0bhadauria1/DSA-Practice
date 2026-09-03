#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[7]={5,15,554,45,54,55,1};
    int min=INT_MAX;
    for(int i=0;i<7;i++){
        if(min>arr[i]){
            min=arr[i];
        }

    }
    cout<<"Min in array: "<<min;
}