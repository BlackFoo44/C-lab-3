#include "task3.h"



int getMaxWord(char buf[], char word[])
{
    int inWord = 0; // ���������� ����� � �����
    int count = 0; // ���������� ������� ���-�� �������� � �����
    int i = 0;  // ���������� ��������
    int start = 0, max = 0; //��������� ������� ������ �������� ����� � ��� �����

    while (buf[i]) // ���� �������� ������� 
    {

        if (buf[i] != ' ' && inWord == 0) // ������� � ������� ������ ������ � �����
        {
            count++;
            inWord = 1;
            
        }

        else if (buf[i] != ' ' && inWord == 1) // ������� � ������� ������� � ����� 
        {
            count++;  
        }
        else if (buf[i] == ' ' && inWord == 1) // ����� �� ����� � �������� ������� �����
        {
            inWord = 0;
            if (max <= count)
            {
                max = count;
                start = i - count;
            }
            count = 0;
        }
        if (buf[i + 1] == '\0' && inWord == 1) // ��������� �� ����� ������
            if (max <= count)
            {
                max = count;
                start = i - count + 1;
            }
        i++;
    }
    int w = 0; 

    for (i = start; i <= max + start; i++, w++) //���������� ������ ������� �����
        word[w] = buf[i];
        word[--w] = '\0';

    return max;
}