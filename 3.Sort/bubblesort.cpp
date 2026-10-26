#include<iostream>
using namespace std;

void bubble(int *arr,int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]<arr[j+1]){                //DESCENDING
                swap(arr[j],arr[j+1]);
            }
        }
    }
}


int main(){
    int arr[10]={3,6,2,1,8,7,4,5,3,1};
    bubble(arr,10);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}