/* Programa en lenguaje C que copia una entrada a la salida, reemplazando tabilaciones retocesos y diagonales invertidas
*Silvina Paula Schreiber
*19/04/2015
*/

#include <stdio.h>

main()
{
  int c;
  
  while ((c=getchar())!= EOF){
  	
  if (c == '\t'){
  	putchar ('\\');
  	putchar ('t');
  }
  
  if (c == '\b'){
  	putchar ('\\');
  	putchar ('b');
  }
  
  if (c == '\\'){
  	putchar ('\\');
  	putchar ('\\');
  }
  
  if ((c != '\t') && (c != '\b') && (c != '\\'))
  putchar(c);
  	
  }
 }
