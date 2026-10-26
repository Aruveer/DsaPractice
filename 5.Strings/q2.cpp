#include<iostream>
#include<string>
using namespace std;

string swapper(string s,int i,int j){
    char temp=s[i];
    s[i]=s[j];
    s[j]=temp;
    return s;
}

int main(){
    string str1="aruveer";
    string str2="arevuer";
    if(str1==str2){
            cout<<"True";
        }
        bool flag=false;
    for(int i=0,j=str1.length()-1;i<str1.length();i++,j--){
        
        string temp=swapper(str2,i,j);
        if(str1==temp){
            flag=true;
            break;
        }
    }
    if(flag){
        cout<<"True";
    }else{
        cout<<"False";
    }
    


    return 0;
}