#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
int main(){

    int cs=0,ms=0,n,arr[1000];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i <=n-1; i++)
    {
        cs=cs+arr[i];
        if(cs<0){
            cs=0;
        }

        ms=fmax(ms,cs);
        /* code */
    }

    printf(" maximum sum is : %d",ms);
    printf("\n current sum is: %d\n",cs);
    
  
    return 0;
}