#include  <stdio.h>

// the IDE  use in this project in neoivm (astranvim)
// and its the best IDE i ever try !!
void hello(char name[], int level);

int main(void){


	char name[30];
	printf("enter your user name  :  ");	
	fgets(name , sizeof(name), stdin);
	printf("nice usename btw %s ", name);

  int num[] = {3, 4, 5, 6, 8, 9, 55};
  num[2] = 333;  
  printf("%d\n",num[2]);
  hello("glitch86x", 16);
  hello("ziko.99y" , 14);
  hello("mr,yy", 10);
}



void hello(char name[], int level){
			printf("hello %s , and your level in minecraft is %d \n", name, level);
	
}
