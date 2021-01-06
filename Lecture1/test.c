#include<stdio.h> //hederfile
#include<math.h>


int main(){ //starting


    // int arr[100],n,s,e,mid,key,sum,msum=0,left,right;
    // scanf("%d",&n);

    // for (int i = 0; i < n; i++)
    // {

    //     scanf("%d",&arr[i]);

    //     /* code */
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i; j < n; j++)
    //     {
    //        sum=0;

    //         for (int k = i; k <=j; k++)
    //         {
    //             sum+=arr[k];

    //             // printf("%d ",arr[k]);
                
    //         }
    //         // printf("%d ",sum);

    //         if(sum>msum){
    //             left=i;
    //             right=j;
    //             msum=sum;
    //         }


           
          
    //     }
        

        
        
    // }
    // for (int k = left; k<=right; k++)
    // {
    //     printf("%d ",arr[k]);
    //     /* code */
    // }

    
    //  printf("\n%d\n",msum);




    // int arr[100],n,s,e,mid,key,sum,msum=0,left,right,csum[100]={0};
    // scanf("%d",&n);
    // scanf("%d",&arr[0]);
    // csum[0]=arr[0];



    // for (int i = 1; i < n; i++)
    // {

    //     scanf("%d",&arr[i]);
    //     csum[i]=csum[i-1]+arr[i];

    //     /* code */
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i; j < n; j++)
    //     {
    //     //    sum=0;

    //        sum=csum[j]-csum[i-1];
    //         // printf("%d ",sum);

    //         if(sum>msum){
    //             left=i;
    //             right=j;
    //             msum=sum;
    //         }
     
    //     }
 
        
    // }
    // for (int k = left; k<=right; k++)
    // {
    //     printf("%d ",arr[k]);
    //     /* code */
    // }

    
    //  printf("\n%d\n",msum);



    // int arr[100],n,cs=0,msum=0;
    // scanf("%d",&n);
    
    // for (int i = 0; i < n; i++)
    // {

    //     scanf("%d",&arr[i]);
    // }

    // for (int i = 0; i <n; i++)
    // {
    //     cs=cs+arr[i];
    //     if(cs<0){
    //         cs=0;
    //     }
    //     msum=fmax(cs,msum);
    //     /* code */
    // }
    // printf("%d",msum);
    


    // int arr[1000],n,csum[1000]={0};
    // scanf("%d",&n);


    // for (int i = 0; i < n; i++)
    // {

    //     scanf("%d",&arr[i]);
    //     csum[i+1]=csum[i]+arr[i];
    //     csum[i+1]=csum[i+1]%n;
    // }
    //  for (int i = 0; i < n+1; i++)
    // {

    //     printf("%d ",csum[i]);
        
    // }
    //  printf("\n");

    // int freq[100]={0};
    // for (int i = 0; i < n+1; i++)
    // {

    //     freq[csum[i]]++;
        
    // }
    // int sum=0;
    //   for (int i = 0; i < n; i++)
    // {

    //     // printf("\n%d ",freq[i]);

    //     sum+=(freq[i]*(freq[i]-1))/2;
        
    // }

    //  printf("\n%d ",sum);


    int arr[1000],n,csum[1000]={0};
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    



    return 0; //end
}