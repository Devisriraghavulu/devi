#include <stdio.h> 
#include <math.h> 
int main() { 
float principal, rate, time; 
printf("Enter principal amount: "); 
scanf("%f", &principal); 
printf("Enter rate of interest (in %%): "); 
scanf("%f", &rate); 
printf("Enter time (years): "); 
scanf("%f", &time); 
float SI = (principal * rate * time) / 100;  
float CI = principal * pow((1 + rate / 100), time) - principal; 
printf("Simple Interest = %.2f\n", SI); 
printf("Compound Interest = %.2f\n", CI); 
return 0; 
} 
