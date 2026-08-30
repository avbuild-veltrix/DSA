#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void createList(){
    int choice = 0;
    struct node *temp;
    do{
        struct node *new = malloc(sizeof(struct node));
        printf("Enter the data you want to insert : ");
        scanf("%d", &new->data);
        new->next = NULL;
        if(head == NULL){
            head = temp = new;
        }else{
            temp->next = new;
            temp = new;   
        }
        printf("Do you want to add more nodes? (1 for yes/ 0 for no) ");
        scanf("%d", &choice);
    }while(choice == 1);
}

void display(){
    struct node *temp = head;
    printf("Linked List : ");
    while(temp != NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
    }  
    printf("NULL\n");
}

// void countNodes(){
//     int count = 0, positive = 0, negative = 0, zero = 0;
//     struct node *temp = head;
//     while(temp != NULL){
//         count++;
//         if(temp->data > 0){
//             positive++;
//         }else if(temp->data < 0){
//             negative++;
//         }else{
//             zero++;
//         }
//         temp = temp->next;
//     }
//     printf("Total number of nodes is %d", count);
//     printf("\nTotal number of positive nodes is %d", positive);
//     printf("\nTotal number of negative nodes is %d", negative);
//     printf("\nTotal number of zero nodes is %d", zero);
// }

// void search(){
//     int key, found = 0;
//     printf("\nEnter the key you want to search : ");
//     scanf("%d", &key);
//     struct node *temp = head;
//     while(temp != NULL){
//         if(head == NULL){
//             printf("\nLinked List is empty.");
//         }else{
//             if(temp->data == key){
//                 found = 1;
//                 break;
//             }else{
//                 temp = temp->next;
//             }
//         }
//     }
//     if(found == 1){
//         printf("%d is present in the linked list.");
//     }else{
//         printf("%d is not present in the linked list.");
//     }
// }

// void insertAtBeginning(){
//     struct node *new;
//     new = (struct node *)malloc(sizeof(struct node));
//     new->next = NULL;
//     printf("Enter node data you want to insert at the beginning of the list : ");
//     scanf("%d", &new->data);
//     new->next = head;
//     head = new;
// }

// void insertAtEnd(){
//     struct node *new, *temp;
//     new = (struct node *)malloc(sizeof(struct node));
//     printf("Enter the data you want to insert at the end of the list : ");
//     scanf("%d",&new->data);
//     if(head == NULL){
//         head = new;
//     }else{
//         temp = head;
//         while(temp->next != NULL){
//             temp = temp->next;
//         }
//         temp->next = new;
//     }
// }

// void insertAtPosition(){
//     struct node *new, *temp;
//     int pos;
//     new = (struct node *)malloc(sizeof(struct node));
//     new->next = NULL;
//     printf("Enter the position you want to enter the data : ");
//     scanf("%d", &pos);
//     printf("Enter the data you want to enter at postion %d ", pos);
//     scanf("%d", &new->data);
//     if(head == NULL){
//         printf("Linked list is empty.");
//     }else{
//         temp = head;
//         for(int i = 1; i < pos - 1; i++){
//             temp = temp->next;
//         }
//         new->next = temp->next;
//         temp->next = new;
//     }
// }

// void insertAfterGivenPosition(){
//     struct node *new, *temp;
//     int pos;
//     new = (struct node *)malloc(sizeof(struct node));
//     new->next = NULL;
//     printf("Enter the position you want to enter the data : ");
//     scanf("%d", &pos);
//     printf("Enter the data you want to enter at postion %d ", pos);
//     scanf("%d", &new->data);
//     if(head == NULL){
//         printf("Linked list is empty.");
//     }else{
//         temp = head;
//         for(int i = 1; i < pos; i++){
//             temp = temp->next;
//         }
//         new->next = temp->next;
//         temp->next = new;
//     }
// }

void insertBeforeGivenPosition(){
    struct node *new, *temp;
    int pos;
    new = (struct node *)malloc(sizeof(struct node));
    new->next = NULL;
    printf("Enter the position you want to enter the data : ");
    scanf("%d", &pos);
    printf("Enter the data you want to enter at postion %d ", pos);
    scanf("%d", &new->data);
    if(head == NULL){
        printf("Linked list is empty.");
    }else{
        temp = head;
        for(int i = 1; i < pos-1; i++){
            temp = temp->next;
        }
        new->next = temp->next;
        temp->next = new;
    }
}

int main(){
    createList();
    display();
    // countNodes();
    // search();
    // insertAtBeginning();
    // insertAtEnd();
    // insertAtPosition();
    // insertAfterGivenPosition();
    insertBeforeGivenPosition();
    display();

    return 0;
}