/*
  Zachary Gilmartin
  Monday, February 24, 2014

  about: this is a set of printing funcitons for the password program
*/

#include <stdio.h>
#include <unistd.h>
#include <string.h>

 //typing strings at a given speed
void type_word(char* some_string, int speed_delay)
{
  int i=0;
  while(some_string[i]!='\0')
  {
    printf("%c",some_string[i]);
    fflush(stdout);
    usleep(speed_delay);              //delays speed of char
    i++;
  }
}

//print program intro
void print_intro()
{
  type_word("Jurasic Park, Systems Security Interface\n"
          "Version 4.05, Alpha E\n"
          "Ready", 100000);
  type_word ("...\n", 1000000);
}

//print security level
void print_security_level(int attemp_number)
{
  switch(attemp_number)
  {
    case 1:
            printf(   "> access security\n"
                    "password:"
                  );
            break;
    case 2:
            printf(   "> access security grid\n"
                    "password:"
                  );
            break;
    case 3:
            printf(   "> access security main security\n"
                    "password:"
                  );
            break;
    default:
            printf(   "> access security main security\n"
                    "password:"
                  );
            break;
  }
}

//print statment for correct password access
void print_access()
{
  type_word("access: PERMISSION GRANTED.\n\n", 10000);
}

//print password denial statement
void print_password_denied(int attempt_number, int max_attempt)
{
  if(attempt_number == max_attempt)
  {
    type_word("access: PERMISSION DENIED", 10000);
    type_word("....and...\n", 100000);
    
    int i;
    for(i=0; i<100; i++)
    {
      usleep(30000);
      printf("YOU DIDN'T SAY THE MAGIC WORD!\n");
    }
  }
  else
    type_word("access: PERMISSION DENIED.\n\n", 10000);
}