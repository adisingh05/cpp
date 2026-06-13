#include<iostream>
using namespace std;

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
}

void merge(int arr[],int l,int m,int r){
    int i=l,j=m+1,k=l;
    int temp[r-l+1];
    while(i<=m && j<=r){
        if(arr[i]<arr[j]){
            temp[k-l]=arr[i];
            i++;
        }
        else{
            temp[k-l]=arr[j];
            j++;
        }
        k++;
    }
    while(i<=m){
        temp[k-l]=arr[i];
        i++;
        k++;
    }
    while(j<=r){
        temp[k-l]=arr[j];
        j++;
        k++;
    }
    for(int p=l;p<=r;p++){
        arr[p]=temp[p-l];
    }
}


int main(){
    int arr[5]={5,4,1,3,2};
    int n=5;
    int l=0,r=n-1,m=(l+r)/2;
    merge(arr,l,m,r);
    print(arr,n);
    return 0;
}