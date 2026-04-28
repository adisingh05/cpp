#include<iostream>
using namespace std;


void function(int mat[][4],int n,int m){
    cout<<"value of 1st row :"<<*(*(mat)+1)<<" ";
}



int main(){
    int matrix[4][4]={{10,20,30,40},
                      {15,25,35,45},
                      {27,29,37,48},
                      {32,33,39,50}};

    function(matrix,4,4);

    return 0;                  
}