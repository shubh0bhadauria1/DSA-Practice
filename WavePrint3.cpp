#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m;
    int n;
    cout<<"Enter Rows Of Array: ";
    cin>>m;
    cout<<"Enter Coloumns Of Array: ";
    cin>>n;
    int arr[m][n];
    //Input Array Elements.
    cout<<"Enter Elements of Array: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    //Printing array in wave.
    for(int i=0;i<n;i++){

        if(i%2==0){
            for(int j=0;j<m;j++){
                cout<<arr[j][i]<<" ";
            }
        }
        else{
            for(int j=n-1;j>=0;j--){
                cout<<arr[j][i]<<" ";
            }
        }
    }


}