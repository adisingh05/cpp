// move 0 to end take the array {1,0,2,0,1,0} and move all the 0's to the end of the array while maintaining the order of non-zero elements. The output should be {1,2,1,0,0,0}.

#include<iostream>
using namespace std;

int main(){
    int arr[]={1,0,2,0,1,0};
    int n=sizeof(arr)/sizeof(int);

    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[count++]=arr[i];
        }
    }

    while(count<n){
        arr[count++]=0;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}