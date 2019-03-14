	#include<stdio.h>
	#include<conio.h>
	void ele(int [],int);//find sum of digits
	main()
	{
	  int  	a[100],b,c,i;
	  clrscr();

	printf(" ENTER THE RANGin arrey:");
	scanf("%d",&b);
	for(i=0;i<b;i++)
	{
	  printf("a[%d]=",i);
	  scanf("%d",&a[i]);
	 }


	ele(a,b-1);
      //	printf("sum of digits is =%d",sum);

	getch();
}

void ele(int a[],int b)
{
    int f;

     if(b>=0)
       {	printf("a[%d]=%d",b-1,a[b-1]);

	  ele(a,b-1);
	 }

}



}