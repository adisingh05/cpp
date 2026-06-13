#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

bool isPalindrome(char word[],int n){
    int st=0,end=n-1;
    while(st<end){
        if(word[st++]!=word[end--]){
            cout<<"is not a valid pal\n";
            return false;
        }
    }

    cout<<"valid palindrome\n";
    return true;
}

//  longest common prefix 

string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0){
            return "";
        }
        string prefix=strs[0];
        for(int i=1;i<strs.size();i++){
            while(strs[i].find(prefix)!=0){
                prefix=prefix.substr(0,prefix.length()-1);
                if(prefix==""){
                    return "";
                }
            }
        }
        return prefix;
    }


int main(){
    char word[]="rar";

    isPalindrome(word,strlen(word));
    // cout<<"palindrome:"<<word<<endl;

    return 0;
}