#include "task3.h"
#include <stdio.h>
#include <string.h>


int main()
{
    char str[256] = { 0 };
    char result[30] = { 0 };

    printf("Enter your line!\n"); // ������� ������ �� ����� 
    fgets(str, 256, stdin); // ������� ����� ������ 

    if (str[strlen(str) - 1] == '\n') // �������� \n 
        str[strlen(str) - 1] = 0;

    

    printf("%d\n", getMaxWord(str,result));
    printf("%s\n", result);

    return 0;
}