#include<iostream>
using namespace std;

void insertion(int *arr,int n){
    for(int i=1;i<n;i++){
        int curr = arr[i];
        int prev = i-1;
        while(prev>=0 && arr[prev]<curr){
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
        arr[prev+1]=curr;

    }
}


int main(){
    int arr[10]={3,6,2,1,8,7,4,5,3,1};
    insertion(arr,10);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}