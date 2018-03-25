#include <stdio.h>

int main() {
	int x, y;
	
	for(x = 0;x < 10;x++) {
		for(y = 0;y < 10;y++) {
			if (x-5 < y) {
				putchar('*');
			}
		}
		putchar('\n');
	}
	
	return 0;
}
