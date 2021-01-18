#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* link;

};
struct node* root=NULL;
void insertatfront(){
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("enter the data to be inserted at front:\n");
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(root==NULL){
        root=temp;
        temp->link=root;
    }
    else{
        struct node* p;
        p=root;
        while(p->link!=root){
            p=p->link;
        }
        temp->link=root;
        p->link=temp;
        root=temp;
    }

}

void print(){
    struct node * temp;
    temp=root;
    while(temp->link!=root){
        printf("%d -> ",temp->data);
        temp=temp->link;
    }
    printf("%d",temp->data);
    printf("\n");


}

int main(){

    insertatfront();
    insertatfront();
    insertatfront();
    insertatfront();
    insertatfront();
    insertatfront();

    printf("the circular linked list formed is");


    print();


    return 0;
}