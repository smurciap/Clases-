#include <iostream>
int i,a;
int par (int i);
int impar(int a);

int main (void)

{
   std:: cout << i << "\n";
    std:: cout << a << "\n";

    return 0;
}

int par()
{
  for (int i=1 ; i<=100 ; i++)
    
    { if (i%2==0)
	{
	  std:: cout << i << "\n";
	}
    }
  
  return 0;
}

  int impar()
    
 {
     for (int a=1 ; a<=100 ; a++)
    
    { if (a%3==0)
	{
	  std:: cout << a << "\n";
	}
    }
  
  return 0;

}
