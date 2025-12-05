#include <stdio.h> 
int main() { 
int n, key; 
printf("Enter number of elements: "); 
scanf("%d",&n); 
int arr[n]; 
printf("Enter sorted elements: "); 
for(int i=0;i<n;i++) scanf("%d",&arr[i]); 
printf("Enter element to search: "); 
scanf("%d",&key); 
int low=0, high=n-1, found=-1; 
while(low<=high){ 
int mid=(low+high)/2; 
if(arr[mid]==key){found=mid; break;} 
else if(arr[mid]<key) low=mid+1; 
else high=mid-1; 
} 
if(found!=-1) printf("Element found at position %d\n", found+1); 
else printf("Element not found\n"); 
return 0; 
}
