#include <stdio.h>

 
int count=0;

 void insertionSort(int x[], int n)
 
{ 
   
 int i, key, j; 

    
for (i = 1; i < n; i++) 
{ 
          
count++;
        
key = x[i]; 
        
count++;
        
j = i - 1; 
       
 count++;
        
while (j >= 0 && x[j] > key)
 { 
            
  count++;
           
           
 x[j + 1] = x[j]; 
           
 count++;
            
j = j - 1; 
           
 count++;
            
     
   } 
          
count++;
       
 x[j + 1] = key; 
        
count++;
      
        
       
   
 } 
    
count++;
    
 printf(" total no of executions:-%d\n", count);

}
 

int main()
{
   
 int x[] = {5,7,6,4};
   
 int n = sizeof(x)/sizeof(x[0]);
    
insertionSort(x, n);
   
   
int i;
  
 for(i=0; i<n; i++)
  
 {
      
 printf("%d",x[i]);
 
  }
     
return 0;

}

