#include<stdio.h> //hederfile
int main(){ //starting


    int arr[100],n,temp;
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {

        scanf("%d",&arr[i]);

        /* code */
    }


    printf("Before sorting: ");


     for (int i = 0; i <n; i++) //loop 
    {
        printf("%d ",arr[i]);
        /* code */
    }


    // bubblesort algo

    for (int i = 0; i <=n-2; i++)
    {

        for (int j = 0; j <=n-2-i; j++)
        {

            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
            /* code */
        }
        
        /* code */
    }
    





      printf("\nAfter sorting: ");


     for (int i = 0; i <n; i++) //loop 
    {
        printf("%d ",arr[i]);
        /* code */
    }

    
    





    



    return 0; //end
}