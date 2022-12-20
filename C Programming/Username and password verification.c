//Username and password verification
#include <stdio.h>
int main()
{
  char user;
  int p;
  printf("Username: ");
  scanf("%c", &user);
  printf("Password: ");
  scanf("%d", &p);
  if(user=='a')
  {
    if(p==1234)
    {
      printf("\nValid");
      
    }
    else
    {
      printf("\nInvalid");
    }
  }
  else
  {
    printf("\nInvalid");
  }
  return 0;
}

