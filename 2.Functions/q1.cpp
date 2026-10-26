#include<iostream>
using namespace std;

bool isPal(int n){
    int temp=n;
    int rev=0;
    while(temp!=0){
    rev=rev*10+(temp%10);
    temp=temp/10;
    }
    
    if(n==rev){
        return true;
    }else{
        return false;
    }
}

int main(){
    int n;
    cout<<"Input a number:\n";
    cin>>n;
    if(isPal(n)){
        cout<<n<<" is a Palindrome.";
    }else{
        cout<<n<<" is not a Palindrome.";
    }
    return 0;
}