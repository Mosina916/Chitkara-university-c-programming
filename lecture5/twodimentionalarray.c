#include<stdio.h>
int main(){
    int arr[10][10];
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
    //print 2d array

    printf("\nAfter Priniting 2d array: \n");

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