#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
    int n,sumd=0,count;
    scanf("%d",&n);
    int temp=n;
    while (temp>0)
    {
        int rem=temp%10;
        sumd+=rem;
        temp=temp/10;
        /* code */
    }



    //prime factors
    int sum2=0;
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
                // printf("%d ",i);
                sum2+=i;
                
            }
          
        }

    }
    if(n>=2){
        sum2+=n;
        // printf("%d",n);

    }


    if(sum2==sumd){
        printf("It is a boston number\n");

    }
    else{
        printf("It is not a boston number\n");

    }

    return 0;
}