#include <iostream>
using namespace std;

int decimal2binary(int n){
    int binary=0;
    int x=1;
    while(n>0){
        binary+=(n%2)*x;
        n/=2;
        x*=10;
    }
    return binary;
}

int main() {

int n;
cin>>n;
cout<<decimal2binary(n);
    return 0;
}
