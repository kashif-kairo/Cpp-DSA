// lecture 10  , time- 32:25
#include<iostream>
using namespace std;
int duplicate(int arr[], int n){
    int ans =0;
    // Xor in all
    for(int i=0; i<n; i++){
        ans=ans^arr[i];
    }

    for(int i=1; i<n; i++){
        ans=ans^i;
    }
    return ans;
}
int main(){
    int a[5]={1,2,3,4,2};
    int b=duplicate(a,5);
    cout<<"duplicate element is "<<b<<endl;
}