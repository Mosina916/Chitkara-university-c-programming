#include<stdio.h>
#include<stdlib.h>

int main(){
    int arr[10][10],key;
    int rows,cols;
    scanf("%d",&rows);
    scanf("%d",&cols);

    //taking input in 2d array
    for (int i = 0; i <rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d",&arr[i][j]);

            
        }
    }
    int temp;

    for (int i = 0; i <rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {

            if(i<j){
                // if(i>j){
                 temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
           

            }


           

            
        }
    }
    printf("\nAfter swapping array is:\n");

    for (int i = 0; i <rows; i++)
    {



        for (int j = 0; j < cols; j++)
        {
            printf("%d ",arr[i][j]);

            
        }
        printf("\n");
    }



    

    return 0;
}