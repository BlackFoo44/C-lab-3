#include "task4.h"
#include <stdio.h>
#include <stdlib.h>

int getSum(char buf[])
{
    int sum = 0;

    for (int i = 0; buf[i]; i++) // ��������� ������ �����������, ��� ����� ���������� � �������� � ���������� sum
   
        if (buf[i] >= '0' && buf[i] <= '9') 
        {
            sum = sum + (buf[i] - '0');
        }

        return sum;
    





        




}