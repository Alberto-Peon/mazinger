#include <stdio.h>
#include "runner.h"

int main(void)
{
	run("status");
	int res;
	char s[10];
	puts("Enter a command (enter help for a list of commands):");
	while ((res = scanf("%s", s)) != EOF) {
		run(s);
	}
}
