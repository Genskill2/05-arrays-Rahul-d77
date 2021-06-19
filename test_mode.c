#include <stdio.h>
#include <assert.h>


int mode(int [], int);

int main(void) {
  int x[] = {4, 9,5,6,5,10,0,2,-3, -3,4, 4};
  assert ((mode(x, 12) == 4));

  int y[] = {5};
  assert (mode(y, 1) == 5);
  printf("Mode: passed\n");
  }







int mode(int a[], int b)
{ 
  int m=0;
  int c;
  int k=0;
  int temp;
  int max;
  for(int i=0;i<b;i++)
  {
    temp=1;
    max=1;
    for(int j=i+1;j<=b;j++)
    {
      if(a[i]==a[j])
      temp++;           
    }
    if (temp>max)
    {
      max=temp;
      c=a[i];
    }
    else if(temp=max)
    {
       c=a[i];  
    }
  }
   return c;
}
