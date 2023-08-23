// find the element index in a sorted rotated array

// lecture 14  time 16:58

#include <iostream>
using namespace std;

int getpivot(int arr[], int n){
    int s=0;
    int e=n-1;
    int mid= s+(e-s)/2;
    while(s<e){
        if (arr[mid]>arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid= s+(e-s)/2;
    }
    return s;

}
int binary_search(int arr[], int s, int e,int key)
{
    
    int mid = e + ((s - e) / 2);
    while (s <= e)
    {

        if (arr[mid] == key)
        {
            return mid;
        }

        else if (arr[mid] > key)
        {
            e = mid - 1;
        }

        else
        {
            s = mid + 1;
        }
        mid = e + ((s - e) / 2);
    }
    return -1;
}


int main(){
    int a[5]={7,9,1,4,5};
    int pivot=getpivot(a,5); 
    cout<<"Pivot Point "<<pivot<<endl;
    int key=9;
    int ans =-1;
    if (key >=a[pivot] && key <= a[5-1]){
        // use second line 
        ans= binary_search(a,pivot,4,key);
    }
    else{
        // use first line
        ans= binary_search(a,0,pivot,key);
    }

    cout<<"Index of key is "<<ans<<endl;


}
    
