// #include<stdio.h>
// #include<string.h>
// #include<ctype.h>


// char *strrev(char *str)
// {
//       char *p1, *p2;

//       if (! str || ! *str)
//             return str;
//       for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
//       {
//             *p1 ^= *p2;
//             *p2 ^= *p1;
//             *p1 ^= *p2;
//       }
//       return str;
// }



// char *strlwr(char *str)
// {
//   unsigned char *p = (unsigned char *)str;

//   while (*p) {
//      *p = tolower((unsigned char)*p);
//       p++;
//   }

//   return str;
// }


// char *strupr(char *str)
// {
//   unsigned char *p = (unsigned char *)str;

//   while (*p) {
//      *p = toupper((unsigned char)*p);
//       p++;
//   }

//   return str;
// }




// int main()
// {
// 	char s[100];
// 	int len;

// 	scanf("%s", &s);
// 	len = strlen(s);
// 	printf("%d\n", len);

// 	printf("%s\n", strupr(s));
// 	return 0;
// }







// Appends a portion of string to another
// #include <stdio.h>
// #include <string.h> 
// int main( )
// {
//    char source[ ] = " fresh2refresh" ;
//    char target[ ]= "C tutorial" ;
 
//    printf ( "\nSource string = %s", source ) ;
//    printf ( "\nTarget string = %s", target ) ;
 
//    strncat ( target, source, 5 ) ;
 
//    printf ( "\nTarget string after strncat( ) = %s", target ) ;
// }








// concatinates str2 to end of str1
// #include <stdio.h>
// #include <string.h> 
// int main( )
// {
//    char source[ ] = " fresh2refresh" ;
//    char target[ ]= " C tutorial" ;
 
//    printf ( "\nSource string = %s", source ) ;
//    printf ( "\nTarget string = %s", target ) ;
 
//    strcat ( target, source ) ;
 
//    printf ( "\nTarget string after strcat( ) = %s", target ) ;
// }







// Copies str2 into str1
// #include <stdio.h>
// #include <string.h> 
// int main( )
// {
//    char source[ ] = "fresh2refresh" ;
//    char target[20]= "" ;
//    printf ( "\nsource string = %s", source ) ;
//    printf ( "\ntarget string = %s", target ) ;
//    strcpy ( target, source ) ;
//    printf ( "\ntarget string after strcpy( ) = %s", target ) ;
//    return 0;
// }






// Copies given number of characters of one string to another
// #include <stdio.h>
// #include <string.h> 
// int main( )
// {
//    char source[ ] = "fresh2refresh" ;
//    char target[20]= "" ;
//    printf ( "\nsource string = %s", source ) ;
//    printf ( "\ntarget string = %s", target ) ;
//    strncpy ( target, source, 5 ) ;
//    printf ( "\ntarget string after strcpy( ) = %s", target ) ;
//    return 0;
// }






// Returns 0 if str1 is same as str2. Returns <0 if strl < str2. Returns >0 if str1 > str2
// #include <stdio.h>
// #include <string.h>
// int main( )
// {
//    char str1[ ] = "fresh" ;
//    char str2[ ] = "refresh" ;
//    int i, j, k ;
//    i = strcmp ( str1, "fresh" ) ;
//    j = strcmp ( str1, str2 ) ;
//    k = strcmp ( str1, "f" ) ;
//    printf ( "\n%d %d %d\n", i, j, k ) ;
//    return 0;
// }







// Returns pointer to first occurrence of char in str1 
// #include <stdio.h>
// #include <string.h>
// int main ()
// {
//   char string[55] ="This is a string for testing";
//   char *p;
//   p = strchr (string,'i');
 
//   printf ("Character i is found at position %d\n",p-string+1);
//   printf ("First occurrence of character \"i\" in \"%s\" is" \
//            " \"%s\"\n",string, p);
//    return 0;
// }





// Count the number of occurances of a character in a string, it's in 'k'
// #include <stdio.h>
// #include <string.h>
// int main ()
// {
//   char string[55] ="This is a string for testing";
//   char *p;
//   int k = 1;
//   p = strchr (string,'i');
//   while (p!=NULL)
//   {
//     printf ("Character i found at position %d\n",p-string+1);
//     printf ("Occurrence of character \"i\" : %d \n",k);
//     printf ("Occurrence of character \"i\" in \"%s\" is \"%s" \
//             "\"\n",string, p);
//     p=strchr(p+1,'i');
//     k++;
//   }
//   return 0;
// }





// Returns pointer to first occurrence of str2 in str1
// #include <stdio.h>
// #include <string.h>
// int main ()
// {
//   char string[55] ="This is a test string for testing";
//   char *p;
//   p = strstr (string,"test");
//   if(p)
//   {
//     printf("string found\n" );
//     printf ("First occurrence of string \"test\" in \"%s\" is"\
//            " \"%s\"",string, p);
//   }
//   else printf("string not found\n" );
//    return 0;
// }


