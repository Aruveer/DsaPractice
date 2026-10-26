#include<iostream>
using namespace std;


int dsum(int n){
    
    int sum=0;
    while(n!=0){
        int dig=n%10;
        sum+=dig;
        n/=10;
    }
    return sum;

}

int main(){
    cout<<dsum(123);
    return 0;
}