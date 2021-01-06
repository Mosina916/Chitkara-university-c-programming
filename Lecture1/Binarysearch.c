#include<stdio.h> //hederfile
int main(){ //starting


    int arr[100],n,s,e,mid,key;
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {

        scanf("%d",&arr[i]);

        /* code */
    }

    scanf("%d",&key);

    s=0;
    e=n-1;


     while(s<=e){
          mid=(s+e)/2;
   
    if(arr[mid]==key){
        printf("key is present at index %d",mid);

        // break;
        return 0;

        // bahar tou nikalna hai 
        
    }
    else if (arr[mid]>key)
    {
        e=mid-1;
        
    }
    else{
        s=mid+1;
    }
        
    }


    if(s>e){
        printf("key is not present at any index");

    }
   





    




    return 0; //end
}