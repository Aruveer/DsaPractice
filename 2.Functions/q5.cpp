#include<iostream>
using namespace std;

char next(char c){
    if(c=='z'){
        return 'a';
    }
    return char(c+1);
    
}

int main(){
    cout<< "Enter a character : \n";
    char c;
    cin>>c;
    cout<< "The next character after "<<c<<" is : "<<next(c);

    return 0;
}