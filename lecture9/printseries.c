#include<stdio.h>
int main(){

    int n1,n2,n=1;
    scanf("%d",&n1);
    scanf("%d",&n2);
    while(n1>0){
        int x=3*n+2;
        if(x%n2==0){
            n++;
        }
        else{
            printf("%d\n",x);
            n++;
            n1--;

        }


    }



    return 0;
}