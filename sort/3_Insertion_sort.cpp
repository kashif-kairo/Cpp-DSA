#include<iostream>
using namespace std;
void printArray(int arr[], int size){
    // cout<<"printing an array"<<endl;
    //print array
    for(int i =0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

void insertuionsort(int arr[], int n){

    for(int i =1; i<n; i++){
        int temp =arr[i];
        int j = i-1;
        
        for(; j>=0; j--){

            if (arr[j]>temp){
                //shift
                arr[j+1]=arr[j];
                arr[j]=temp;
                
            }

            
            else{
                break;
            }

        }
        cout<<"* "<<i<<"? ";
        printArray(arr,n);
        cout<<endl;
        
    // printArray(arr,n);
        }
    }

int main(){
    int a[5]={2,8,3,7,5};
    insertuionsort(a,5);
}