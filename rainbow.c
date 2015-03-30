#include <stdio.h>
#include "colors.h"
 
int main(int argc, char *argv[]) {

	int counter = 0;

	while(1 > 0) {
		switch(counter % 7) {
 
			case 0:
				printf(KRED);
				break;
 
			case 1:
				printf(KGRN);
				break;
 
			case 2:
				printf(KYEL);
				break;
 
			case 3:
				printf(KBLU);
				break;
 
			case 4:
				printf(KMAG);
				break;
 
			case 5:
				printf(KCYN);
				break;
 
			case 6:
				printf(KWHT);
				break;
		}

		counter++;

		if(counter > 7) {
			counter = 0;
		}
 
		printf("%d", rand() % 10);
		printf(KWHT);
	} 
 
}