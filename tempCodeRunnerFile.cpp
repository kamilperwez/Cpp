//transpose of matrix
#include<iostream>
using namespace std;
void display(int ar[][],int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<ar[i][j]<<" ";
        }
    }
}