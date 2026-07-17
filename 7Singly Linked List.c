#include <stdio.h> 
#include <stdlib.h> 
#include <conio.h>
 
struct node 
{ 
    int data; 
    struct node *next; 
}; 
 
int main() 
{ 
    struct node *head = NULL, *newnode, *temp; 
    int choice, value; 
 
    do 
    { 
        printf("\n1. Insert at Beginning"); 
        printf("\n2. Insert at End"); 
        printf("\n3. Delete from Beginning"); 
        printf("\n4. Delete from End"); 
        printf("\n5. Display"); 
        printf("\n6. Exit"); 
 
        printf("\nEnter your choice: "); 
        scanf("%d", &choice); 
 
        switch(choice) 
        { 
            case 1:    
                newnode = (struct node*)malloc(sizeof(struct node)); 
 
                printf("Enter value: "); 
                scanf("%d", &value); 
 
                newnode->data = value; 
                newnode->next = head; 
                head = newnode; 
 
                break; 
 
            case 2:    
                newnode = (struct node*)malloc(sizeof(struct node)); printf("Enter value: "); 
                scanf("%d", &value); 
 
                newnode->data = value; 
                newnode->next = NULL; 
 
                if(head == NULL) 
                { 
                    head = newnode; 
                } 
                else 
                { 
                    temp = head; 
                    while(temp->next != NULL) 
                    { 
                        temp = temp->next; 
                    } 
                    temp->next = newnode; 
                } 
 
                break; 
 
            case 3:    
                if(head == NULL) 
                { 
                    printf("List is empty\n"); 
                } 
                else 
                { 
                    temp = head; 
                    head = head->next; 
                    printf("Deleted: %d\n", temp->data); 
                    free(temp); 
                } 
 
                break; 
 
            case 4:    
                if(head == NULL) 
                { 
                    printf("List is empty\n"); 
                } else if(head->next == NULL) 
                { 
                    printf("Deleted: %d\n", head->data); 
                    free(head); 
                    head = NULL; 
                } 
                else 
                { 
                    temp = head; 
 
                    while(temp->next->next != NULL) 
                    { 
                        temp = temp->next; 
                    } 
 
                    printf("Deleted: %d\n", temp->next->data); 
                    free(temp->next); 
                    temp->next = NULL; 
                } 
 
                break; 
 
            case 5:    	 
                if(head == NULL) 
                { 
                    printf("List is empty\n"); 
                } 
                else 
                { 
                    temp = head; 
                    printf("Linked List: "); 
 
                    while(temp != NULL) 
                    { 
                        printf("%d -> ", temp->data); 
                        temp = temp->next; 
                    } 
 
                    printf("NULL\n"); 
                } 
 
                break;  case 6: 
                printf("Program Ended\n"); 
                break; 
 
            default: 
                printf("Invalid Choice\n"); 
        } 
 
    } while(choice != 6); 
    getch();	
    return 0; 
} 