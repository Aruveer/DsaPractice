#include<iostream>
#include<climits>
using namespace std;

void counting(int *arr,int n){

    int freq[100]={0};
    int minVal= INT_MAX;
    int maxVal= INT_MIN;

    for(int i=0;i<n;i++){
        minVal=min(arr[i],minVal);
        maxVal=max(arr[i],maxVal);
        freq[arr[i]]++;
    }
    for(int i=maxVal,j=0;i>=minVal;i--){
        while(freq[i]!=0){
            arr[j++]=i;
            freq[i]--;
        }
    }
}


int main(){
    int arr[10]={3,6,2,1,8,7,4,5,3,1};
    counting(arr,10);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}