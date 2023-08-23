#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    cout<<"printing an array"<<endl;
    //print array
    for(int i =0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

void selection_sort(int a[], int n){

    for(int i =0; i<n; i++){
        int index_min=i;

        for(int j =i+1; j<n; j++){
            if(a[j]<a[index_min]){

                index_min=j;

            }
        }
        swap(a[i],a[index_min]);
        cout<<"* "<<i<<" ";
        printArray(a,n);
        cout<<endl;

    }
    
}
int main(){
    int n=6;
    int a[n]={2,9,4,3,7,6};
    int b[5]={6,2,8,4,0};

    
    selection_sort(a,n);
    cout<<endl;
    selection_sort(b,5);
}