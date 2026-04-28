#include<iostream>
#include<string>
using namespace std;

int main(){
    // string str="hello";
    // cout<<str<<endl;
    // str="yellow";
    string str;
    getline(cin,str,'$');
    cout<<str<<endl;
    return 0;

}