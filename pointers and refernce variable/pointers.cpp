#include<iostream>
using namespace std;
int main(){
    int a = 10;
    void* aa = &a;
    cout<<aa;
    int nu=5;
    cout<<nu<<endl;
    cout<<"address of nu is "<<&nu <<endl;
    int *p=&nu;
    cout<<p;
}
// 0x61ff0cj 

