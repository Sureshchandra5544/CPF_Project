#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main ()
{
  char test_buffer[100] = "Hi8: h56>?ow a/'re";
  int length= strlen(test_buffer);
  for (int i=0;i<=length;i++)
  {
	  if (isalnum(test_buffer[i] ))
		  printf("%c\n", test_buffer[i]);
	  else
		  printf("it is space \n");

  }

}

