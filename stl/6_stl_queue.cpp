#include<iostream>

#include<bits/stdc++.h> //or #include<queue>

using namespace std;

int main(){
    queue<string> q;

    q.push("Mohammad");
    q.push("Kashif");
    q.push("Siddiqui");

    cout<<"First Element -->"<<q.front()<<endl;
    q.pop();
    cout<<"First Element -->"<<q.front()<<endl;

    cout<<"size of stack "<<q.size()<<endl;

}