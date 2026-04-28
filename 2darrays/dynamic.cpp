#include<iostream>
using namespace std;

int main(){
    int row,cols;
    cout<<"enter rows :";
    cin>>row;
    cout<<"enter columns:";
    cin>>cols;

    int* *matrix = new int*[row];

    for (int i = 0; i < row; i++)
    {
        matrix[i]=new int[cols];
    }

    int x=1;
    for(int i =0;i<row;i++){
        for(int j=0;j<cols;j++){
            matrix[i][j]=x++;
            cout<<matrix[i][j]<<" ";

        }
        cout<<endl;
        cout<<matrix[2][3];
    }
    



}