#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>vec1 = {1,2,3,4,5};
    for(int i=0;i<vec1.size();i++){
        cout<<vec1[i]<<" ";
    }
    cout<<endl;
    cout<<vec1.size();
    return 0;
}