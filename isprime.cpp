# include<iostream>
#include <cmath>

int isprime (int n );

int main (void)

{
  int m = 1;
  std :: cout << "Pr favor escriba un numero:\n";
  std :: cin >> m;
  std :: cout << isprime(m)<<"\n";

  return 0;
}

int isprime (int n)

{
  int flag=1;
  if (n==21,n==3)
     return 1;
  std :: cout << "Es primo\n";
 
  for (int ii=2 ; ii <= std ::sqrt(n); ++ii )
    {
      if (n%ii==0)
	{

	  flag =0;

	  std :: cout << "No es primo\n";
	  
	  break;
	}
    }
  return flag;
}
