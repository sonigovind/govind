#include<stdio.h> 

int main()

 
{    

 
int num1=0,num2=1,num3;
 

int x=10,i,sum=1;    
    

printf("fibonacci series for value %d\n",x );

printf("fibonacci series for values :->>>%d %d ",num1,num2);    
 

for(i=2;i<x;i++)   

 
{    
  

num3=num1+num2;    
 

printf(" %d",num3);    
 
 
num1=num2;    
  

num2=num3;    

sum=sum+num3;

 
}  

printf("\nSum of fibonacci series-->%d",sum);

return 0;  

 
}    