#include<iostream>
using namespace std;
bool search(int arr[], int size, int key){
    for(int i =0; i<size; i++){
        if (key==arr[i]){
            return 1;
        }
    }
    return 0;

}
int main(){
    int a[10]={2,3,1,5,4,7,-8,9,10};
    cout<<"Enter the key ";
    int key;
    cin>>key;

    bool found= search(a,10,key);

    if (found){
        cout<<"Key is found" <<endl;

    }
    else{
        cout<<"Key is not found"<<endl;
    }

}