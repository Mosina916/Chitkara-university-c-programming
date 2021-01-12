#include<stdio.h>
#include<stdbool.h>
#include<string.h>

void bubblesort(int *arr,int n,int i){
	if(i==n-1){
		return;
	}

	for (int j = 0; j <=n-2-i; j++)
        {

            if(arr[j]>arr[j+1]){
               int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
            /* code */
        }

        bubblesort(arr,n,i+1);


}

int main(){


	int n,arr[100];
	scanf("%d",&n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&arr[i]);

		/* code */
	}


	bubblesort(arr,n,0);

	for (int i = 0; i < n; ++i)
	{
		printf("%d ",arr[i]);

		/* code */
	}

	printf("\n");







	return 0;
}