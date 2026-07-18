#include <stdio.h>
#include <string.h>

int main(void)
{
	char num[256] = {0};
	char op = 0;

	printf("\n\033[33mKalkulatore\033[0m\n");

	printf("  Gimme number (base 0): ");
	scanf("%s", num);

	printf("  Operator (+/-): ");
	scanf(" %c", &op);

	if (op == '+')
	{
		strncat(num, "0\n", 1);
	} else if (op == '-')
	{
		num[strlen(num) - 1] = '\0';
	} else {
		printf("  invalid operator\n");
		return 1;
	}

	printf("  Result = %s\n\n", num);

	return 0;
}
