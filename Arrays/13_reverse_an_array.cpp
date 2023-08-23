#include<iostream>
#include<vector>
using namespace std;
void printArray(vector<int> v){
    cout<<"printing vector "<<endl;
    //print array
    int size=v.size();
    for(int i =0; i<size; i++){
        cout<<v[i]<<" ";
    }
}
vector<int> reverse(vector<int> v){
    int s=0;
    int e = v.size()-1;
    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
    
}

int main(){
    vector<int> v;
    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);

    vector<int> ans = reverse(v);
    cout<<"orginal ";
    printArray(v);
    cout<<endl;
    cout<<"reversed ";
    printArray(ans);

}