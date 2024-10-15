#include<bits/stdc++.h>
using namespace std;

string helper(string str){
    string ans;
    vector<int>ch(255,0);

    for(int i=0;i<str.size();i++){
        if(ch[str[i] - 'a'] == 0){
            ans+=str[i];
            ch[str[i] - 'a']++;
        }
    }
    return ans;
}
int main(){
    string str;
    cout<<"enter string"<<endl;
    getline(cin,str);
    string ans = helper(str);
    cout<<ans<<endl;
}