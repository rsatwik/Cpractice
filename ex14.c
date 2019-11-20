#include <stdio.h>
#include <ctype.h>
#include <string.h>

// forward declarations
int can_print_it(char ch);
void print_letters(char arg[]);

void print_arguments(int argc, char *argv[])
{
	int i=0;

	for(i=0;i<argc;i++){
		print_letters(argv[i]);
	}
}

void print_letters(char arg[])
{
	int i = 0;
	int string_len = strlen(arg);
	printf("\n%s: %d\n",arg,string_len);
	for(i=0; i < string_len; i++){
		char ch = arg[i];

		if(can_print_it(ch)){
			printf("'%c' == %d ",ch,ch);
		}
	}

	printf("\n");
}

int can_print_it(char ch)
{
	return isalpha(ch) || isblank(ch);
}

int main(int argc, char *argv[])
{
	print_arguments(argc,argv);
	return 0;
}
