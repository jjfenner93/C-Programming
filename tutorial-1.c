#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

#define TWO_PERCENT 0.2
#define TWELVE_PERCENT 0.12

// Function prototypes
// bool issymbol(string input);

int main(void) {
  // C - Greg Perry & Dean Miller pg.121
  /*
  int ctr = 0;
  printf("Counter is at %d.\n", ++ctr);
  */
  /*
  int i;
  char msg[25];

  // It reverses the characters input.
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
  /*
  char firstInit, lastInit, n1;

  printf("What are your two initials?\n");
  firstInit = getchar(); // Asking for the first initial.
  n1 = getchar(); // Then this acts as a new line, you don't need to assign anything to it.
  lastInit = getchar(); // Now to enter the next.
  n1 = getchar(); // Newline again.
  printf("Output: %c%c\n", firstInit, lastInit); // Prints your initials.
  */

  /*
  printf("What are your two initials?\n");
  firstInit = getch(); // Asking for the first initial.
  putch(firstInit);
  lastInit = getch(); // Now to enter the next.
  putch(lastInit);
  printf("Output: %c%c\n", firstInit, lastInit); // Prints your initials.
  */
  /*
  // Maybe try to make the coin mech but in code form:
  
  if (coin == correctWeight)
  {
    
  }
  */
  /*
  int i;
  int hasUpper, hasLower, hasDigit, hasPunct;
  char user[25], password[25];

  hasUpper = hasLower = hasDigit = hasPunct = 0;

  printf("What is your username? ");
  scanf(" %s", user);

  printf("Please create a password: ");
  scanf(" %s", password);

  for (i = 0; i < strlen(password) ; i++)
  {
    if (isdigit(password[i]))
    {
      hasDigit = 1;
      continue;
    }
    if (isupper(password[i]))
    {
      hasUpper = 1;
      continue;
    }
    if (islower(password[i]))
    {
      hasLower = 1;
    }
    if (ispunct(password[i]))
    {
      hasPunct = 1;
    }
  }

  if ((hasDigit) && (hasUpper) && (hasLower) && (hasPunct))
  {
    printf("\n\nExcellent work, %s, \n", user);
    printf("Your password has least one uppercase letter, lowercase letters, some numbers and at least one symbol.");
  } else {
    printf("\n\nYou should consider a new password, %s, \n", user);
    printf("One that uses at least one uppercase letter, lowercase letters, some numbers and at least one symbol.");
  }
  */
  /*
  // Fix this later...(NI Calculations).
  double weeklyEarnings = 160.50;
  double deduction = 0.0;
  double deductionResult = 0.0;
  float max = 805.00;
  float min = 153.00;

  if (weeklyEarnings < min)
  {
    printf("No National Insurance to pay.");
  } else if (weeklyEarnings > min && weeklyEarnings < max)
  {
    deduction = TWELVE_PERCENT * weeklyEarnings;
    deductionResult = deduction - weeklyEarnings;
    printf("National Insurance to be payed: £%f", deductionResult);
  } else if (weeklyEarnings > max)
  {
    deduction = TWO_PERCENT * weeklyEarnings;
    printf("National Insurance to be payed: £%f", deductionResult);
  }
  */



  return 0;
}

/*
bool issymbol(string input)
{
  if (!isalnum(input) && !isalpha(input))
  {
    return true;
  }
}
*/
