#include<stdio.h>
int main(){

    int n,arr[100000],sum=0,xorr=0;
    scanf("%d",&n);
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&arr[i]);
 
    }
    for (int i = 0; i <=n-1; i++)
    {
        for (int j = 0; j <=n-1; j++)
        {
            sum=arr[i]+arr[j];
            xorr=xorr^sum;

            /* code */
        }
        
        /* code */
    }
    printf("xor is : %d\n",xorr);

    

    
    return 0;
}