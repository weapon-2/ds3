#include <stdio.h> 
#include <ctype.h> 
 
int main() 
{ 
    char infix[50], postfix[50], stack[50]; 
    int top = -1; 
    int i = 0, j = 0; 
 
    printf("Enter infix expression: "); 
    scanf("%s", infix); 
 
    while(infix[i] != '\0') 
    { 
        char ch = infix[i]; 
 
        // If operand → add to postfix 
        if(isalnum(ch)) 
        { 
            postfix[j++] = ch; 
        } 
 
        // If '(' push to stack 
        else if(ch == '(') 
        { 
            stack[++top] = ch; 
        } 
 
        // If ')' pop until '(' 
        else if(ch == ')') 
        { 
            while(top != -1 && stack[top] != '(') 
            { 
                postfix[j++] = stack[top--]; 
            } 
            top--; // remove '(' 
        } 
 
        // If operator 
        else 
        { 
            while(top != -1 && stack[top] != '(' &&  ((ch == '+' || ch == '-') 
		&& (stack[top] == '*' || stack[top] == '/' || stack[top] == '^')) || 
               		((ch == '*' || ch == '/') && (stack[top] == '^'))) 
            	) 
            { 
                postfix[j++] = stack[top--]; 
            } 
 
            stack[++top] = ch; 
        } 
 
        i++; 
    } 
 
    // pop remaining operators 
    while(top != -1) 
    { 
        postfix[j++] = stack[top--]; 
    } 
 
    postfix[j] = '\0'; 
 
    printf("Postfix Expression: %s\n", postfix); 
 
    return 0; 
} 
