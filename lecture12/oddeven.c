#include<stdio.h>
void decodd(int n){
    if(n<=1){
        if(n<1){
           
            return;
        }
       printf("%d\n",n);
       return;
    }
    if(n%2==0){
        printf("%d\n",n-1);
        decodd(n-2);
    }
    else{
        printf("%d\n",n);
        decodd(n-2);
    }

}

void inceven(int n){
    if(n<=2){
        if(n<2){
            return;
           
        }
         printf("%d\n",n);
         return;
    }
    if(n%2==0){
        inceven(n-2);
        printf("%d\n",n);
    }
    else{
        inceven(n-2);
        printf("%d\n",n-1);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    decodd(n);
    // printf("hello\n");
    inceven(n);
    return 0;
}