#include <stdio.h>

int main(args[]){

    int c,c1;
    int count,first;

    do{
	switch (c = getchar();) {
	case '\t':
	   printf("\\t");
	   break;
	case '\b':
	   printf("\\b");
	   break;
	case '\\':
	   printf("\\\\");
	   break;
	case 'EOF':
	   break;
	default:
	   putchar(c);
	   break;
    }while (c != EOF);

 return 0;
}
