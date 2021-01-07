#include<stdio.h>
#include<string.h>

int main(){
    char a[100],b[100];
    scanf("%s",a); //hello ->5
    scanf("%s",b); //world ->5
    int x=strlen(a); //5
    int y=strlen(b); //5
    for (int i = 0; i <y; i++)
    {
        a[x]=b[i];
        x++;
        /* code */
    }
    a[x]='\0';
    printf("%s",a);
    



    

    return 0;
}