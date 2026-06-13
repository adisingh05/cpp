#include<iostream>
using namespace std;
// linear search
int linearSearch(int arr[], int n, int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;

}
int main(){
        int arr[]={2,3,8,1,6,7};
        int target = 8;
        int n = sizeof(arr)/sizeof(arr[0]);
        int result = linearSearch(arr,n,target);
        if(result==-1){
            cout<<"Element not found in the array"<<endl;
        }
        else{
            cout<<"Element found at index: "<<result<<endl;
        }
        return 0;
    }