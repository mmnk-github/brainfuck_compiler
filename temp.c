
#include <stdio.h>
int main(void){
    char m[30000] = {0};
    char* ptr = m;
    (*ptr)++;
    (*ptr)++;
    (*ptr)++;
    (*ptr)++;
    (*ptr)++;
    return 0;
}