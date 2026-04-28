#include<iostream>
using namespace std;

// O(n2)
void diagonalSum(int mat[][3], int n){
    int sum =0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum+=mat[i][j];
            }else if(j==n-i-1){
                sum+=mat[i][j];
            }
        }
    }
    cout<<"sum="<<sum<<endl;
    //return sum;
}
// O(n)
void diagonalSum1(int mat[][3], int n){
    int sum =0;

    for(int i=0;i<n;i++){
        sum+=mat[i][i];
        if(i!=n-i-1){
            sum+=mat[i][i];
        }
    }
    cout<<"sum="<<sum<<endl;
    //return sum;
}

int main(){
    int matrix[3][3]={  {1,2,3},
                        {4,5,6},
                        {7,8,9}};


   

    diagonalSum(matrix,3);
    diagonalSum1(matrix,3);

return 0;
}