

#include <stdio.h>
  

int x;
  
void autoStorageClass()
{
  
    printf("\nDemonstrating auto class\n\n");
    int auto f;
    printf("Value of f is %d \n",f);
  

    auto int a = 32;
  

    printf("Value of the variable 'a'"
           " declared as auto: %d\n",
           a);
}
  

  
void registerStorageClass()
{
  
    printf("\nDemonstrating register class\n\n");
  
    
    register char b = 'G';
  
  
    printf("Value of the variable 'b'"
           " declared as register: %d\n",
           b);
 
}
  
void externStorageClass()
{
  
    printf("\nDemonstrating extern class\n\n");
    extern int x;
    printf("Value of the variable 'x'" 
    " declared as extern: %d\n",
           x);

    x = 2;
 
    printf("Modified value of the variable 'x'"
           " declared as extern: %d\n",
           x);
  
}
  
void staticStorageClass()
{
    int i = 0;
  
    printf("\nDemonstrating static class\n\n");
 
  
    
        static int y = 5;
  
     
        int p = 10;
  
        y++;
        p++;
  
       
        printf("\nThe value of 'y', "
               "declared as static, in %d \n "
               
               , y);
  
        printf("The value of non-static variable 'p'\n %d",
               p);
    
  
}
  
int main()
{
  

  

    autoStorageClass();
  
   
    registerStorageClass();
  
  
    externStorageClass();
  
    
    staticStorageClass();
  

  
    return 0;

}
