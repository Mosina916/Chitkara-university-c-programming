#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,*arr;
    printf("enter size:");
    scanf("%d",&n);
    arr=(int*)calloc(n,sizeof(int));
    if(arr==NULL){
           printf("out of memory error\n");
       }
       else{
           for (int i = 0; i <n; i++)
           {
               scanf("%d",&arr[i]);
               /* code */
           }
           for (int i = 0; i <n; i++)
           {
               printf("%d ",arr[i]);
               /* code */
           }

           
       }

       printf("\n");


       return 0;




}