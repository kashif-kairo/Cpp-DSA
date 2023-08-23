#include<iostream>

#include<bits/stdc++.h> //or #include<vector>

using namespace std;

int main(){

    vector<int> v;
    cout<<"Size "<<v.size()<<endl;
    cout<<"Capacity "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Size "<<v.size()<<endl;
    cout<<"Capacity "<<v.capacity()<<endl;
    // Now Capacity=1 and size=1

    v.push_back(2);
    cout<<"Size "<<v.size()<<endl;
    cout<<"Capacity "<<v.capacity()<<endl;
    // Now Capacity=2 and size=2

    v.push_back(3);
    cout<<"Size "<<v.size()<<endl;
    cout<<"Capacity "<<v.capacity()<<endl;
    // Now Capacity=4 and size=3
    // this is because capacity always get double

    //element at index

    cout<<"Elements at 2nd Index "<<v.at(2)<<endl; 
    // we can use v[2] replacing v.at(2)

    //front and back elements
    cout<<"Front "<<v.front()<<endl;
    cout<<"Back "<<v.back()<<endl;

    //new print method
    cout<<"Before POP"<<endl;
    for(int i:v){
        cout<<i<<" ";
     }cout<<endl;

    v.pop_back();  //pop function

    cout<<"After POP"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"before clear size "<<v.size()<<endl;
    v.clear(); //clear function
    cout<<"after clear size "<<v.size()<<endl;

    vector<int> a(5,1);
    // vector a will be of size 5 (first argument) and 1 will assign to all postion
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;

    //coping a vector
    vector<int> l(a);
    cout<<"coping vector"<<endl;
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;




}
