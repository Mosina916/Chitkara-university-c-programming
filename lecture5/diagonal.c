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
    

    printf("\nThe Principal diagonal elements are: \n");

    for (int i = 0; i < rows; i++)
    {
       
            for (int j = 0; j <cols; j++)
            {
                if(i==j){
                    printf("%d ",arr[i][j]);

                }
                
                
            }
     
    }
    printf("\n");

    printf("\nThe Secondary diagonal elements are: \n");

    for (int i = 0; i < rows; i++)
    {
       
            for (int j = 0; j <cols; j++)
            {
                if(i+j==rows-1){
                    printf("%d ",arr[i][j]);

                }
                
                
            }
     
    }
    printf("\n");
    
    

    
    


    return 0;
}