#include "task5.h"


int getSumInt(int arr[], int N)
{
    int sum = 0, otr = 0, plus = N;

    while (arr[otr++] > 0); //  ���� ������ ������������� �����
    
    while (arr[plus--] < 0); // ���� ��������� ������������� �����
   
    for (int p = otr; p <= plus; p++) // ������� ����� ���������
        sum = sum + arr[p];

    
    return sum;
}