#include <stdio.h>

int main(){
	char password[] = "spatula";
	char name[15];	// room for 14

	printf("Your name? ");
	// scanf("%s", &name); scanf has no protection against buffer overflow
	// it's better to use fgets

	fgets(name, 15,stdin);
	puts("Thanks mate ;))");

	return 0;
}