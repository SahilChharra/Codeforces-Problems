#include<stdio.h>
#include<string.h>

int main()
{
    char a[100],b[100];
    gets(a);
    gets(b);

    int res;

    res = stricmp(a,b);

    if(res>0){
        printf("1\n");
    }
    else if(res<0){
        printf("-1\n");
    }
    else{
        printf("0\n");
    }
    
    return (0);
}