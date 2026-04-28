#include<iostream>
#include<vector>
using namespace std;

int firstOccur(vector<int> arr,int i, int target){

    if(i==arr.size()){
        return -1;
    }
    
    if(arr[i] == target){
        return i;
    }
    
    return firstOccur(arr, i+1, target);
}

int lastOccur(vector<int> arr,int target, int i){
    if(i==arr.size()){
        return -1;
    }

    int idxFound = lastOccur(arr,target, i+1);

    if(idxFound == -1 && arr[i] == target){
            return i;
    }
    return idxFound;
}

int main(){
    vector<int> arr = {1, 2, 3, 3, 5, 3, 4};
    // cout<<firstOccur(arr,0,3);
    cout<<lastOccur(arr,3,0);
    return 0;
}