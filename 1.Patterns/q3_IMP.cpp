#include<iostream>
using namespace std;

int main(){
    int n=5;

    for(int i=0;i<n;i++){
        
        for(int j=0;j<n-i-1;j++){
            
            cout<<" ";
        }
        int num=i+1;
        for(int j=0;j<=i;j++){
            
            cout<<num--<<" ";

        }
        int num2=2;
        for(int j=1;j<=i;j++){
            
            cout<<num2++<<" ";
        }

        cout<<endl;
    }

    return 0;
}