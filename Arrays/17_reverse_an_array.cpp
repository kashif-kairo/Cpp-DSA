#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<int> n, int k){

    vector<int> temp(n.size());

    for(int i =0; i<n.size();i++){
        temp[(i+k)%n.size()]=n[i]
        ;

    }
    n=temp;
    //print
    for(int j =0; j<temp.size();j++){
        cout<<temp[j]<<" ";
    }
}
int main(){
    vector<int> a={1,2,3,4,5,6,7};
    rotate(a,3);
}