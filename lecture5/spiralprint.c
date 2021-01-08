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

    int srow=0,erow=rows-1,scol=0,ecol=cols-1;


    while ((srow<=erow)&&(scol<=ecol))
    {

        for (int i=scol;i<=ecol;i++)
    {
        printf("%d ",arr[srow][i]);
        /* code */
    }
    srow++;
    for (int i=srow;i<=erow;i++)
    {
        printf("%d ",arr[i][ecol]);

        /* code */
    }
    ecol--;

    if(srow<=erow){
        for (int i=ecol;i>=scol;i--)
    {
        printf("%d ",arr[erow][i]);
        /* code */
    }
    erow--;

    }

    if(scol<=srow){
        for (int i=erow;i>=srow;i--)
    {
        printf("%d ",arr[i][scol]);
        /* code */
    }
    scol++;

    }
    

   
        
    }
     printf("\n");
    

    
    
    
    
    

    return 0;
}