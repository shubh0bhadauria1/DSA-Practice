// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     int count=0;
//     string str;
//     cout<<"Enter String: ";
//     cin>>str;
//     int n=str.length();
//     for(int i=0;i<n;i++){
//         if(n==1) break;
//         if(n==2 && str[0]!=str[1]){ count++;break;}
//         if(i==0){
//             if(str[i]!=str[i+1]) count++;
//         }
//         else if (i==n-1){
//             if(str[i]!=str[i-1]) count++;
//         }
//         else if (str[i]!=str[i+1] && str[i]!=str[i-1]) count++;

//     }
//     cout<<"Count: "<<count;
// }



#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int count=0;
    string str;
    cout<<"Enter String: ";
    cin>>str;
    sort(str.begin(),str.end());
    cout<<str;
}