#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* left;
    struct node* right;

};
struct node* root=NULL;

// append in double linked list
void append(){
    struct node*temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("enter the data to be appended at end\n");
    scanf("%d",&temp->data);
    temp->left=NULL;
    temp->right=NULL;
    if(root==NULL){
        root=temp;
    }
    else{
        struct node* p;
        p=root;
        while(p->right!=NULL){
            p=p->right;

        }
        p->right=temp;
        temp->left=p;


    }


}
void insertatfront(){
    struct node*temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("enter the data to be inserted at front\n");
    scanf("%d",&temp->data);
    temp->left=NULL;
    temp->right=NULL;
    if(root==NULL){
        root=temp;
    }
    else{
        temp->right=root;
        root->left=temp;
        root=temp;
    }


}
//length of double linked list
int length(){
    struct node* temp;
    temp=root;
    int cou=0;
    while(temp!=NULL){
        cou++;
        temp=temp->right;

    }
    return cou;
}
 //delete at front of double linked list 
void deleteatfront(){
    struct node*temp;
    temp=root;
    root=root->right;
    root->left=NULL;
    temp->right=NULL;
    free(temp);
}

void deleteatend(){
    struct node* temp;
    struct node* prev=NULL;
    temp=root;
    while(temp->right!=NULL){
        prev=temp;
        temp=temp->right;

    }
    prev->right=NULL;
    // temp->left=NULL;
    free(temp);


}



//print double linked list

void print(){
    struct node* temp;
    temp=root;
    while(temp!=NULL){
        printf("%d-> ",temp->data);
        temp=temp->right;

    }
    printf("\n");

}
int main(){

    append();
    append();
    append();
    append();
    insertatfront();
    insertatfront();

    printf("the linked list formed is : \n");

    print();

     printf("the length of linked list formed is : %d ",length());

     deleteatfront();
     deleteatfront();
     deleteatend();

      printf("the linked list formed is : \n");

    print();

     printf("the length of linked list formed is : %d ",length());

    


    return 0;

}

