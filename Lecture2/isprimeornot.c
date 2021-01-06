#include<stdio.h>
int main(){

    int n,i;
    scanf("%d",&n);
    for(i=2;i<=n-1;i++){
        if(n%i==0){
            printf("Number %d is not prime\n",n);
            break;

        }

    }
    if(n==i){
        printf("Number %d is prime\n",n);
    }

    

    return 0;
}