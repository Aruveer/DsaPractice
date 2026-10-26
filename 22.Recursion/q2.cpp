#include<bits/stdc++.h>
using namespace std;

void occur(vector<int> &arr,int curr,int key){
    if(curr==arr.size()) {
        return ;
    }
    if(arr[curr]==key){
        cout<<curr<<" ";
    }
    occur(arr,curr+1,key);
}

int main(){
    vector<int> arr={3,2,4,5,6,2,7,2,2};
    
    occur(arr,0,2);

    return 0;
}