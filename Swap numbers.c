#include<stdio.h>
void main()
{
 int a[50],largest,smallest,n,swapper,i;

printf("Enter the number of elements in the array:\n");
scanf("%d",&n);

printf("Enter the elements of the array: \n");
for(i=0;i<n;i++)
 
 {   
     scanf("%d",&a[i]);}

for(i=1;i<n;i++)
{  
   { if(a[i]>a[largest])
    largest=i;}
    
if(a[i]<a[smallest])

{smallest=i;}
}
 
 printf("\n Before interchange: \n Largest number = %d \n Smallest number = %d",a[largest],a[smallest]);

swapper=a[largest];
a[largest]=a[smallest];
a[smallest]=swapper;

printf("\n After interchange: \n Largest number = %d \n Smallest number = %d",a[largest],a[smallest]);
}
