#include <iostream>
using namespace std;
int main() {
int arr[5]={1,2,2,4,7};
for (int i = 1; i < 5; i++){ 
         
if (arr[i - 1] > arr[i]){
           cout<<"NO IT IS NOT SORTED"<<endl;
return 0;
         }
}
    
  cout<<"YES IT IS SORTED"<<endl;
return 0;
}