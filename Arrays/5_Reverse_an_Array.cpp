#include<iostream>
using namespace std;

void reverse(int arr[], int n){
    int start =0;
    int end= n-1;
    
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int size){
    cout<<"printing an array"<<endl;
    //print array
    for(int i =0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[6]={1,2,3,4,5,6};
    int arro[5]={9,8,7,6,5};

    reverse(arr,6);
    reverse(arro,5);

    printArray(arr,6);
    cout<<endl;  
    printArray(arro,5);
}