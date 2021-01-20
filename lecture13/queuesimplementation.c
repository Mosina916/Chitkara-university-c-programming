#include<stdio.h>
#define CAPACITY 5
int queue[CAPACITY];
// #define x printf 
int front=0;
int rear=0;
//inserting the element in queue
void insert(){
    if(rear==CAPACITY){
        printf("Queue is full we can't insert the element\n");

    }
    else{
        int ele;
        printf("Enter the valur of element we need to insert\n");
        scanf("%d",&ele);
        queue[rear]=ele;
        rear++;
    }

}
// queue deletion
void delete(){
    if(front==rear){
        printf("The queue is empty\n");
    }
    else{
        int ele=queue[front];
        printf("The element deleted is %d\n",ele);
        for(int i=1;i<rear;i++){
            queue[i-1]=queue[i];
        }
        rear--;

    }
}
//queue traversal
void traverse(){
    if(front==rear){
        printf("The array is empty\n");
    }
    else{
        printf("The array elements are: ");
        for(int i=0;i<rear;i++){
            printf("%d ",queue[i]);
        }
    }
    printf("\n");

}
int main(){

     int op,x;

    while(1){
        printf("1. insert\n");
        printf("2. delete\n");
        printf("3. traverse\n");
        printf("4. exit\n");

        printf("enter the operation you want to perfoem\n");
        scanf("%d",&op);
        switch(op){

            case 1: insert();
                    break;
            case 2: delete();
                    break;
            case 3: traverse();
                    break;
            case 4: return 0;
            default: printf("the value you entered is wrong\n\n");



        }



    }

    return 0;
}




