#include <iostream>

int main (void)
{
  
  int sum =0;
  int ii = 1;

  while(ii<=100)
    {
    if(ii%2==0)
    {
      sum +=ii;
    }
      ii+=1;
    }
  std:: cout <<"La suma es   " << sum << "\n" ;

  sum=0;
   for ( ii = 1 ; ii<=100 ; ii++)
     {
       if (ii%2==0)
	 {
	   sum +=ii;
	 }
     }
       std:: cout <<"La suma es   " << sum << "\n" ;


  return 0;
}


