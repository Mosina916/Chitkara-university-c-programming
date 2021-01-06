#include<stdio.h>
#include<math.h>
int main(){

    int n,arr[100000],sum=0,xorr=0;
    scanf("%d",&n);
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&arr[i]);
 
    }
    // for (int i = 0; i <=pow(2,n)-1; i++)
    for (int i = 0; i <=(1<<n)-1; i++)
    {
        int j=0,x=i;
        while(x>0){
            if((x&1)==1){
                printf("%d ",arr[j]);

            }
            j++;
            x=x>>1;

        }



        printf("\n");

        /* code */
    }
    
   

    

    
    return 0;
}