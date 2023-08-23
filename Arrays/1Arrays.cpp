#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    cout<<"printing an array"<<endl;
    //print array
    for(int i =0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    //declare
    int number[15];

    //accessing an array
    cout<<"Value at 0 index "<< number[0] <<endl;
    cout<<"Value at 1 index "<< number[1] <<endl;
    cout<<"Value at 2 index "<< number[2] <<endl;
    cout<<"Value at 3 index "<< number[3] <<endl;
    cout<<"Value at 30 index "<< number[30] <<endl;

    //initialising an array

    int second[15]={5,7,11};

    //accessing an element
    cout<<"VAlue at 2 index "<<second[2]<<endl;
    cout<<"Every thing is fine"<<endl;

    //printing the array
    int n =15;
    cout<<"printing an array"<<endl;
    for(int i =0; i<n; i++){
        cout<<second[i]<<" ";
    }
    cout<<endl;
    n=10;
    int forth[10]={0};
    cout<<"printing an array"<<endl;
    for(int i =0; i<n; i++){
        cout<<forth[i]<<" ";
    }

    //printing an array using function
    cout<<endl;
    int array[15]={1,2,3,4,5,6,7,8,9};
    int a = sizeof(array)/sizeof(int); //find size of array
    cout<<"Size of Array "<<a<<endl;
    printArray(array,a);


}
