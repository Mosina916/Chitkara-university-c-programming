#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<string.h>
int main(){

    char arr[100],result[100];
    gets(arr);
    int i=0;
    int ls=strlen(arr);
    for (int i = 0; i <ls; i++)
    {
        result[i]=' ';
        /* code */
    }
    result[i]='\0';
    
    while (i<ls)
    {
        while(i<ls&&arr[i]==' '){
            i++;
            if(i==ls){
                break;
            }
           
        }
        int j=i+1;
        while(j<ls&&arr[j]!=' '){

            j++;

        }

        int x=i;


        for (int k = j-1; k >=i; k--)
        {
            result[x]=arr[k];
            x++;
           
        }

        i=j+1;



        





        /* code */
    }

    for(int i=0;i<ls;i++){
        printf("%c",result[i]);
    }
    printf("\n");
    



    return 0;
}