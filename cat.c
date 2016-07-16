#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
	FILE *fp;
	char c;
	if ((fp = fopen(argv[1], "rb")) == NULL){
		printf("Can't open the file!\n");
		exit(1);
	}
	while ((c = getc(fp)) != EOF){
		putchar(c);
	}
	fclose(fp);
	return 0;
}
