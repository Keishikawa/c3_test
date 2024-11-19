#include <stdio.h>
#include <string.h>

int main(void){
	char buffer[256];
	scanf("%s", buffer);
	if(strcmp(buffer, "hello") == 0){
		printf("good");
	}
	return 0;
}
