#include <stdio.h>
#include <cs50.h>

int function(void);

int main(int argc, char **argv) {

 /*
 // string c[10] = get_char("Do you agree? ");
 char c[10];

 scanf("Do you agree? %s\n", c);


 if (c == "yes")
 {
   printf("Agreed\n");
 }
 else if (c == "no")
 {
   printf("Not agreed.");
 }
 */
 /*
 unsigned long a[1];
 a[3] = 0x7ffff7b36cebUL;
 */
 printf("world\n");
 function();

 printf("%lu\n", sizeof(char));

 string name = get_string("Hello, enter string: ");
 printf("%s\n", name);
 return 0;
}

int function(void)
{
  // Testing the behavior of the function here.
  return 0;
  printf("Hello");
}