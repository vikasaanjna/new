#include<iostream.h>
#include<conio.h>
void main()               //Start of main
{
  clrscr();
   in i=1, u=1 sum=0;
   while(i<=500)
{

  while(u<=500)
    {
    if(u<i)
     {
      if(i%u==0 )
      sum=sum+u;
     }                          //End of if statement
    
     u++;
   }                           //End of second loop

   if(sum==i)
   {
    cout<<i<<" is a perfect number."<<"\n";
   }

   i++;
   u=1;  sum=0;
 }                             //End of First loop
   getch();
 }                            //End of main
  
