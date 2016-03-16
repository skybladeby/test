#include <stdio.h>

int main(void){

    int c;

    do{
	switch (c = getchar()) {
	case '\t':
	   printf("\\t");
	   break;
	case '\b':
	   printf("\\b");
	   break;
	case '\\':
	   printf("\\\\");
	   break;
	case EOF:
	   break;
	default:
	   putchar(c);
	   break;
	}
    }while (c != EOF);

 return 0;
}
