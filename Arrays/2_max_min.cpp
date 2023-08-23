#include<iostream>
using namespace std;

int max(int arr[], int n){
    int max = INT32_MIN;
    
    for(int i =0; i<n; i++){
        if( arr[i] > max){
            max=arr[i];
        }
    }
    //returning max value
    return max;
}

int min(int arr[], int n){
    int min = INT32_MAX;
    
    for(int i =0; i<n; i++){
        if( arr[i] < min){
            min=arr[i];
        }
    }
    //returning max value
    return min;


}

int main(){
    int size;
    cout<<"size ";
    cin>>size;

    int num[100];
    //taking input to array
    for (int i=0; i<size; i++){
        cin>>num[i];
    }
    int d = max(num,size);
    int e = min(num,size);
    cout<<"Max "<<d<<" ";
    cout<<"Min "<<e<<" ";
    
}