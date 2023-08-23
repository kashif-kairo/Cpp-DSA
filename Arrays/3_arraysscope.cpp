// love babbar lecture 9 , time 53:30 to 1:02:30

#include<iostream>
using namespace std;
void update(int arr[],int n){
    
    //updating the array
    arr[0]=120;

    //printing the array
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


}

int main(){
     int a[3]={1,2,3};

     //printing the array
    for(int i=0; i<3; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    update(a,3);

}