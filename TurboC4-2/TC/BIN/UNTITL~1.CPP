#include<iostream.h>
#include<stdlib.h>
#include<stdio.h>

#include<conio.h>
#include<fstream.h>
#include<dos.h>
#include<string.h>
int ls;
void newacc();
void notification(char ds[]);
void group(char ds[]);
void profile(char ds[]);
void status(char d[]);
void inbox(char pp[]);
void send(char ll[],char u11[]);
int login(char uname[],char upass[]);
void profile();
void events();
void newacc()
{
int age;
char koo[50],u[50],p[50],dob[20],j[20],k[20],kk[20],lp[20];
ofstream ofobj("acc.txt",ios::ate);
cout<<"\n";
cout<<"ENTER USERNAME:  =";
cin>>u;
strcpy(koo,u);
strcpy(lp,u);
strcpy(j,u);
cout<<"ENTER YOUR AGE:  =";
cin>>age;
cout<<"ENTER PASSWORD:  =";
cin>>p;
cout<<"ENTER D.O.B:     =";
cin>>dob;
strcat(j,p);
cout<<"\n\n"<<j;
ofobj<<"\n"<<j;
strcpy(k,u);
strcat(u,"p");
strcat(u,".txt");
ofstream ofobj1(u,ios::ate);
ofobj1<<"NAME:     ="<<k<<"\n";
ofobj1<<"AGE:      ="<<age<<"\n";
ofobj1<<"D.O.B:    ="<<dob<<"\n";
ofobj1.close();
ofstream ofobj2("events1.txt",ios::ate);
ofobj2<<k<<"      "<<dob<<"\n";
ofobj2.close();
ofstream ofobje("notif.txt",ios::ate);
ofobje<<lp<<" IS NEW ON FACEBOOK SAY 'HELLO' TO THE PERSON;";
ofobje.close();
char s[20];
ifstream ifobjy("no.txt");
while(!ifobjy.eof())
{
ifobjy>>s;
}
int resu= atoi (s);
resu++;
ofstream of("no.txt");
of<<resu;
of.close();
char loo[50];
strcat(koo,"l.txt");
ofstream ofe(koo);
ofe<<"WELCOME TO FACEBOOK;";
ofe.close();
}
int login(char uname[],char upass[])
{
int f;
char k[50];
ifstream ifobj("acc.txt");
/*cout<<"\nenter username";
cin>>uname;
cout<<"\nenter password";
cin>>upass;  */
strcat(uname,upass);
while(!ifobj.eof())
{
ifobj>>k;
if(strcmp(k,uname)==0)
{
f=1;
//cout<<"\n"<<k;
}
}
return f;
}
void inbox(char pp[])
{
char sl;
cout<<"                                    INBOX\n\n";
ifstream ifobj(pp);
while(!ifobj.eof())
{
ifobj.get(sl);
cout<<sl;
if(sl==';')
{
cout<<endl<<endl;
}
}
}
void send(char ll[],char u11[])
{
char data[50],se[20];
cout<<"\nWRITE YOUR MSG:=";
gets(data);
cout<<"MSG SEND TO:=";
cin>>se;
strcat(se,".txt");
strcat(u11,":-");
strcat(u11,data);
ofstream ofobj(se,ios::ate);
ofobj<<u11<<"\n";
for(int i=5;i>=0;i--)
{
clrscr();
cout<<"\n\n\n\n\n\n\n\n         \t\t\tSENDING ";
cout<<".";
delay(300);
cout<<".";
delay(300);
cout<<".";
delay(300);
clrscr();
}
cout<<"\nMSG HAS BEEN SENT";
//cout<<"\n\n"<<u11;
ofobj.close();
}
void profile(char ds[])
{
char l[20],lo,lp[20],ll[20];
cout<<"OPEN PROFILE OF:-";
cin>>l;
strcpy(ll,l);
strcpy(lp,l);
strcat(l,"p");
strcat(l,".txt");
ifstream ifobj(l);
while(!ifobj.eof())
{
ifobj.get(lo);
cout<<lo;
}
int op;
char gh;
strcat(lp,"r.txt");
ifstream ifo(lp);
while(!ifo.eof())
{
ifo.get(gh);
if(gh=='1')
{
cout<<"\n\n1.press for like the status";
cin>>op;
int resu;
char s[20];
if(op==1)
{
ifstream ifobjy("no.txt");
while(!ifobjy.eof())
{
ifobjy>>s;
}
int resu= atoi (s);
resu++;
ofstream of("no.txt");
of<<resu;
of.close();
strcat(ll,"l.txt");
ofstream ofobj(ll,ios::ate);
ofobj<<ds<<" LIKES YOUR STATUS;";
}
else
{
goto x;
}
x:
}
}
}
void events()
{
char ee;
//cout<<"NAME    BIRTHDAY\n\n";
ifstream ifobj("event.txt");
while(!ifobj.eof())
{
ifobj.get(ee);
cout<<ee;
}
}
void status(char d[])
{
char ch[50],y[50];
cout<<"Write your status";
gets(ch);
strcpy(y,d);
strcat(d,"p");
strcat(d,".txt");
ofstream ofobj(d,ios::app);
ofobj<<"\n\nStatus:-\n\n"<<ch;
cout<<ch;
ofobj.close();
strcat(y,"r");
strcat(y,".txt");
//cout<<y;
int l;
l=1;
ofstream ofb(y);
ofb<<l;
ofb.close();
}
void notification(char ds[])
{
char ty;
clrscr();
ifstream ifobj("notif.txt");
while(!ifobj.eof())
{
ifobj.get(ty);
cout<<ty;
if(ty==';')
{
cout<<"\n\n";
}
}
char lq;
strcat(ds,"l.txt");
ifstream d (ds);
while(!d.eof())
{
d.get(lq);
cout<<lq;
if(lq==';')
{
cout<<"\n\n";
}
}
int ll;
ll=0;
ofstream ofobj("no.txt");
ofobj<<ll;
}
void group(char ew[])
{
clrscr();
int chq;
char la[20],lpo[20],mol[20],lps[50],x='y',lpa;
cout<<"\n1.MAKE A NEW GROUP";
cout<<"\n2.OPEN AN EXSISTED GROUP";
cout<<"\n\nENTER YOUR CHOICE=";
cin>>chq;
switch(chq)
{
case 1:
cout<<"\n\nenter group initian";
cin>>mol;
strcpy(la,mol);
strcat(la,"t.txt");
strcpy(lpo,mol);
ofstream ofobj("groups.txt",ios::app);
ofobj<<mol;
ofobj.close();
strcat(lpo,".txt");
while(x!='n')
{
cout<<"\nenter person name";
cin>>lps;
strcat(lps,mol);
//strcat(lpo,".txt");
ofstream ew(lpo,ios::ate);
ew<<lps;
cout<<"\n do you wanna enter more";
cin>>x;
ew.close();
}
ofstream xc(la,ios::ate);
xc<<"welcome:";
xc.close();
break;
case 2:
int flag=0;
char gro[20],k[20],s[20];
cout<<"\n\nENTER YOUR GROUP NAME:=";
cin>>gro;
strcpy(s,gro);
strcat(gro,"t.txt");
ifstream ifg("groups.txt");
while(!ifg.eof())
{
ifg>>k;
if(strcmp(k,s)==0)
{
flag=1;
}
}
if(flag==1)
{
goto r;
}
r:
ifstream id(gro);
clrscr();
while(!id.eof())
{
id.get(lpa);
cout<<lpa;
if(lpa==';')
{
cout<<"\n\n";
}
}
char da[50];
ofstream qw(gro,ios::ate);
cout<<"WRITE MSG:=";
gets(da);
strcat(ew,":-");
strcat(ew,da);
qw<<ew;
break;
}
}
void main()
{
char br,ds[20],f,u1[20],p1[20],d[20],dd[50],ko[50];
int k,ch,cho,i;
clrscr();
j:
zqw:
cout<<"1.CREATE NEW ACCOUNT";
cout<<"\n2.OPEN EXSISTING ACCOUNT";
cout<<"\n\nENTER YOUR CHOICE";
cin>>ch;
clrscr();
switch(ch)
{
case 1:
newacc();
clrscr();
goto j;
break;
case 2:
y:
cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   ";
cout<<"ENTER USERNAME:=";
cin>>u1;
strcpy(ds,u1);
strcpy(d,u1);
strcpy(dd,u1);
cout<<"\n\n\t\t\t   ENTER PASSWORD:=";
cin>>p1;
k=login(u1,p1);
if(k==1)
{
clrscr();
cout<<"login";
goto x;
}
else
{
clrscr();
goto y;
}
break;
}
x:
c:
clrscr();
cout<<"\n1.INBOX MSGS";
cout<<"\n2.SEND MSG";
cout<<"\n3.PROFILE";
cout<<"\n4.UPCOMING EVENTS";
cout<<"\n5.STATUS";
cout<<"\n6.NOTIFICATION( ";
ifstream ifobj("no.txt");
while(!ifobj.eof())
{
ifobj.get(f);
cout<<f;
}
ifobj.close();
cout<<")\n7.GROUPS";
cout<<"\n8.LOGOUT";
cout<<"\n\n\nENTER YOUR CHOICE:=";
cin>>cho;
cout<<d;
strcpy(ko,d);
strcat(d,".txt");
switch(cho)
{
case 1:
clrscr();
inbox(d);
cout<<"\n\n\nDO YOU WANT TO CONTINUE(y/n):=";
cin>>br;
if(br=='y')
{
goto c;
}
else
{
goto z;
}
break;
case 2:
clrscr();
send(d,dd);
cout<<"\n\n\nDO YOU WANT TO CONTINUE(y/n):=";
cin>>br;
if(br=='y')
{
goto c;
}
else
{
goto z;
}

break;
case 3:
clrscr();
profile(ds);
cout<<"\n\n\nDO YOU WANT TO CONTINUE(y/n):=";
cin>>br;
if(br=='y')
{
goto c;
}
else
{
goto z;
}

break;
case 4:
clrscr();
//cout<<"NAME    BIRTHDAY\n\n";
events();
cout<<"\n\n\nDO YOU WANT TO CONTINUE(y/n):=";
cin>>br;
if(br=='y')
{
goto c;
}
else
{
goto z;
}

break;
case 5:
clrscr();
status(ko);
cout<<"\n\n\nDO YOU WANT TO CONTINUE(y/n):=";
cin>>br;
if(br=='y')
{
goto c;
}
else
{
goto z;
}

break;
case 6:
notification(ds);
cout<<"\n\n\nDO YOU WANT TO CONTINUE(y/n):=";
cin>>br;
if(br=='y')
{
goto c;
}
else
{
goto z;
}

break;
case 7:
group(ds);
cout<<"\n\n\nDO YOU WANT TO CONTINUE(y/n):=";
cin>>br;
if(br=='y')
{
goto c;
}
else
{
goto z;
}
break;
case 8:
for( i=5;i>=0;i--)
{
clrscr();
cout<<"\n\n\n\n\n\n\n\n         \t\t\tLOGING OUT ";
cout<<".";
delay(300);
cout<<".";
delay(300);
cout<<".";
delay(300);
clrscr();
}
goto zqw;
break;
z:
}
getch();
}
