#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int flag=0;
    if(n%7==0){
        cout<<"YES"<<endl;
        return 0;
    }
    if(n%4==0){
        cout<<"YES"<<endl;
        return 0;
    }

    while(n>=1){
        int a = n%10;
        if(a==7 || a==4){
            flag=1;
        }
        else{
            flag=0;
            break;
        }

        if(flag==0){
            break;
        }
        n = n/10; 
    }

    if(flag==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}