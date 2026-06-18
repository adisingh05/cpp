#include <iostream>
using namespace std;

void reverse(int *arr,int n){
    int temp[n];
    // for(int i=0;i<n;i++){
    //     temp[i]=arr[i];
    // }
    for(int i=0;i<n;i++){
        temp[i]=arr[i];
        cout<<temp[i]<<",";
    }
    cout << endl;
}


//using extrabspace
void printArr(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
}

int main(){
    int arr[]={2,4,6,8,10,12,14,1};
    int n=sizeof(arr)/sizeof(int);

    int st=0,end=n-1;

    while(st<end){
        swap(arr[st],arr[end]);
        st++;
        end--;
    }

    // printArr(arr,n);
    reverse(arr,n);

    return 0;
}
