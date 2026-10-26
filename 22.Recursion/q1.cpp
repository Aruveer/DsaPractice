#include<bits/stdc++.h>
using namespace std;

int binary(vector<int> &arr,int low,int high,int target){
    if(low > high) return -1;
    int mid=low+(high-low)/2;

    if(arr[mid]==target) return mid;
    else if(arr[mid]<target) return binary(arr,mid+1,high,target);
    else return binary(arr,low,mid-1,target);

    
}

int main(){
    vector<int> arr={1,2,3,4,5,6,7,8,9,10};
    cout<<binary(arr,0,arr.size()-1,7);
    return 0;
}