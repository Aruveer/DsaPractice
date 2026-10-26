#include<iostream>
using namespace std;

int square(int a,int b){
    return (a*a)+(b*b)+(2*a*b);
}

int main(){
    cout<<square(1,1);
    return 0;
}