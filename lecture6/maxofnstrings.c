#include<stdio.h>
#include<string.h>
int main(){

    int n,maxl=0;
    char arr[100],result[100];

    scanf("%d",&n);
    for (int i = 0; i <n; i++)
    {
        scanf("%s",arr);
        int x=strlen(arr);
        if(x>maxl){
            maxl=x;
            strcpy(result,arr);

        }
        /* code */
    }

    printf("the maximum length syting has length : %d\n",maxl);
     printf("the value of string  is : %s\n",result);

    
    return 0;
}