#include "task1.h"

int wordCount(char buf[])
{
    int Word = 0;   //���� � �����
    int  x = 0;     //�������  ��������� ������
    int count = 0;  //������� ����

    while (buf[x])  //��������� ������ �� ���-�� ����
    {
        if (buf[x] == ' ')  //�� � �����
        {
            Word = 0;
            x++;
        }
        else if (buf[x] != ' ' && Word == 0)  //����� � ����� �������� ������� ����
        {
            Word = 1;
            count++;
            x++;
        }
        else if (buf[x] != ' ' && Word == 1)  //������ �� �����
            x++;
    }
    return count;
}