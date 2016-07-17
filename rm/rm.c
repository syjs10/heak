#include <stdio.h>
void delete(char *);
int main(int argc, char* argv[])
{
	while (argc-- > 1){
		delete(argv[argc]);
	}
	return 0;
}
//可以删除多个文件，多个文件名用空格隔开
