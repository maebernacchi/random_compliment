#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void
whatUNeed (int random)
{
  switch (random)
    {
    case 1:
      printf("You are worthy of love.\n");
      break;
    case 2:
      printf("There is nothing stopping you from achieving greatness.\n");
      break;
    case 3:
      printf("You are incredible. \n");
      break;
    case 4:
      printf("You are intelligent.\n");
      break;
    case 5:
      printf("The world is better with you in it.\n");
      break;
    case 6:
      printf("You are beautiful.\n");
      break;
    case 7:
      printf("You are loved.\n");
      break;
    case 8:
      printf("You are worth it.\n");
      break;
    case 9:
      printf("You are the reason someone else smiles today.\n");
      break;
    case 10:
      printf("You deserve the world, and then some.\n");
    default:
      printf("<3\n");
    }
}

int
main (void)
{
  srand((unsigned) time(NULL));
  int random = (rand() % 10) + 1;
  whatUNeed(random);
  return 0;
}//main
