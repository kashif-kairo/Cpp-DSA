// compalixity O(log n)
#include <iostream>
using namespace std;

int binary_search(int arr[], int size, int key)
{
    int s = 0;
    int e = size - 1;
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
    int a[6]={1,2,3,4,5,6};
    int index= binary_search(a,6,5);

    cout<<"index of 5 is "<<index;
}