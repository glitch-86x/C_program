#include <stdio.h>
#include <stdbool.h>
// after you have the source code you most compile'it like that 
// gcc   <source code file >     -o    <new file name>
// or just run my Makefile like that ; make 
// to delet file run ; make clean

int main() {

   int year = 2026;
   int age = 17;
   float gnu = 1.4;
   double coin = 3.53453455435554;
   char synccode = 'Z';
   char user[] = "glitch86x";
   bool work = false;

   int x = 3;
   int y = 7;
   int z = 0;
   
//------------------------------------------


	printf("hello world !\n");
        printf("hello from c\n ");
	printf("we are in  %d \n ", year );
        printf("i am have %d years old\n " , age );
  	printf("you distro is %.5f \n ", gnu); 
	printf("you value of coins is = %.8lf bit\n" , coin);
	printf("your sync code is '%c' save'it \n " , synccode);
	printf("the user name for this machine is %s \n " , user);

        z = x + y; 
        printf("%d is the ruslta\n ", z);
//------------------------------------------  
//if statment in a example of work ; 

   if(work){
	printf("you are work\n ");
   }
   else{
	printf("YOU are not work\n");
   }


//-----------------------------------------


  return 0;

}
