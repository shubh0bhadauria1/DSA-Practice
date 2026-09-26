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
    cout<<"Enter Elements Of Arrays: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;

    //Spiral
    int minr = 0, minc = 0;
    int maxr = m-1, maxc = n-1;
    while( minr<=maxr && minc<=maxc ){
        //Right
        for(int j=minc;j<=maxc;j++){
            cout<<arr[minr][j]<<" ";
        }
        minr++;
        if(minr>maxr || minc>maxc) break;
        //Down
        for(int i=minr;i<=maxr;i++){
            cout<<arr[i][maxc]<<" ";
        }
        maxc--;
        if(minr>maxr || minc>maxc) break;
        //Left
        for(int j=maxc;j>=minc;j--){
            cout<<arr[maxr][j]<<" ";
        }
        maxr--;
        if(minr>maxr || minc>maxc) break;
        //Up
        for(int i=maxr;i>=minr;i--){
            cout<<arr[i][minc]<<" ";
        }
        minc++;
        if(minr>maxr || minc>maxc) break;


    }




}
































