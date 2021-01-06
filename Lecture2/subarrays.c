#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
int main(){

    int n,arr[1000],sum, msum=INT_MIN,left,right;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i <= n-1; i++)
    {
        for (int j = i; j <=n-1; j++)
        {

            sum=0;
            for (int k = i; k <=j;k++)
            {
                // printf("%d ",arr[k]);

                sum=sum+arr[k];

            
               
            }
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