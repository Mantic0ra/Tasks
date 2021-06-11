#include <stdio.h>
#include <stdlib.h>

 
int main() {
const int size=100;      
int ar[size];           


 for(int i=0;i<size;i++)
 {
   ar[i]=rand()%100;     
   printf("Array[%d] = %d\n",i,ar[i]);    
 }
 


 int min = ar[0],max = ar[0],min_index,max_index,tmp;  

  for (int i = 0; i < size; i++)  

    if (ar[i] < min)              

    {
    min = ar[i];                  
    min_index = i;                
    }

        else if  (ar[i] > max)    
        {
        max = ar[i];              
        max_index = i;            
        }

    tmp = ar[min_index];           
    ar[min_index] = ar[max_index]; 
    ar[max_index] = tmp;           

    

    printf("max: %d\n",max);
    printf("min: %d\n",min);
    printf("Max ind: %d\n ",max_index);
    printf("Min ind: %d\n ",min_index);
            return 0;
}
