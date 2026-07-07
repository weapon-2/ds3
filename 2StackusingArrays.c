#include <stdio.h> 
 
int main() 
{ 
    int stack[5]; 
    int top = -1; 
 
    int choice, item, i; 
 
    do 
    { 
        printf("\n1. Push\n"); 
        printf("2. Pop\n"); 
        printf("3. Peek\n"); 
        printf("4. Display\n"); 
        printf("5. Exit\n"); 
 
        printf("Enter your choice: "); 
        scanf("%d", &choice); 
 
        switch (choice) 
        { 
            case 1:   // Push 
 
                if (top == 4) 
                { 
                    printf("Stack Overflow\n"); 
                } 
                else 
                { 
                    printf("Enter element: "); 
                    scanf("%d", &item); 
 
                    top = top + 1; 
                    stack[top] = item; 
                } 
 
                break; 
 
            case 2:   // Pop 
 
                if (top == -1) 
 { 
                    printf("Stack Underflow\n"); 
                } 
                else 
                { 
                    printf("Deleted element: %d\n", stack[top]); 
                    top = top - 1; 
                } 
 
                break; 
 
            case 3:   // Peek 
 
                if (top == -1) 
                { 
                    printf("Stack is empty\n"); 
                } 
                else 
                { 
                    printf("Top element: %d\n", stack[top]); 
                } 
 
                break; 
 
            case 4:   // Display 
 
                if (top == -1) 
                { 
                    printf("Stack is empty\n"); 
                } 
                else 
                { 
                    printf("Stack elements are:\n"); 
 
                    for (i = top; i >= 0; i--) 
                    { 
                        printf("%d\n", stack[i]); 
                    } 
                } 
 
                break; 
 
            case 5: 
 printf("Program Ended\n"); 
                break; 
 
            default: 
 
                printf("Invalid Choice\n"); 
        } 
 
    } while (choice != 5); 
 
    return 0; 
}

