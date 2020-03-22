#include <stdio.h>

int main(){
	int c;

	printf("Type a letter: ");
	c = getchar();
	printf("You typed ");
	putchar(c);
	putchar('\n');

	// Strem output is buffered until it's full or flushed
	// Stream input is only read once so e and c have the same value!
	int e,f,g;

	printf("Type 3 letters: ");
	e = getchar();
	putchar(e);
	f = getchar();
	putchar(f);
	g = getchar();
	putchar(g);

	return(0);
}