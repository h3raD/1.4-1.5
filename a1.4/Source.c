#include <stdio.h>
#include <locale.h>
#include "name.h"
#include "data.h"
void nameqq()
{
	puts("��� ���������");
}

void main()

{
	setlocale(LC_ALL, "RUS");
	nameqq();
	name();
	date();
}