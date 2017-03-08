// Final Project Milestone 1
// Student defined values tester
// Version 1.0
// Date	2017/03/07
// Author	Fardad Soleimanloo
// Description
// This program test the student implementation of the UI tools
// and Application User Interface for submission.
//
/////////////////////////////////////////////////////////////////
#include <stdio.h>
// tools
void welcome(void);
void prnTitle(void);
void prnFooter(double gTotal);
void clrKyb(void);
void pause(void);
int getInt(void);
double getDbl(void);
int getIntLimited(int lowerLimit, int upperLimit);
double getDblLimited(double lowerLimit, double upperLimit);
// app interface
int yes(void);  
void GrocInvSys(void); 
int menu(void);  


int main(void) {
   int iVal;
   double dVal;
   welcome();

   // uncommnet each tester as you complete the develpment of that section:

   //// testing prnTitle() 
   //printf("listing header and footer with grand total:\n");
   //prnTitle();
   ////---------------------------------------------------------------


   //// Testing prnFooter()  
   //
   //prnFooter(1234.5678);
   //printf("listing header and footer without grand total:\n");
   //prnTitle();
   //prnFooter(-1);
   ////---------------------------------------------------------------

   //// Testing Pause() and clrKyb() 
   //pause();
   ////---------------------------------------------------------------


   //// Testing getInt() 
   //printf("Enter an integer: ");
   //iVal = getInt();
   //printf("You entered: %d\n", iVal);
   ////---------------------------------------------------------------


   //// Testing Get Int Limited 
   //printf("Enter an integer between 10 and 20: ");
   //iVal = getIntLimited(10, 20);
   //printf("Your entered %d\n", iVal);
   ////---------------------------------------------------------------


   //// Testing Get Double 
   //printf("Enter a floating point number: ");
   //dVal = getDbl();
   //printf("You entered: %0.2lf\n", dVal);
   ////---------------------------------------------------------------


   //// Tesing Get Double Limited 
   //printf("Enter a floating point number between 10.00 and 20.00: ");
   //dVal = getDblLimited(10.0, 20.0);
   //printf("You entered: %0.2lf\n", dVal);
   ////---------------------------------------------------------------



   //// testing the App interface
   //GrocInvSys();
   ////---------------------------------------------------------------

   printf("End of tester program for milestone one!\n");
   return 0;
}

