#include<iostream>

#include<bits/stdc++.h> //or #include<deque>

using namespace std;

int main(){

    deque<int> d;
    d.push_back(1);
    d.push_front(2);
  
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

    //d.pop_back();
    //d.pop_front();
    
    cout<<"First Index elements "<<d.at(1)<<endl;
    cout<<"Front elements "<<d.front()<<endl;
    cout<<"back elements "<<d.back()<<endl;

    cout<<"Empty or not "<<d.empty()<<endl;

    cout<<"Size before erase"<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1 ); // we have give range as a argument in erase function
    cout<<"Size after erase"<<d.size()<<endl;

}