// Clab3 task1

/* �������� ���������, �������������� ���������� ���� �� �������� ������������� ������*/

#include "task1.h"

int wordCount(char buf[])
{
	int inWord = 0, count = 0;
	if (buf[strlen(buf) - 1] = '\n')
		buf[strlen(buf) - 1] = '\0';

	for (int i=0; i < (strlen (buf)-1); )
	{
		if (buf[i] == ' ' && inWord == 0)
		{
			i++;
		}

		if (buf[i] != ' ' && inWord == 0)
		{
			inWord = 1;
			count++;
			i++;
		}

		if (buf[i] != ' ' && inWord == 1)
		{
			i++;
		}

		if (buf[i] == ' ' && inWord == 1)
		{
			inWord = 0;
			i++;
		}
	}

	return count;
}