#include <stdio.h>
int main(){
    char str[100];
    int l = 0;
    printf("enter a string; ");
    fgets(str, sizeof(str), stdin);
    while (str[l] != '\0' && str[l] != '\n')
    {
        l++;
    }
    printf("length of  the string = %d", l);
    return 0;
}