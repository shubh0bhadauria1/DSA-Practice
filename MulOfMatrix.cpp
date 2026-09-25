#include<iostream>
#include<vector>
using namespace std;
int main(){
    int r;
    int c;
    cout<<"Enter Rows Of First Array: ";
    cin>>r;
    cout<<"Enter Coloumns Of First Array: ";
    cin>>c;
    int r1;
    int c1;
    cout<<"Enter Rows Of Second Array: ";
    cin>>r1;
    cout<<"Enter Coloumns Of Second Array: ";
    cin>>c1;
    if(c==r1){
        int a[r][c];
        int b[r1][c1];
        cout<<"Enter elements of first matrix: ";
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cin>>a[i][j];
            }
            
        }
        cout<<"Enter elements of Second Matrix: ";
        for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
                cin>>b[i][j];
            }
            
        }
        //resultant matrix
        int res[r][c1];
        for(int i=0;i<r;i++){
            for(int j=0;j<c1;j++){
                res[i][j]=0;
                for(int k=0;k<c;k++){
                    res[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        //print
        for(int i=0;i<r;i++){
            for(int j=0;j<c1;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"Coloumns must be same for multiplication.";
    } 
    

}