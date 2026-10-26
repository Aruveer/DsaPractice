#include<iostream>
using namespace std;

int main(){
    int arr[2][3]={{4,7,8},{8,8,7}};
    int temp[2][3]={{0}};

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            temp[j][i]=arr[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cout<<temp[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}