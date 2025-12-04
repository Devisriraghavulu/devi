#include <stdio.h> 
int main() { 
int i; 
float f; 
char c; 
char str[50]; 
printf("Enter an integer: "); 
scanf("%d", &i); 
printf("Enter a float: "); 
scanf("%f", &f); 
printf("Enter a character: "); 
scanf(" %c", &c); 
printf("Enter a string: "); 
scanf("%s", str); 
printf("\nYou entered:\n"); 
printf("Integer: %d\n", i); 
printf("Float: %.2f\n", f); 
printf("Character: %c\n", c); 
printf("String: %s\n", str); 
return 0;} 

