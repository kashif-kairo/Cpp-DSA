// lecture 21 time 15:19
// its is good appoach
#include<iostream>
#include<vector>
using namespace std;

bool check(vector<int> n){
    int count=0;
    int size=n.size();
    for(int i =1; i<size; i++){
        if(n[i-1]>n[i]){
            count++;
        }
    }
    if (n[size-1]>n[0]){
        count++;
    }
    return count;
}
int main(){
    vector<int> v={1,2,3,4,5,6};
    vector<int> vi={5,6,1,2,3,4};
    vector<int> vii={3,2,4,1,5,6};
    cout<<check(v)<<endl;
    cout<<check(vi)<<endl;
    cout<<check(vii)<<endl;
}