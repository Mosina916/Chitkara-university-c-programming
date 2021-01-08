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

    scanf("%d",&key);



    int k=cols-1,l=0;

    while(k>=0&&l<=rows-1){
        if(key>arr[l][k]){
        l++;

    }
    else if(arr[l][k]==key){
        printf("key is present at index %d %d\n",l,k);
        return 0;
    }
    else{
        k--;
    }

    }
    printf("key is not present\n");
    

    return 0;
}