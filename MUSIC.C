#include<stdio.h>
#include<conio.h>
#include<io.h>
#include<string.h>
#include<dos.h>
#include<ctype.h>
#include<process.h>
#include<stdlib.h>
#include<dir.h>
#include<time.h>
int mu(void);
int or(void);
main()
{
int a,b,c,q;
clrscr();
gotoxy(30,12);
printf("welcome to digital music");
delay(1500);
label:
clrscr();
printf("music octaves;1\norgan;2\n Veiw main menu:3\nexit;0");
gotoxy(25,10);
scanf("%d",&a);
if(a==1)
{
q=mu();
if(q==3)
goto label;
}
else if(a==2)
{
q=or();
if(q==3)
goto label;
}
else if(a==0)
{
exit(0);
}

printf("goodbye");
getch();
}


int mu(void)
{
int p;
char x; gotoxy(20,9);
printf("q=do\tw=re\te=mi\tr=fa\tt=so\ty=la\tu=ti\ti=do");gotoxy(35,15);
printf("press any key to continue..");getch();clrscr();
do
{
x=getche();
if(x=='q')
{
sound(256);
delay(200);
nosound();
}
else if(x=='a')
{
sound(256);
delay(600);
nosound();
}
else if(x=='w')
{
sound(288);
delay(200);
nosound();
}
else if(x=='s')
{
sound(288);
delay(600);
nosound();
}
else if(x=='e')
{
sound(320);
delay(200);
nosound();
}
else if(x=='d')
{
sound(320);
delay(600);
nosound();
}
else if(x=='r')
{
sound(341);
delay(200);
nosound();
}
else if(x=='f')
{
sound(341);
delay(600);
nosound();
}
else if(x=='t')
{
sound(384);
delay(200);
nosound();
}
else if(x=='g')
{
sound(384);
delay(600);
nosound();
}

else if(x=='y')
{
sound(427);
delay(200);
nosound();
}
else if(x=='h')
{
sound(427);
delay(600);
nosound();
}

else if(x=='u')
{
sound(480);
delay(200);
nosound();
}
else if(x=='j')
{
sound(480);
delay(600);
nosound();
}
else if(x=='i')
{
sound(512);
delay(200);
nosound();
}
else if(x=='k')
{
sound(512);
delay(600);
nosound();
}
}while(x!='o');
printf("\ncomposition ended!!\n Back:3\n");
scanf("%d",&p);
return p;
}
int or(void)
{
int p;
char x;clrscr();printf("welcome grand piano!!!!!!!!!!!!!!!!!!!!!!!!!!");
delay(1000 );
gotoxy(1,1);
clrscr();
printf("|z||s||x||d||c||v||g||b||h||n||j||m||k|\n");
printf("|_||_||_||_||_||_||_||_||_||_||_||_||_|\n");
printf(" c' c# D  D# E  F  F# G  G# A  A# B  C\n");
do
{
x=getche();
if(x=='z')
{
sound(261.6);
delay(200);
nosound();
}
else if(x=='s')
{
sound(277.2);
delay(200);
nosound();
}
else if(x=='x')
{
sound(293.7);
delay(200);
nosound();
}
else if(x=='d')
{
sound(311.1);
delay(200);
nosound();
}
else if(x=='c')
{
sound(329.6);
delay(200);
nosound();
}
else if(x=='v')
{
sound(349.2);
delay(200);
nosound();
}
else if(x=='g')
{
sound(370);
delay(200);
nosound();
}
else if(x=='b')
{
sound(392);
delay(200);
nosound();
}
else if(x=='h')
{
sound(415.3);
delay(200);
nosound();
}
else if(x=='n')
{
sound(440);
delay(200);
nosound();
}

else if(x=='j')
{
sound(466.2);
delay(200);
nosound();
}
else if(x=='m')
{
sound(493.9);
delay(200);
nosound();
}

else if(x=='k')
{
sound(523.2);
delay(200);
nosound();
}
}while(x!='o');
printf("\ncomposition ended!!\n Back:3\n"); scanf("%d",&p);
return p;
getch();
}
