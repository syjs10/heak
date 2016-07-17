#include <stdio.h>
#include <stdlib.h>
void delete(char *filename){
	if (remove(filename) < 0){
		printf("delete file error\n");
		exit(1);
	}
}
