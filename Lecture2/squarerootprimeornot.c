#include<stdio.h>
#include<math.h>
int main(){

    int n,i,flag=0;
    scanf("%d",&n);
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0){
            printf("Number %d is not prime\n",n);
            flag=1;
            break;

        }

    }
    if(flag==0){
        printf("Number %d is prime\n",n);
    }

    

    return 0;
}