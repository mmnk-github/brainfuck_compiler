
#include <stdio.h>
int main(void){
    char m[30000] = {0};
    char* ptr = m;
    *ptr = getchar();
    (*ptr)--;
    (*ptr)--;
    (*ptr)--;
    (*ptr)--;
    (*ptr)--;
    (*ptr)--;
    (*ptr)--;
    (*ptr)--;
    (*ptr)--;
    (*ptr)--;
    while(*ptr){
        ptr++;
        while(*ptr){
            ptr++;
            ptr++;
            (*ptr)++;
            ptr--;
            ptr--;
            (*ptr)--;
        }
        ptr++;
        *ptr = getchar();
        (*ptr)--;
        (*ptr)--;
        (*ptr)--;
        (*ptr)--;
        (*ptr)--;
        (*ptr)--;
        (*ptr)--;
        (*ptr)--;
        (*ptr)--;
        (*ptr)--;
        ptr++;
        (*ptr)++;
        ptr--;
    }
    ptr++;
    while(*ptr){
        while(*ptr){
            ptr--;
            ptr--;
            (*ptr)++;
            ptr++;
            ptr++;
            (*ptr)--;
        }
        ptr--;
        ptr--;
        (*ptr)--;
        ptr--;
        (*ptr)++;
        (*ptr)++;
        (*ptr)++;
        (*ptr)++;
        (*ptr)++;
        (*ptr)++;
        (*ptr)++;
        (*ptr)++;
        (*ptr)++;
        (*ptr)++;
        putchar(*ptr);
        ptr++;
    }
    return 0;
}