#include<stdio.h>
#include<string.h>

int main(){
    char a[100],b[100];
    scanf("%s",a); //hello ->5
    scanf("%s",b); //world ->5
    int x=strlen(a); //5
    int y=strlen(b); //5
   if(x!=y){
       printf("the strings are not permutations of each other");
       return 0;
   }

   int freq[26]={0};
   for (int i = 0; i <x; i++)
   {
       int index=a[i]-'a';
       freq[index]++;

       /* code */
   }
    for (int i = 0; i <y; i++)
   {
       int index=b[i]-'a';
       freq[index]--;

       /* code */
   }
   int i;
   for (i = 0; i <26; i++)
   {
       if(freq[i]!=0){
           printf("the strings are not permutations of each other");
           return 0;
       }
       /* code */
   }
 
        printf("the strings are permutations of each other");


  

   

   



    

    return 0;
}