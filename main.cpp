#include<iostream>
#include<conio.h>
#include<string.h>
#include<fstream>
using namespace std;

int main()
{ int x,y,ch;

do{
cout<<"enter 1 for student class and 2 for batch class";
cin>>x;

switch(x)
 { case 1:
   { 
	do {
  cout<<"\t\t\tSTUDENT DETAILS\nchoose \n1. enter 1 to write \n2. enter 2 to read \n3. enter 3 to search \n4. enter 4 to delete \n5. enter 5 to modify\n";
  cin>>x;
  
  switch(x)
   { case 1:
   	  { cout<<"\t\t\tENTERING DATA\n";
		s1.wtf();
   	    break; }
   	    
   	 case 2:
   	  { cout<<"\t\t\tSTUDENT LIST\n";
		s1.rff();
		s1.findbatch();
   	    break; } 
		   
	 case 3:
   	  { cout<<"\t\t\tSEARCH\n";
		s1.search();
   	    break; }	
		   
	 case 4:
   	  { cout<<"\t\t\tDELETION\n";
		s1.del();
   	    break; }  
	
	case 5:
   	  { cout<<"\t\t\tMODIFICATION\n";
		s1.mod();
   	    break; }  
		   	   
	 default: cout<<"does not exist\n";	      
   }
   
   cout<<"\ncontinue with student class? enter 1 for yes and 2 for no: ";
   cin>>y;
    
     } while(y==1);
     
} break;
   

 case 2:     
  { do{
  cout<<"\n\n\t\t\tBATCH DETAILS\nchoose \n1. enter 1 to write \n2. enter 2 to read \n3. enter 3 to search \n4. enter 4 to delete \n5. enter 5 to modify\n";
  cin>>x;
  
  switch(x)
   { case 1:
   	  { cout<<"\t\t\tENTERING DATA\n";
		b1.wtf();
   	    break; }
   	    
   	 case 2:
   	  { cout<<"\t\t\tBATCH LIST\n";
		b1.rff();
   	    break; } 
		   
	 case 3:
   	  { cout<<"\t\t\tSEARCH\n";
		b1.search();
   	    break; }	
		   
	 case 4:
   	  { cout<<"\t\t\tDELETION\n";
		b1.del();
   	    break; }  
	
	case 5:
   	  { cout<<"\t\t\tMODIFICATION\n";
		b1.mod();
   	    break; }  
		   	   
	 default: cout<<"does not exist\n";	      
   }
   
   cout<<"\ncontinue with batch class? enter 1 for yes and 2 for no: ";
   cin>>y;
    
     } while(y==1);
} break; } 

cout<<"\ncontinue with program? enter 1 for yes and 2 for no: ";
   cin>>y; }while(y==1);
  
}
