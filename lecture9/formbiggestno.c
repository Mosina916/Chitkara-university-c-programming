#include<stdio.h>
#include<math.h>

int countdigits(int n){
    int count=0;
    while (n>0)
    {
        count++;
        n=n/10;
        /* code */
    }

    return count;
    
}
int main(){
    int t,n,arr[200]={0};
    scanf("%d",&t);
    while(t--){

        scanf("%d",&n);

        for (int i = 0; i <n; i++)
        {
            scanf("%d",&arr[i]);
            /* code */
        }

        for (int i = 0; i <=n-2; i++)
        {

        for (int j = 0; j <=n-2-i; j++)
        {

            int fn=arr[j];
            int sn=arr[j+1];

            int fd=countdigits(fn);
            int sd=countdigits(sn);

            long long int no1=fn*pow(10,sd)+sn;
            long long int no2=sn*pow(10,fd)+fn;

            if(no1>no2){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
            /* code */
        }
        
        /* code */
    }

    for(int i=n-1;i>=0;i--){
        printf("%d",arr[i]);
    }

    printf("\n");
        




    }
    return 0;
}