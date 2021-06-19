#include <stdio.h>
#include <assert.h>


int factors(int, int []);

int main(void) {
  int ret[100] = {0};
  int count = factors(180, ret);
  assert (count == 5);
  assert (ret[0] == 2);
  assert (ret[1] == 2);
  assert (ret[2] == 3);
  assert (ret[3] == 3);
  assert (ret[4] == 5);


  count = factors(143, ret);
  assert (count == 2);
  assert (ret[0] == 11);
  assert (ret[1] == 13);
  printf("Factors: passed\n");
}




int factors(int a, int c[])
{ int k=0;
  int temp=0;
  int flag=0;
  int b[50];
  int fact=0;
  for(int i=2;i<100;i++)
  {
    temp=0;
    for(int j=2;j<=i/2;j++)
    {
      if(i%j==0)
      {
        temp=1;
        break;
      }    
    } 
    if (temp==0)
     {
        b[k]=i;
        k++;
      }
    }
     int div=a;
     for(int n=0;n<a;n++)
     {
       for(int d=0;d<k;d++)
        { 
          if(div==1)
          break;
          else if(div%b[d]==0) 
                 {
                   flag++;
                   c[fact]=b[d]; 
                   fact++;
                   div/=b[d];
                   break;
                 }
       
        }
   }  
  return  flag;
}
