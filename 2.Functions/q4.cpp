#include<iostream>
using namespace std;

int max(int a,int b,int c){
    if(a>b){
        if(a>c){
            return a;
        }else{
            return c;
        }
    }else{
        if(b>c){
            return b;
        }else{
            return c;
        }
    }
    
}

int main(){
    cout<<max(100,200,300);
    return 0;
}