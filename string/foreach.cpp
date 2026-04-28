#include<iostream>
#include<string>
using namespace std;

int main(){
    string str ="my name is ram !";

    // for(int i=0;i<str.length();i++){
    //     cout<<str[i]<<"-";
    // }
    for(char ch:str){
        cout<<ch<<",";
    }
    cout<<"\n";

    cout<<str.at(3)<<endl;
    cout<<str.substr(1,4)<<endl;
    cout<<str.find("ram");
 
    return 0;
}