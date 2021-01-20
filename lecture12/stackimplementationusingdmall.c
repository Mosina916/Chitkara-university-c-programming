#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*link; //self refrential class
};
struct node* top=NULL;
void push(){
    struct node*temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("enter the value to be pushed in stack\n");
    scanf("%d",&temp->data);
    temp->link=top;
    top=temp;

}
// bool isempty(){
//     if(top==NULL){
//         return true;
//     }
//     else{
//         return false;
//     }
// }
void pop(){
    struct node* temp;
    if(top==NULL){
        printf("the stack is empty\n");
    }
    else{
        temp=top;
        printf("the data popped is : %d\n",temp->data);
        top=temp->link;
        temp->link=NULL;
        free(temp);

    }
}
void traverse(){
    struct node *temp;
    if(top==NULL){
        printf("the stack is empty \n");
    }
    else{
        temp=top;
        printf("the stack elements are: ");
        while(temp!=NULL){
            printf("%d ",temp->data);
            temp=temp->link;

        }
        printf("\n");

    }
}


int main(){
      int op,x;

    while(1){
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Traverse\n");
        printf("4. exit\n");

        printf("enter the operation you want to perfoem\n");
        scanf("%d",&op);
        switch(op){

            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: traverse();
                    break;
            case 4: return 0;
            default: printf("the value you entered is wrong\n\n");

        }
    }

    return 0;
}
