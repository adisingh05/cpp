#include<iostream>
using namespace std;

void oddEve(int num){
    if((num&1)==0){
        cout<<"even\n";
    }else{
        cout<<"odd\n";
    }
}

int main(){
    // int num;
    // cin>>num;
    // cout<<"enter num\n";

    oddEve(5);
    oddEve(8);
  

    return 0;
}