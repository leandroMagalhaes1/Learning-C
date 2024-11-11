#include <stdio.h>

/*
4. Write a program in C to add two numbers using pointers.
Test Data :
Input the first number : 5
Input the second number : 6
Expected Output :

The sum of the entered numbers is : 11 
*/

int add_int(int *pt1, int *pt2){

    return *pt1 + *pt2;
}

int main(void){

    int nr1 = 0;
    int nr2 = 0;
    
    int *pt1 = &nr1;
    int *pt2 = &nr2;

    printf("Input the first number : ");
    scanf("%d",*&pt1);

    printf("Input the second number : ");
    scanf("%d",*&pt2);

    printf("The sum of %d and %d is %d",nr1,nr2,add_int(pt1,pt2));
}