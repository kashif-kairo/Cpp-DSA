#include<iostream>

#include<bits/stdc++.h> //or #include<map>

using namespace std;

int main(){
    map<int,string> m;

    m[1]="Mohammad";
    m[2]="Kashif";
    m[3]="Siddiqui";

    m.insert( {5,"Hhan"} );

    cout<<"Before erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;

    cout<<"finding -- 3--> "<<m.count(3)<<endl;

    m.erase(3);

    cout<<"Before erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;

    auto it = m.find(4);
    for(auto i =it; i!=m.end();i++){
        cout<<(*i).first<<endl;
    }



}
