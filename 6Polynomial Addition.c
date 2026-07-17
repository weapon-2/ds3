#include <stdio.h> 
#include <conio.h>
 
int main() 
{ 
    int a[10], b[10], c[10]; 
    int m, n, i, max; 
 
    printf("Enter degree of first polynomial: "); 
    scanf("%d", &m); 
 
    printf("Enter coefficients of first polynomial:\n"); 
    for(i = 0; i <= m; i++) 
    { 
        scanf("%d", &a[i]); 
    }     
    printf("Enter degree of second polynomial: "); 
    scanf("%d", &n); 
 
    printf("Enter coefficients of second polynomial:\n"); 
    for(i = 0; i <= n; i++) 
    { 
        scanf("%d", &b[i]); 
    }     
    if(m > n) 
        max = m; 
    else 
        max = n; 
    
    for(i = 0; i <= max; i++) 
    { 
        a[i] = (i <= m ? a[i] : 0); 
        b[i] = (i <= n ? b[i] : 0); 
        c[i] = a[i] + b[i]; 
    }  printf("\nResultant Polynomial Coefficients:\n"); 
 
    for(i = max; i >= 0; i--) 
    { 
        printf("%dx^%d ", c[i], i); 
        if(i != 0) 
            printf("+ "); 
    } 
    getch();
    return 0; 
} 
 
    
