#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    cin>>s;
    cin>>t;

    string ans = t;
    reverse(ans.begin(),ans.end());

    if(ans==s){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}