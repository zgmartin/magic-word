/*
  Zachary Gilmartin
  Monday, February 24, 2014

  about: A fun password program from the movie Jurasic Park
*/

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>
#include "print.h"
#include "main.h"
#include "animate.h"

//main function for running program
int main()
{
  bool is_permission = false;
  int attempt_number = 1;
  char password[] = PASSWORD;
  char password_attempt[100];
  
  print_intro();
  
  //password attemp loop
  do
  {
    print_security_level(attempt_number);
    scanf("%99s", password_attempt);
    is_permission = check_password(password, password_attempt);
    
    //print cases for password attemtp
    if(is_permission == false && attempt_number == MAX_ATTEMPT)
    {
      print_password_denied(attempt_number, MAX_ATTEMPT);
      animate();
    }
    else if(is_permission == true)
      print_access();
    else
    {
      print_password_denied(attempt_number, MAX_ATTEMPT);
      attempt_number++;
    }
    
  }while(is_permission == false);
  
  return 0;
}

//check if password is correct
bool check_password(char* password, char* password_attemt)
{
  if(strcmp(password, password_attemt) == 0)
    return true;
  else
    return false;
}