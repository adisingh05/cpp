#include<iostream>
#include<string>
using namespace std;
bool isAnagram(string s1,string s2){
    int count[26]={0};
    for(int i=0;i<s1.length();i++){
        count[s1[i]-'a']++;
    }
    for(int i=0;i<s2.length();i++){
        count[s2[i]-'a']--;
    }
    for(int i=0;i<26;i++){
        if(count[i]!=0){
            return false;
        }
    }
    return true;
}

int main(){
    string s1="listen";
    string s2="silent";
    if(isAnagram(s1,s2)){
        cout<<"anagram\n";
    } else {
        cout<<"not an anagram\n";
    }
    return 0;
}