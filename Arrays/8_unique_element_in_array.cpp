//lecture 10 by love babbar, time 18:30

#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    cout<<"printing an array"<<endl;
    //print array
    for(int i =0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int Unique(int arr[], int n){
    int ans =0;
    for(int i =0; i<n; i++){
        ans = ans^arr[i];

    }
    return ans;
}

int main(){
    // XOR will be used
    int a[5]={1,2,2,4,4};
    int b=Unique(a,5);
    cout<<"Unique value "<<b<<endl;

}