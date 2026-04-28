#include<iostream>
using namespace std;


int diagonalSum(int mat[][3], int n,int m, int key){
   

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]==key){
               cout<<i<<","<<j<<" ";
            }

        }


      
    }
    cout<< endl;
    return -1;
  
}

int main(){
    int matrix[3][3]={  {1,2,3},
                        {4,5,6},
                        {7,8,9}};


   
    diagonalSum(matrix,3,3,5);                    
    // cout<<diagonalSum(matrix,3,3,7)<<endl;
    

return 0;
}