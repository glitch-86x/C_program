#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main(){

 char user[50] = "";
 bool on = true;
 char res = '\0';


  printf("user name for the machine ;");
  fgets(user , sizeof(user) , stdin);
  user[strcspn(user, "\n")] = '\0';

  while(strlen(user) == 0 ){
       printf("no name tedected , try again ; ");
       fgets(user , sizeof(user) , stdin);
       user[strcspn(user, "\n")] = '\0';
  }

 while(on){
	printf("you play bed war");
	printf("would you to continue y = yes , n = no ");
	scanf("%c", &res);
  if(res != 'y')
	  on = false;

 }
  printf("hello %s \n ", user);

  printf("you exit and save the game");

	return 0;
}
