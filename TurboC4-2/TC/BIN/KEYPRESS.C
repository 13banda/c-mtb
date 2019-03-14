#include <stdio.h>
#include <bios.h>
#include <ctype.h>
#include<conio.h>
 main()
 {
	int key,i;
	clrscr();
	 for(i=1;i>0;i++)
	{
		if(i==10)
    {
      i=0;
    }
   if(kbhit())
   {
      if( _bios_keybrd(_KEYBRD_READ)==0x1c0d)
       {
       printf("ENTER key is pressed");
       break;
       }
    }
 }
 printf("\ntu hi tu");
    getch();
}


