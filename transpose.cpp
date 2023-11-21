//transpose of matrix
#include<iostream>
using namespace std;
const int MAX=100;
void display(int ar[MAX][MAX],int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<ar[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int r,c;
    int mat[MAX][MAX];
    int trans[MAX][MAX];
    cout<<"Enter the num of rows and Columns " <<endl;
    cin>>r>>c;
    cout<<"Enter the elements of Matrix ";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>mat[i][j];
            trans[j][i]=mat[i][j];\
        }
    }
    cout<<"Original Matrix "<<endl;
    display(mat,r,c);
    cout<<"Transpose Matrix "<<endl;
    display(trans,c,r);
}