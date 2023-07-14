#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int g=0;
    string t1,t2;
    while (n--)
    {
        /* code */
        if(g!=0)
        {
            cin>>t1;
            if(t1==t2){
                g+=1;
            }
            else{
                g-=1;
            }
        }
        else{
            cin>>t2;
            g=1;
        }
    }
    cout<<t2<<endl;
    return 0;
}