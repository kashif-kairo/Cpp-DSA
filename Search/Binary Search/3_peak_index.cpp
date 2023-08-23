// Peak index in a Mountain Array
#include <iostream>
using namespace std;

int peak_search(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int main(){
    int even[9]={1,2,3,4,5,4,3,2,1};
    cout<<"Pivot index is "<<peak_search(even,9);
}