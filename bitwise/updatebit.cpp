#include<iostream>
using namespace std;

void updateIthBit(int num, int i, int val ){
    num = num&~(1<<i);

    num = num|(val<<i);

    cout<<num<<endl;
}

void clearBits(int num, int i){
    int bitMask = (~0)<<i;
    num = num & bitMask;

    cout<<num<<endl;
}



int main(){
    // updateIthBit(7,3,1);
    clearBits(15,2);
    return 0;
}