//lecture 10 by love babbar, time 11:30

#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    cout<<"printing an array"<<endl;
    //print array
    for(int i =0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

void swap_alternate(int arr[], int n){
    for(int i =0; i<n; i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
}

int main(){
    int even[10]={1,2,3,4,5,6,7,8,9,0};
    int odd[5]={1,2,3,4,5};
    swap_alternate(even,10);
    printArray(even,10);
    swap_alternate(odd,5);
    printArray(odd,5);

}