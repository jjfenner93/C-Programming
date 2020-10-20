#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main(void) {
  // C - Greg Perry & Dean Miller pg.121
  /*
  int ctr = 0;
  printf("Counter is at %d.\n", ++ctr);
  */
  /*
  int i;
  char msg[25];

  printf("Type up to 25 characters and then press Enter...\n");
  for (i = 0; i < 25; i++)
  {
      msg[i] = getchar(); // Outputs a single character.
        if (msg[i] == '\n')
        {
            i--;
            break;
        }
  }

  putchar('\n'); // One line break after the loop is done.

  for (; i >= 0; i--) // Contains the last array subscript.
  {
      putchar(msg[i]);
  }

  putchar('\n');
  */

  char firstInit, lastInit, n1;
  /*
  printf("What are your two initials?\n");
  firstInit = getchar(); // Asking for the first initial.
  n1 = getchar(); // Then this acts as a new line, you don't need to assign anything to it.
  lastInit = getchar(); // Now to enter the next.
  n1 = getchar(); // Newline again.
  printf("Output: %c%c\n", firstInit, lastInit); // Prints your initials.
  */

  printf("What are your two initials?\n");
  firstInit = getch(); // Asking for the first initial.
  lastInit = getch(); // Now to enter the next.
  printf("Output: %c%c\n", firstInit, lastInit); // Prints your initials.

  return 0;
}