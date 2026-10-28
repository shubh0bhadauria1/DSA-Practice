#include<iostream>
using namespace std;
int maze(int sr, int sc, int er, int ec){
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int r= maze(sr,sc+1,er,ec);
    int e= maze(sr+1,sc,er,ec);
    int a=r+e;
    return a;
}
void printways(int sr, int sc, int er, int ec, string s){
    if(sr>er || sc>ec) return;
    if(sr==er && sc==ec){
        cout<<s<<endl;
        return;
    }
    printways(sr,sc+1,er,ec,s+'R');
    printways(sr+1,sc,er,ec,s+'D');

}

int main(){
    int a,b,c,d;
    cout<<"Enter Starting Row: ";
    cin>>a;
    cout<<"Enter Starting Coln: ";
    cin>>b;
    cout<<"Enter Ending Row: ";
    cin>>c;
    cout<<"Enter Ending Coln: ";
    cin>>d;
    printways(a,b,c,d," ");
    cout<<"No. of Ways To Reach From ("<<a<<","<<b<<") To "<<"("<<c<<","<<d<<") is: "<<maze(a,b,c,d);

}