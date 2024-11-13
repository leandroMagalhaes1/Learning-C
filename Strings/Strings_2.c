#include <stdio.h>

int string_len(char *string);
void string_copy(char *string1, char *string2);

int main(void){
    char s[]= "this is a string";
    int tam = string_len(s);

    char t[128];
    string_copy(t,s);

    printf("%s\n",t);
    //printf("the length is %d",string_len(s));

}

int string_len(char *string){
    int i=0;
    int size=0;

    while(string[i]!= '\0'){
        size++;
        i++;
    }
    return size;
}

void string_copy(char *string1, char *string2){

    int i=0;

    while(string2[i]!= '\0'){
        string1[i]=string2[i];
        i++;
    }

}

