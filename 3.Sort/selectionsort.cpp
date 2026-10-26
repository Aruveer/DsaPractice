#include<iostream>
using namespace std;

void selection(int *arr,int n){
    for(int i=0;i<n-1;i++){
        int minVal=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[minVal]){
                minVal=j;
            }
        }
        swap(arr[i],arr[minVal]);
    }
}


int main(){
    int arr[10]={3,6,2,1,8,7,4,5,3,1};
    selection(arr,10);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}