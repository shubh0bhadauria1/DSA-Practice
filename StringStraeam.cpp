#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    string str="I am a boy";
    cout<<"Enter String: ";
    getline(cin,str);
    stringstream ss(str);
    string temp;
    while(ss>>temp){
        cout<<temp<<endl;
    }
    
}