// more optimised code is in Lecture 17 time 28:39
#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    cout<<"printing an array"<<endl;
    //print array
    for(int i =0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
void bubblesort(int arr[], int n){
    for(int i =1; i<n; i++){
        //for round 1 to n-1

        for(int j =0; j<n-i; j++){
            // process element till n-1 th index

            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);

            }
        } 
    }

    printArray(arr,n);
}
int main(){
    int n=6;
    int a[n]={2,1,4,3,7,6};
    int b[5]={6,2,8,4,0};

    
    bubblesort(a,n);
    cout<<endl;
    bubblesort(b,5);
}