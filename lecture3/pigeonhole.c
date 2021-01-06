#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
int main(){

    int n,arr[1000],sum=0, msum=INT_MIN,left,right,csum[1000];
    scanf("%d",&n);
    csum[0]=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        csum[i+1]=csum[i]+arr[i];
        csum[i+1]=csum[i+1]%n;
        
    }
    for (int i = 0; i <=n; i++)
    {
        printf("%d ",csum[i]);

        /* code */
    }
    int freq[100]={0};

    for (int i = 0; i <=n; i++)
    {
        freq[csum[i]]++;

        /* code */
    }
    
    for (int i = 0; i < n; i++)
    {
        sum+=(freq[i]*freq[i]-1)/2;
        /* code */
    }
    printf("%d",sum);
    
    
    

  
    return 0;
}