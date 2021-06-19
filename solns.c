/* Enter your solutions in this file */
#include <stdio.h>




float average(int a[],int b)
  {int sum=0;
   float c;
   for(int i=0;i<b;i++)
     {
       sum+=a[i];
     }
     c=(float)sum/b;
   return c;
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









int min(int a[],int b)
{
  int MIN=a[0];
  for(int i=0;i<b;i++)
  {
    if (MIN>a[i]) 
    {
      MIN=a[i];    
    }
  }
  return MIN;
}








int max(int a[],int b)
{
  int MAX=a[0];
  for(int i=0;i<b;i++)
  {
    if (MAX<a[i]) 
    {
      MAX=a[i];     
    }
  }
  return MAX;
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
