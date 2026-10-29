#include<iostream>
using namespace std;
class num1{
protected:
int a;
void getA(){
    cout<<"Enter value of a: ";
    cin>>a;
}
};
class num2:public num1{
private:
    int b;
    void getB(){
        cout<<"Enter the valu of b: ";
        cin>>b;
    }
};
int main(){
    
}
