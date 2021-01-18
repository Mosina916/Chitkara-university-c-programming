#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
//blueprint
struct node{
    int data;
    struct node* link;

};

struct node* root=NULL;

bool isempty(){
    return root==NULL;

}

//add elements at end //append

void addelementsatend(){
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("enter the data to be added at end\n");
    scanf("%d",&temp->data);
    temp->link=NULL;

    if(root==NULL){
        root=temp;
    }
    else{
        struct node* p;
        p=root;
        while(p->link!=NULL){
            p=p->link;
        }
        p->link=temp;
    }
}

//insert at front


void insertatfront(){
     struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("enter the data to be added at front\n");
    scanf("%d",&temp->data);
    if(root==NULL){
        root=temp;
    }
    else{
        temp->link=root;
        root=temp;

    }
    

}
//priniting linked list
void print(){
    struct node* temp;
    temp=root;
    while(temp!=NULL){
        printf("%d -> ",temp->data);
        temp=temp->link;
    }

    printf("\n");


    
}

//reverse a linked list


void reversell(){
    struct node* current=root;
    struct node* prev=NULL;
    struct node* next;
    while(current!=NULL){

        next=current->link;
        current->link=prev;
        prev=current;
        current=next;

    }

    root=prev;




}
int lengthofll(){
    struct node* temp;

    temp=root;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->link;
    }
    return count;
    
}

// delete at front

void deleteatfront(){
    struct node* temp;
    temp=root;
    root=root->link;
    temp->link=NULL;
    free(temp);


}

// delete at end

void deleteatend(){
    struct node* temp;
    struct node* prev=NULL;
    temp=root;
    while(temp->link!=NULL){
        prev=temp;
        temp=temp->link;
    }
    prev->link=NULL;
    free(temp);



}





int main(){

    if(isempty()){

        printf("yes linked list is empty\n");
    }
    else{
        printf("no linked list is not empty\n");

    }

    addelementsatend();
    addelementsatend();
    addelementsatend();
    addelementsatend();
    insertatfront();
    insertatfront();
    insertatfront();


    print(); 
  

    reversell();
    printf("The linked list formed after reverse is as :\n");

    print();






    // deleteatfront();
    // deleteatfront();
    // deleteatfront();
    // deleteatend();


    // printf("The linked list formed is as :\n");

    // print();


    // printf("The length of linked list formed is as : %d\n",lengthofll());


    


    // if(isempty()){

    //     printf("yes linked list is empty\n");
    // }
    // else{
    //     printf("no linked list is not empty\n");

    // }



    return 0;
}