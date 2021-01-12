#include<stdio.h>
int main(){

    int n;
    char arr[100];
    // scanf("%d",&n);
    // scanf("%s",arr);

    // to include spaces as well we use gets

    // 1 way is 
    // scanf("%d ",&n);
    // gets(arr);

    // 2 way
    // scanf("%d",&n);
    // scanf(" ");
    // gets(arr);


    // 3 way

     char ch;
     scanf("%d",&n);
    scanf("%c",&ch);
    gets(arr);








    printf("the value of n is : %d\n",n);
     printf("the value of arr is : %s\n",arr);

    
    return 0;
}