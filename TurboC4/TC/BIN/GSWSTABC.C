#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
   int n,i;
   char str[100],j;
   clrscr();
   printf("Enter the string-:");
   scanf("%s",&str);
   n=strlen(str);

   for(i=0;i<=n;i++)
   {
      printf("\n");
      switch(str[i])
      {
	case 'a':
	{  printf("a-AK-47"); break;}
	case 'b':
	{  printf("b-Bomb  "); break;}
	case 'c':
	{  printf("c-Criminal  "); break;}
	case 'd':
	{  printf("d-Dog  "); break;}
	case 'e':
	{  printf("e-Easy  "); break;}
	case 'f':
	{  printf("f-Fake  "); break;}
	case 'g':
	{  printf("g-Google  "); break;}
	case 'h':
	{  printf("h-Hament  "); break;}
	case 'i':
	{  printf("i-Iphone  "); break;}
	case 'j':
	{  printf("j-Java  "); break;}
	case 'k':
	{  printf("k-Kingfisher  "); break;}
	case 'l':
	{  printf("l-Lion  "); break;}
	case 'm':
	{  printf("m-MTB  "); break;}
	case 'n':
	{  printf("n-Net"); break;}
	case 'o':
	{  printf("o-Operamini"); break;}
	case 'p':
	{  printf("p-Paper"); break;}
	case 'q':
	{  printf("q-Queen"); break;}
	case 'r':
	{  printf("r-Rocket"); break;}
	case 's':
	{  printf("s-Sir"); break;}
	case 't':
	{  printf("t-Tank"); break;}
	case 'u':
	{  printf("u-Urenium"); break;}
	case 'v':
	{  printf("v-Volvo"); break;}
	case 'w':
	{  printf("w-Water"); break;}
	case 'x':
	{  printf("x-Xaiom"); break;}
	case 'y':
	{  printf("y-Yarr"); break;}
	case 'z':
	{  printf("z-Zabra"); break;}
     }
   }
   getch();
 }