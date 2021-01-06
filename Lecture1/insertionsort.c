#include<stdio.h> //hederfile
int main(){ //starting


    int arr[100],n,temp,min,no,j;
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


    for (int i = 1; i <=n-1; i++)
    {

        no=arr[i];

        for (j= i-1; j>=0&&arr[j]>no; j--)
        {

            arr[j+1]=arr[j];
          
        }
        arr[j+1]=no;
    }
    
    

   
    





      printf("\nAfter sorting: ");


     for (int i = 0; i <n; i++) //loop 
    {
        printf("%d ",arr[i]);
        /* code */
    }

    
    





    



    return 0; //end
}