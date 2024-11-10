#include <stdio.h>

/*
1. Write a program in C to show the basic declaration of a pointer.
Expected Output :

 Pointer : Show the basic declaration of pointer :                                                            
-------------------------------------------------------                                                       
 Here is m=10, n and o are two integer variable and *z is an integer                                          
                                                                                                              
 z stores the address of m  = 0x7ffd40630d44                                                                  
                                                                                                              
 *z stores the value of m = 10                                                                                
                                                                                                              
 &m is the address of m = 0x7ffd40630d44                                                                      
                                                                                                              
 &n stores the address of n = 0x7ffd40630d48                                                                  
                                                                                                              
 &o  stores the address of o = 0x7ffd40630d4c                                                                 
                                                                                                              
 &z stores the address of z = 0x7ffd40630d50     
*/

int main(void){
    int m = 10;
    int n;
    int o;

    int *z = &m;

    printf("z stores the address of m = %p \n",z);
    printf("*z stores the value of m = %d\n",m);
    printf("&m is the address of m = %p\n",&m);
    printf("&n stores the address of n = %p\n",&n);
    printf("&o stores the address of o = %p\n",&o);
    printf("&z stores the adress of z = %p",&z);
}