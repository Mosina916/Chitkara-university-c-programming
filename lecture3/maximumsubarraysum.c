#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
int main(){

    int n,arr[1000],sum, msum=INT_MIN,left,right,csum[1000];
    scanf("%d",&n);
    scanf("%d",&arr[0]);
    csum[0]=arr[0];
    for(int i=1;i<n;i++){
        scanf("%d",&arr[i]);
        csum[i]=csum[i-1]+arr[i];
    }


    for (int i = 0; i <= n-1; i++)
    {
        for (int j = i; j <=n-1; j++)
        {

            sum=csum[j]-csum[i-1];
            if(msum<sum){
                left=i;
                right=j;

                msum=sum;
            }


            // printf("\n");
            
            
        }
        
        
    }

    for (int i = left; i <=right; i++)
    {
        printf("%d ",arr[i]);
        /* code */
    }
    

    printf("\nmaximum sum is %d",msum);
  
    return 0;
}