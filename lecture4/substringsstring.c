#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
#include<string.h>
int main(){

    int n,count=0;
    char arr[100];
    scanf("%s",arr);
    n=strlen(arr);

    for (int i = 0; i <= n-1; i++)
    {
        for (int j = i; j <=n-1; j++)
        {

            
            // for (int k = i; k <=j;k++)
            // {
            //     // printf("%c",arr[k]);
               
            // }
            count++;


            // printf("\n");
            
            
        }
        
        
    }
    printf("%d",count);
  
    return 0;
}