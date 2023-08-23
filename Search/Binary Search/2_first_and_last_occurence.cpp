// First and last position of elemnet in an array
#include <iostream>
using namespace std;

int first_occur(int arr[], int size, int key)
{
    int s = 0;
    int e = size - 1;
    int mid = e + ((s - e) / 2);
    int ans= -1;
    while (s <= e)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
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
    return ans;
}
int last_occur(int arr[], int size, int key)
{
    int s = 0;
    int e = size - 1;
    int mid = e + ((s - e) / 2);
    int ans= -1;
    while (s <= e)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
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
    return ans;
}
int main(){
    int even[9]={1,3,3,3,5,5,7,7,9};
    cout<<"First Occurence of 5 is "<<first_occur(even,9,5)<<endl;
    cout<<"Last Occurence of 5 is "<<last_occur(even,9,5)<<endl;
    cout<<"Total number Occurence of 5 is "<<last_occur(even,9,5)-first_occur(even,9,5)+1<<endl;
    
}