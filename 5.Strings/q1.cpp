#include<iostream>
#include<string>
using namespace std;

int vowel(string s){
    int n=s.length();
    int count=0;
    for(char ch:s){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'|ch=='o'||ch=='u'){
            count++;
        }
    }
    return count;
}

int main(){
    string str;
    cout<<"Enter your string: ";
    getline(cin,str);
    cout<<vowel(str)<<"\n";
    return 0;
}