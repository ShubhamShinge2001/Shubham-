#include<bits/stdc++.h>
using namespace std;
bool helper(string str1, string str2){
    vector<char>ch(256,0);

    for(int i=0;i<str1.size();i++){
        ch[str1[i] - 'a']++;
    }

    for(int i=0;i<str2.size();i++){
        ch[str2[i] - 'a']--;
    }

    for(int i=0;i<ch.size();i++){
        if(ch[i] != 0){
            return false;
        }
    }
    return true;
}

int main(){
    string str1;
    cout<<"enter string 1"<<endl;
    getline(cin,str1);

        string str2;
    cout<<"enter string 2"<<endl;
    getline(cin,str2);
    bool ans = helper(str1,str2);
    if(ans){
        cout<<"1"<<endl;
    }
    else{
        cout<<"0"<<endl;
    }
}