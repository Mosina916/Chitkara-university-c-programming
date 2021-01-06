#include<stdio.h>
#include<math.h>
int main(){

    int n,i,count;
    scanf("%d",&n);
    // printf("1 ");
    // for (int i = 2; i <=n; i++)
    for (int i = 2; i <=sqrt(n); i++)
    {
        if(n%i==0){
            count=0;
            while (n%i==0)
            {
                count++;
                n=n/i;
                /* code */
            }
             for (int j = 0; j < count; j++)
            {
                printf("%d ",i);
                
            }
          
        }

    }
    if(n>2){
        printf("%d",n);

    }
    return 0;
}