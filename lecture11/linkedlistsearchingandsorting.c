#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* link; //self refrential class

};

struct node* root=NULL;
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

void print(){
    struct node* temp;
    temp=root;
    while(temp!=NULL){
        printf("%d -> ",temp->data);
        temp=temp->link;
    }

   

    printf("\n");


    
}

//with the help of flag variable

// void searchinginll(int key){
//     struct node* temp;
//     temp=root;
//     int flag=0;
//     while(temp!=NULL){
//         if(temp->data==key){
//             printf("key is present\n");
//             flag=1;
//             break;
//         }
//         temp=temp->link;
//     }
//     if(flag==0){
//         printf("key is not present\n");
            


//     }
// }


//without flag variable

bool searchinginll(int key){
    struct node* temp;
    temp=root;
  
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->link;
    }
    return false;
       

}

void swap(struct node* a,struct node* b){
    int temp=a->data;
    a->data=b->data;
    b->data=temp;
}


void searchingbubblesortinll(){
    struct node* start=root;
    struct node* ptr1;
    int swapping;
    struct node*lptr=NULL;
    if(start==NULL){
        return;
    }
    do{
        swapping=0;
        ptr1=start;
        while(ptr1->link!=lptr){
            if(ptr1->data>ptr1->link->data){
                swap(ptr1,ptr1->link);
                swapping=1;

            }
            ptr1=ptr1->link;

        }
        lptr=ptr1;


    }
    while(swapping);
    


}






int main(){
    addelementsatend();
    addelementsatend();
    addelementsatend();
    addelementsatend();
    addelementsatend();
    addelementsatend();

    printf("The linked list formed is as :\n");
    print();
    int key;
    // printf("Take key as input:\n");
    // scanf("%d",&key);


    // searchinginll(key);



    // if(searchinginll(key)){

    //     printf("key is present\n");

    // }
    // else{
    //     printf("key is not present\n");
    // }

    searchingbubblesortinll();
    printf("The linked list formed after sorting is as :\n");
    print();
    return 0;
}