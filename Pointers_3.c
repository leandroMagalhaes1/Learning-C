#include <stdio.h>

/*
3. Write a program in C to demonstrate the use of the &(address of) and *(value at address) operators.
Expected Output :

Pointer : Demonstrate the use of & and * operator :                                                          
--------------------------------------------------------                                                      
 m = 300                                                                                                      
 fx = 300.600006                                                                                              
 cht = z                                                                                                      
                                                                                                              
 Using & operator :                                                                                           
-----------------------                                                                                       
 address of m = 0x7ffda2eeeec8                                                                                
 address of fx = 0x7ffda2eeeecc                                                                               
 address of cht = 0x7ffda2eeeec7                                                                              
                                                                                                              
 Using & and * operator :                                                                                     
-----------------------------                                                                                 
 value at address of m = 300                                                                                  
 value at address of fx = 300.600006                                                                          
 value at address of cht = z                      

Using only pointer variable :                                                                                
----------------------------------                                                                            
 address of m = 0x7ffda2eeeec8                                                                                
 address of fx = 0x7ffda2eeeecc                                                                               
 address of cht = 0x7ffda2eeeec7                                                                              
                                                                                                              
 Using only pointer operator :                                                                                
----------------------------------                                                                            
 value at address of m = 300                                                                                  
 value at address of fx= 300.600006                                                                           
 value at address of cht= z  
 */

int main(void){
    printf("Pointer : Demonstrate the use of & and * operator :\n");
    printf("--------------------------------------------------------\n");

    int m = 300;
    float fx = 300.600006;
    char cht = 'z';

    printf("m = %d\n",m);
    printf("fx = %f\n",fx);
    printf("cht = %c\n\n",cht);

    printf("Using & operator :\n");
    printf("-----------------------\n");
    printf("m = %p\n",&m);
    printf("fx = %p\n",&fx);
    printf("cht = %p\n\n",&cht);

    printf("Using & and * operator :\n");
    printf("-----------------------\n");
    printf("m = %d\n",*&m);
    printf("fx = %f\n",*&fx);
    printf("cht = %c\n\n",*&cht);

    int *pt_m = &m;
    float *pt_fx = &fx;
    char *pt_cht = &cht;
    
    printf("Using only pointer variable\n");
    printf("-----------------------\n");
    printf("address of m = %p\n",pt_m);
    printf("address of fx = %p\n",pt_fx);
    printf("address of cht = %p\n\n",pt_cht);

    printf("Using only pointer operator\n");
    printf("-----------------------\n");
    printf("value at address of m = %d\n",*pt_m);
    printf("value at address of fx = %f\n",*pt_fx);
    printf("value at address of cht = %c\n\n",*pt_cht);

}