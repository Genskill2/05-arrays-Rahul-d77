#include <stdio.h>
#include <assert.h>


int max(int [], int);

int main(void) {
  int x[] = {9,5,6,10,2,-3,4};
  assert (max(x, 7) == 10);

  int y[] = {5};
  assert (max(y, 1) == 5);
  printf("Max: passed\n");
  }






int max(int a[],int b)
{
  int MAX=a[0];
  for(int i=0;i<b;i++)
  {
    if (MAX<a[i]) 
    {
      MAX=a[i];     //printf("%i\n",MAX) ;
    }
  }
  return MAX;
}
