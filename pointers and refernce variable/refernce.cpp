#include<iostream>
using namespace std;
// lectur 28 very important

void update(int n){
    n++;
}

void update2(int &n){
    n++;
}
int main(){
    int i =5;

    // create a ref variable
    int& j =i;
    i++;
    cout<<i<<endl;
    j++;  
    cout<<j<<endl;

    int n =5;

    cout<<"Before update "<<n<<endl;
    update(n);
    cout<<"After update "<<n<<endl;
    cout<<"Before update2 "<<n<<endl;
    update2(n);
    cout<<"After update2 "<<n<<endl;
}