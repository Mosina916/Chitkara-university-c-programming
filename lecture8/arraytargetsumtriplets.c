#include<stdio.h>
int main(){
	int n,arr[100],target;
	scanf("%d",&n);
	for (int i = 0; i < n; ++i)
	{

		scanf("%d",&arr[i]);

		/* code */
	}


	scanf("%d",&target);

	//bubble sort


	 for (int i = 0; i <=n-2; i++)
    {

        for (int j = 0; j <=n-2-i; j++)
        {

            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
            /* code */
        }
        
        /* code */
    }



    for(int i=0;i<=n-3;i++){
        for(int j=i+1;j<=n-2;j++){
            for(int k=j+1;k<=n-1;k++){
                if(arr[i]+arr[j]+arr[k]==target){
                	printf("%d, %d and %d\n",arr[i],arr[j],arr[k]);
                    
                }
            }
        }
    }





	return 0;
}