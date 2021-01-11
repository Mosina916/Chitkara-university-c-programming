#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int main(){

    int arr[20][20];
    int n; //rows and cols

    scanf("%d",&n);

    // input 2D array
    for (int i = 0; i <n; i++)
    {

        for (int j = 0; j <n; j++)
        {

            scanf("%d",&arr[i][j]);
            /* code */
        }
        
        /* code */
    }

    int maxval=INT_MIN;

    for (int a = 0; a <=n-2; a++)
    {

          for (int  b = 0; b <=n-2; b++)
    {
         for(int d=a+1;d<=n-1;d++){
         for(int e=b+1;e<=n-1;e++){
        if(maxval<arr[d][e]-arr[a][b]){
            maxval=arr[d][e]-arr[a][b];
        }
    }

    }
     
    }
       
    }


    printf("max value of pair is : %d\n",maxval);
    


    return 0;
}