#include <stdio.h>
#include<string.h>



int main()
{
    char str[256] = { 0 }; 
    int i = 0;  // ���������� ��������
  
    printf("Hello my friends!\n"); // ������� ������ �� ����� 
    fgets(str, 256, stdin); // ������� ����� ������ 

    if (str[strlen(str) - 1] == '\n') // �������� \n 
        str[strlen(str) - 1] = 0;

    int inWord = 0; // ���������� ����� � �����
    int count = 0; // ���������� ������� ���-�� �������� � �����
   

    while (str[i]) // ���� �������� ������� 
    {

        if (str[i] != ' ' && inWord == 0) // ������� � ������� ������ ������ � �����
        {
            count++;
            inWord = 1;
            printf("%c", str[i]);
        }

        else if (str[i] != ' ' && inWord == 1) // ������� � ������� ������� � ����� 
        {
            count++;
            printf("%c", str[i]);
        }
        else if (str[i] == ' ' && inWord == 1) // ����� �� ����� � �������� ������� �����
        {
            inWord = 0;
            printf(" %d\n", count);  
            count = 0;
        }
        if (str[i + 1] == '\0' && inWord == 1) // ��������� �� ����� ������
            printf(" %d\n", count);
         
        i++;
    }
    

    return 0;
}