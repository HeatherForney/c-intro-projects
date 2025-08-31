#include <stdio.h>
#include <stdlib.h>

int main (int argc, const char *argv[])
{
	char cmd[100];

	char path[] = "/some/faculty/destination/cse121/path";

	sprintf(cmd, "cp %s %s", argv[1], path);
	system(cmd);

	return 0;
}


