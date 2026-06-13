#include<iostream>
#include<string>
using namespace std;
// input Gurkirat Singh Shetty
// output G.S Shetty

int main(){
    string str ="Gurkirat Singh Shetty";
    string ans="";
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            ans+=str[i+1];
            ans+='.';
        }
        else if(i==0){
            ans+=str[i];
            ans+='.';
        }
    }
    ans+=str.substr(str.find_last_of(' ')+1);
    cout<<ans<<endl;
    
    return 0;
}





// int main(){
//     string str ="Gurkirat Singh shetty";

//     // for(int i=0;i<str.length();i++){
//     //     cout<<str[i]<<"-";
//     // }
//     for(char ch:str){
//         cout<<ch<<",";
//     }
//     cout<<"\n";

//     cout<<str.at(0)<<endl;
//     cout<<str.substr(1,4)<<endl;
//     // cout<<str.find("ram");
 
//     return 0;
// }