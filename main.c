#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct student{
	int ID;
	char name[100];
	float score;
};
int main(int argc, char *argv[]) {
	struct student s1= {123, "han", 4.3};
	s1.ID= 123456;
	strcpy(s1.name, "kim");
	s1.score= 4.2;
	printf("%d, %s, %f", s1.ID, s1.name, s1.score);
	return 0;
}
