#include<iostream>
using namespace std;

int clearij(int num,int i,int j){
    int a=(~0)<<j+1;
    int b=(1<<i)-1;

    int mask = a | b;
    return num & mask;
}
int main(){
    int n=31;
    int ans=clearij(n,1,3);
    cout<<ans;
    return 0;
}