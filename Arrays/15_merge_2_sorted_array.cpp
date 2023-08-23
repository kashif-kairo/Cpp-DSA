// we have to soreted array and we have merge it 
// AND to the the 3rd array
#include<iostream>
#include<array>
using namespace std;
void printArray(int v[], int size){
    cout<<"printing vector "<<endl;
    //print array
    for(int i =0; i<size; i++){
        cout<<v[i]<<" ";
    }
}

void merge(int arr1[],int n,int arr2[],int m, int arr3[]){

    int o =n+m;
    int i=0 , j =0;
    int k =0;
    while(i<n && j<m){
        if (arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }
    while(i<n){
        arr3[k]=arr1[i];
        k++;
        i++;
    }
    while(i<m){
        arr3[k]=arr2[j];
        k++;
        j++;
    }
    printArray(arr3,o);


}

int main(){
    int arr1[5]={1,3,5,7,9};
    int arr2[3]={2,4,6};
    int arr3[8]={0};
    merge(arr1,5,arr2,3,arr3);
    return 0;
}





