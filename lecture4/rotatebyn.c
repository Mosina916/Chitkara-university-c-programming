#include<stdio.h>
#include<string.h>

int main(){
    int n;
    char ch[100];
    scanf("%d ",&n);
    
    // scanf("%s",ch);
    gets(ch);

    int x=strlen(ch);
    ch[x+n]='\0';
    for (int i = strlen(ch)-1; i>=0; i--)
    {
        ch[i+n]=ch[i];
        /* code */
    }
    int j=0;
    for (int i = x; i < strlen(ch); i++)
    {
        ch[j]=ch[i];
        j++;

        /* code */
    }
    ch[x]='\0';



    printf("%s\n",ch);

    

    return 0;
}