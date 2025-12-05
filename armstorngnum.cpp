#include <stdio.h> 
#include <math.h> 
int main() { 
    int num, temp, sum = 0; 
    printf("Enter a number: "); 
    scanf("%d", &num); 
 
    temp = num; 
    while (temp != 0) { 
        int digit = temp % 10; 
        sum += digit * digit * digit; 
        temp /= 10; 
    } 
 
    if (sum == num) 
        printf("Armstrong Number\n"); 
    else 
        printf("Not an Armstrong Number\n"); 
 
    return 0; 
}
