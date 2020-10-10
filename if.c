#include <stdio.h>

int main(){
	int number;
	printf("adjon meg egy egesz szamot!\n");
	scanf("%d", &number);
	if(number % 2 == 0){
	printf("A szam paros.\n");
	}
	return 0;
}