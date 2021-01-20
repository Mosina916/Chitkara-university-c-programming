#include<stdio.h>
#define size 5
int cqueue[size];
int front=-1;
int rear=-1;
void insert(int ele){
    
    if(rear==size-1||front==rear+1){
        printf("Queue is full we can't insert the element");
        
    }
    else if(front==-1&&rear==-1){
        // printf("enter the element");
        // int element;
        // scanf("%d",&element);
        front=0;
        rear=0;
        cqueue[rear]=ele;
    }
    else if(rear==size-1){

        rear=0;
        cqueue[rear]=ele;
    }
    else{
        rear++;
        cqueue[rear]=ele;
    }
}
void delete(){
    if(front==-1&&rear==-1){
        printf("The queue is empty\n");
    }
    else if(front==rear){
        
        printf("the deleted element is %d\n",cqueue[rear]);
        front=-1;
        rear=-1;

    }
    else if(front==size-1){
        printf("the deleted element is %d\n",cqueue[front]);
        front=0;

    }
    else{
        printf("the deleted element is %d\n",cqueue[front]);
        front++;

    }

}
void traverse(){
    if(front==-1&&rear==-1){
        printf("the queue is empty\n");
    }
    if(rear>=front){
        printf("The queue elements are: ");

        for(int i=front;i<=rear;i++){
            printf("%d ",cqueue[i]);
        }
    }
    else{
        printf("The queue elements are: ");
        for(int i=front;i<size;i++){
            printf("%d ",cqueue[i]);

        }
        for(int i=0;i<=rear;i++){
            printf("%d ",cqueue[i]);

        }


    }
    printf("\n");

}
int main(){
    insert(10);
    insert(20);
    delete();
    delete();
   insert(20);
   insert(30);
   insert(40);
   insert(50);
   insert(60);
   delete();
    delete();
    traverse();

   


    return 0;

}
