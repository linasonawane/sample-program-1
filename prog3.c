/*
Title:-Implementation of program for measuring size of program using Albrecht’s Function Point method. 
Name:-Lina S.Sonawane
Roll No:-55 Div:-B
*/
#include<stdio.h>
#include<math.h>
void main()
{
  int A, B,C ,D, E,factor, ch;
 //char ptype[10];
 float ufc=0,tcf,fp;
 printf("\nExternal \ninput,\nexternal output,\ninquires,\nfiles,\ninternal files");
 scanf("%d%d%d%d%d", &A,&B,&C,&D,&E);
 printf("Ente ur choice ");
 scanf("%d",&ch);
switch(ch)
{
 case 1 :

 ufc=3*A+4*B+3*C+7*D+5*E;
 printf("UFC=%f", ufc);
 break;

 case 2:

 ufc=4*A+5*B+4*C+10*D+7*E;
 printf("%f=",ufc);
 break;

  case 3:
 ufc=6*A+5*B+6*C+10*D+7*E;
 printf("%f= uufc",ufc);
  break;
}
 printf("\nEnter componet of technical complexity factor") ;
 scanf("%d",&factor);
 tcf=0.65+(0.01*factor);
 printf("tcf=%f",tcf);
 fp=ufc*tcf;
 printf("\n albrecht’s function point=%f\n",fp);
}

/*output:
student@student-HCL-Desktop:~$ gcc prog3.c
student@student-HCL-Desktop:~$ ./a.out

External 
input,
external output,
inquires,
files,
internal files 2 2 1 3 3
Ente ur choice  1
UFC=53.000000
Enter componet of technical complexity factor 25
tcf=0.900000
 albrecht’s function point=47.699997
*/
                                                                              


