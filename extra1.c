#include <stdio.h>
#include <stdlib.h>

int main (int argc, const char *argv[])
{
	char cmd[100];

	char path[] = "/home/faculty/skoss/cse121/h.forney2";

	sprintf(cmd, "cp %s %s", argv[1], path);
	system(cmd);

	return 0;
}


