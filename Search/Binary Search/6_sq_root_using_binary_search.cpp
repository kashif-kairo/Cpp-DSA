// lecture 14  time 28:41

#include <iostream>
using namespace std;

long long int sq_root(int n){
    int s=0;
    int e=n;
    long long mid = s+(e-s)/2;
    long long ans = -1;
    while(s<=e){
        long long int square = mid*mid;
        if (square==n){
            return mid;
        }

        else if (square<n){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

double morePrecision(int n, int precision, int tempsol){
    double factor=1;
    double ans =tempsol;
    for(int i =0; i<precision;i++){
        factor=factor/10;

        for(double j = ans; j*j<n; j=j+factor){
            ans=j;
        }
    }
    return ans;
}

int main(){
    int a;
    cout<<"Enter the number "<<endl;
    cin>>a;
    int tempsol=sq_root(a);
    cout<<"Underroot of the number "<<a<<" is "<<morePrecision(a,3,tempsol)<<endl;
}