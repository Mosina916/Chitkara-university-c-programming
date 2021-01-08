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

    printf("\nAfter Priniting wave form: \n");

    for (int i = 0; i < cols; i++)
    {
        if(i%2==0){
            for (int j = 0; j <rows; j++)
            {
                printf("%d ",arr[j][i]);
                /* code */
            }
            

        }
        else{
            for (int j = rows-1;  j>=0; j--)
            {
                printf("%d ",arr[j][i]);

                /* code */
            }
            
        }
        /* code */
    }
    
    

    
    


    return 0;
}