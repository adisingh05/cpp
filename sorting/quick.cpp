#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int>& arr, int st, int end){
    int pivot=arr[st];
    int i = st, j = end;
    while(i<j){
        while(arr[i]<=pivot && i<end){
            i++;
        }

        while(arr[j]>pivot && j>=st){
            j--;
        }

        if (i<j){
            swap(arr[i], arr[j]);
        }

    }

        
    swap(arr[st], arr[j]);
    return j;

}

void qs(vector<int>& arr, int st, int end){
    if(st<end){
        int pidx=partition(arr, st, end);
        qs(arr, st, pidx-1);
        qs(arr, pidx+1, end);
    }
}
vector<int> quickSort(vector<int> arr, int st, int end){
    qs(arr, st, end);
    return arr;
}

int main(){
    vector<int>vec = {5,4,1,3,2};
    vec = quickSort(vec, 0, vec.size()-1);
    for(int i=0; i<vec.size(); i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}