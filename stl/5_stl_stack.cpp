#include<iostream>

#include<bits/stdc++.h> //or #include<stack>

using namespace std;

int main(){
    stack<string> s;

    s.push("Mohammad");
    s.push("Kashif");
    s.push("Siddiqui");

    cout<<"Top Element -->"<<s.top()<<endl;
    s.pop();
    cout<<"Top Element -->"<<s.top()<<endl;

    cout<<"size of stack "<<s.size()<<endl;

}