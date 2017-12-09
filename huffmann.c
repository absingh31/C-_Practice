//Count the number of occurances of a character in a string, it's in 'k'

#include <stdio.h>
#include <string.h>

int main ()
{
  char string[100] ;
  scanf("%s", string);
  
  char *p;
  int k = 1;
  p = strchr (string,'z');
  while (p!=NULL)
  {
    printf ("Character i found at position %d\n",p-string+1);
    printf ("Occurrence of character \"i\" : %d \n",k);
    printf ("Occurrence of character \"i\" in \"%s\" is \"%s" \
            "\"\n",string, p);
    p=strchr(p+1,'i');
    k++;
  }

  return 0;
}


