#include "task1.h"

int main() {
	setlocale(LC_ALL, "russian");

	char str[BUF] = { 0 };
	printf("������� ������: ");
	fgets(str, BUF, stdin);
	//printf("str = %s\n", str);

	if (str[strlen(str) - 1] == '\n')
		str[strlen(str) - 1] = 0;

	int count = 0;
	count = wordCount(str);
	printf("���������� ���� - %d\n", count);

	return 0;
}