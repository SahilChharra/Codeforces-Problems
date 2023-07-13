#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int c=0,a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        cin>>b[i];
    }

    for(int i=0;i<n;i++){
        for (int j = 0; j < n; j++)
        {
            if(a[i]==b[j]){
                c+=1;
            }
        }
    }

    cout<<c<<endl;
    
}