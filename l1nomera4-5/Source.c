#include <stdio.h>
#include <locale.h>
#include "name.h"
void namq()
{
	puts("��� ���������");

}

void main()

{
	setlocale(LC_ALL, "RUS");
	namq();
	name();
}