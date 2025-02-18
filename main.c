#include<stdio.h>

int main(){
	int i;
	printf("Hello World\n");
	for(i=0;i<5;i++){
		printf("%d ", i);
	}
	printf("\nEnter first name: ");
	char arr[10];
	scanf("%s", arr);
	printf("\nProgram ended %s.\n", arr);
	return 0;
}
