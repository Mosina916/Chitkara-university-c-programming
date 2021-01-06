#include<stdio.h> //hederfile
int main(){ //starting


    int arr[100],n,temp,min,i,j;
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


    // selectionsort algo


    for (i = 0; i <=n-2; i++)
    {

        min=i;

        for (j = i+1; j <=n-1; j++)
        {
            if(arr[j]<arr[min]){
                min=j;
            }
            /* code */
        }

            temp=arr[min];
            arr[min]=arr[i];
            arr[i]=temp;


        
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