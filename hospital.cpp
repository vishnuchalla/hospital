// HOSPITAL MANAGEMENT SYSTEM
// Devoloped Using C++
/*Features:
 1.Access code Protected System.
 2.Access code Protected Databases.
 3.System Shuts Down When The User Enters Wrong Access code Too Many Times.
 4.Storage of information in files for each session Separately.
 5.User can Modify Any Field in the Database he wants Separately before the end of his session.
 6.User can Display and Delete the entire information in the Database in One Go for each session Separately. 
 7.Generates Bills and Reports of Each Patient.
*/
#ifndef _COLORS_
#define _COLORS_
#define RST  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"
#define FRED(x) KRED x RST
#define FGRN(x) KGRN x RST
#define FYEL(x) KYEL x RST
#define FBLU(x) KBLU x RST
#define FMAG(x) KMAG x RST
#define FCYN(x) KCYN x RST
#define FWHT(x) KWHT x RST
#define BOLD(x) "\x1B[1m" x RST
#define UNDL(x) "\x1B[4m" x RST
#endif
#define ter "sudo apt-get install wmctrl"
#define full "wmctrl -r :ACTIVE: -b add,fullscreen"
#define ef "wmctrl -r :ACTIVE: -b remove,fullscreen"
#define cls "clear"
#define t "date"
#include<iostream>
#include<unistd.h>
#include<string.h>
#include<cstdlib>
#include<stdlib.h>
#include<fstream>
using namespace std;
void xy(int x,int y)
{
 for(int j=0;j<y;j++)
 cout<<"\n";
 for(int i=0;i<x;i++)
 cout<<" ";
}
class hospital
{
 public:
 virtual void data()=0;
 virtual void modify()=0;
};
class patient:public hospital
{static int count;
 static int k;
 string name1;
 int ch,age,bill,sum;
 char datc[20],gua[20],ocu[20],gen,bg[20],dis[20];
 char datt[20],c[20],st[20],str[20],hno[20],phno[20],datd[20];
 public:
 int no;
 char name[20],doc[20];
 void data()
 {
  cout<<FBLU("Enter the file name for storage\n");
  cin>>name1;
  ofstream fout;
  fout.open(name1.c_str());
  xy(45,0);
  cout<<FBLU("**************************************************\n");
  xy(62,0);
  cout<<FRED("PATEINT DETAILS\n");
  xy(45,0);
  cout<<FBLU("**************************************************\n");
  xy(45,0);
  cout<<FRED("Enter the Date of Admission :");
  cin>>datc;
  cout<<"\n";
  xy(45,0);
  cout<<FRED("Enter the time of Appointment :");
  cin>>datt;
  cout<<"\n";
  xy(45,0);
  cout<<FRED("Enter the unique  Registration number of the patient :");
  cin>>no;
  cout<<"\n";
  xy(45,0);
  cout<<FRED("Enter the name of the patient :");
  cin>>name;
  cout<<"\n";
  xy(45,0);
  cout<<FRED("Enter the name of his/her Guardian :");
  cin>>gua;
  cout<<"\n";
  xy(45,0);
  cout<<FRED("Enter the occupation of the patient :");
  cin>>ocu;
  cout<<"\n";
  xy(45,0);
  cout<<FRED("Enter the Gender of patient(Male:M or Female:F) :");
  cin>>gen;
  cout<<"\n";
  xy(45,0);
  cout<<FRED("Enter the Blood Group of the patient :");
  cin>>bg;
  cout<<"\n";
  xy(45,0);
  cout<<FRED("Enter the age of the patient :");
  cin>>age;
  cout<<"\n";
  xy(45,0);
  cout<<"Enter the address of the patient\n";
  cout<<"\n";
  xy(45,0);
  cout<<FRED("Enter the house number :");
  cin>>hno;
  cout<<"\n";
  xy(45,0);
  cout<<FRED("Enter the street/colony :");
  cin>>str;
  cout<<"\n";
  xy(45,0);
  cout<<FRED("Enter the city :");
  cin>>c;
  cout<<"\n";
  xy(45,0);
  cout<<FRED("Enter the state :");
  cin>>st;
  cout<<"\n";
  xy(45,0);
  cout<<FRED("Enter the phone number of the patient :");
  cin>>phno;
  cout<<"\n";
  xy(45,0);
  cout<<FRED("Enter the disease or problem for which he/she wants treatment :");
  cin>>dis;
  cout<<"\n";
  xy(45,0);
  cout<<FRED("Enter the name of his/her doctor :");
  cin>>doc;
  cout<<"\n";
  xy(45,0);
  cout<<FRED("Enter the Fee charged :");
  cin>>bill;
  cout<<"\n";
  xy(45,0);
  cout<<FRED("Enter the Date of discharge :");
  cin>>datd;
  fout<<"             *********************************************************************************************************************************\n";
  fout<<"                                                  Date of Admission: "<<datc<<"\n\n";
  fout<<"                                                  Time of Appointment: "<<datt<<"\n\n";
  fout<<"                                                  Registration number of the patient: "<<no<<"\n\n";
  fout<<"                                                  Name of the patient: "<<name<<"\n\n";
  fout<<"                                                  Name of his/her Guardian: "<<gua<<"\n\n";
  fout<<"                                                  Occupation of the patient: "<<ocu<<"\n\n";
  fout<<"                                                  Gender of patient(Male:M or Female:F):  "<<gen<<"\n\n";
  fout<<"                                                  Blood Group of the patient: "<<bg<<"\n\n";
  fout<<"                                                  Age of the patient: "<<age<<"\n\n";
  fout<<"                                                  Address of the patient:- \n\n";
  fout<<"                                                  House number: "<<hno<<"\n\n";
  fout<<"                                                  street/colony: "<<str<<"\n\n";
  fout<<"                                                  city: "<<c<<"\n\n";
  fout<<"                                                  state: "<<st<<"\n\n";
  fout<<"                                                  Phone number of the patient: "<<phno<<"\n\n";
  fout<<"                                                  Disease or problem for which he/she wants treatment: "<<dis<<"\n\n";
  fout<<"                                                  Name of his/her doctor: "<<doc<<"\n\n";
  fout<<"                                                  Date of discharge: "<<datd<<"\n\n";
  fout<<"            *********************************************************************************************************************************\n";
  fout.close();
}
 inline int reg()
{return this->no;
}
 void modify()
{
  do
  {system(cls);
   cout<<"Enter your choice of modification\n";
  cout<<FRED("1.Date of Admission\n2.Registration number\n3.Name\n4.Name of his/her guardian\n5.occupation of pateint\n6.Gender\n7.Blood Group\n8.Age\n9.Address\n10.Phone number\n11.Disease\n12.Name of his/her doctor and Fee charged\n13.Date of discharge\n14.Time of appointment\n15.exit\n");
  cin>>ch;
  system(cls);
  switch(ch)
 {
   case 1:cout<<FRED("Enter the Date of admission of the patient:\n");
          cin>>datc;
          break;
   case 2:cout<<FRED("Enter the new unique  Registration number of the patient:\n");
          cin>>no;
          break;
   case 3:cout<<FRED("Enter the new name of the patient\n");
          cin>>name;
          break;
   case 4:cout<<FRED("Enter the new guardian name of the patient\n");
          cin>>gua;
          break;
   case 5:cout<<FRED("Enter the occupation of the patient\n");
          cin>>ocu;
          break;
   case 6:cout<<FRED("Enter the Gender of the patient\n");
          cin>>gen;
          break;
   case 7:cout<<FRED("Enter the Blood group of the patient\n");
          cin>>bg;
          break;
   case 8:cout<<FRED("Enter the Age of the patient\n");
          cin>>age;
          break;
   case 9:cout<<"Enter the Address of the patient\n";
          cout<<FRED("Enter the House number\n");
          cin>>hno;
          cout<<FRED("Enter the street/colony \n");
          cin>>str;
          cout<<FRED("Enter the city\n");
          cin>>c;
          cout<<FRED("Enter the state\n");
          cin>>st;
          break;
   case 10:cout<<FRED("Enter the new phone number\n");
           cin>>phno;
           break;
   case 11:cout<<FRED("Enter the disease of the patient\n");
           cin>>dis;
           break;
   case 12:cout<<FRED("Enter the name of his doctor and Fee charged\n");    
           cin>>doc>>bill;
           break;
   case 13:cout<<FRED("Enter the Date of discharge\n");
           cin>>datd;
           break;
   case 14:cout<<FRED("Enter the time of Appointment\n");
           cin>>datt;
           break;
}}while(ch<=14); 
  ofstream fout;
  fout.open(name1.c_str());
  fout<<"             *********************************************************************************************************************************\n";
  fout<<"                                                  Date of Admission: "<<datc<<"\n\n";
  fout<<"                                                  Time of Appointment: "<<datt<<"\n\n";
  fout<<"                                                  Registration number of the patient: "<<no<<"\n\n";
  fout<<"                                                  Name of the patient: "<<name<<"\n\n";
  fout<<"                                                  Name of his/her Guardian: "<<gua<<"\n\n";
  fout<<"                                                  Occupation of the patient: "<<ocu<<"\n\n";
  fout<<"                                                  Gender of patient(Male:M or Female:F):  "<<gen<<"\n\n";
  fout<<"                                                  Blood Group of the patient: "<<bg<<"\n\n";
  fout<<"                                                  Age of the patient: "<<age<<"\n\n";
  fout<<"                                                  Address of the patient:- \n\n";
  fout<<"                                                  House number: "<<hno<<"\n\n";
  fout<<"                                                  street/colony: "<<str<<"\n\n";
  fout<<"                                                  city: "<<c<<"\n\n";
  fout<<"                                                  state: "<<st<<"\n\n";
  fout<<"                                                  Phone number of the patient: "<<phno<<"\n\n";
  fout<<"                                                  Disease or problem for which he/she wants treatment: "<<dis<<"\n\n";
  fout<<"                                                  Name of his/her doctor: "<<doc<<"\n\n";
  fout<<"                                                  Date of discharge: "<<datd<<"\n\n";
  fout<<"            *********************************************************************************************************************************\n";
  fout.close(); 
} 
 void display()
{ cout<<FBLU("             *********************************************************************************************************************************\n");
  cout<<FRED("                                                  Date of Admission: ")<<datc<<"\n\n";
  cout<<FRED("                                                  Time of Appointment: ")<<datt<<"\n\n";
  cout<<FRED("                                                  Registration number of the patient: ")<<no<<"\n\n";
  cout<<FRED("                                                  Name of the patient: ")<<name<<"\n\n";
  cout<<FRED("                                                  Name of his/her Guardian: ")<<gua<<"\n\n";
  cout<<FRED("                                                  Occupation of the patient: ")<<ocu<<"\n\n";
  cout<<FRED("                                                  Gender of patient(Male:M or Female:F):  ")<<gen<<"\n\n";
  cout<<FRED("                                                  Blood Group of the patient: ")<<bg<<"\n\n";
  cout<<FRED("                                                  Age of the patient: ")<<age<<"\n\n";
  cout<<FRED("                                                  Address of the patient:- \n\n");
  cout<<FRED("                                                  House number: ")<<hno<<"\n\n";
  cout<<FRED("                                                  street/colony: ")<<str<<"\n\n";
  cout<<FRED("                                                  city: ")<<c<<"\n\n";
  cout<<FRED("                                                  state: ")<<st<<"\n\n";
  cout<<FRED("                                                  Phone number of the patient: ")<<phno<<"\n\n";
  cout<<FRED("                                                  Disease or problem for which he/she wants treatment: ")<<dis<<"\n\n";
  cout<<FRED("                                                  Name of his/her doctor: ")<<doc<<"\n\n";
  cout<<FRED("                                                  Date of discharge: ")<<datd<<"\n\n";
  cout<<FBLU("            *********************************************************************************************************************************\n");
} 
 inline int displayall()
{ if(no==NULL)
  {count++;}
  else
{ count=0;
  cout<<FBLU("\n             *********************************************************************************************************************************\n");
  cout<<FRED("                                 Sno:         Regno:           Name:           Time of Appointment:      Doctor:\n");
  cout<<"                                  "<<++k<<"           "<<no<<"           "<<name<<"               "<<datt<<"                "<<doc;   
  cout<<FBLU("\n             *********************************************************************************************************************************\n");
}
 return this->count;
}
 void dlt()
 {
  k=0;
 } 
 inline void report()
{
  cout<<FRED("                                                           Patient Report\n");
  cout<<FBLU("             *********************************************************************************************************************************\n");
  cout<<FRED("                                                  Date of Admission: ")<<datc<<"\n\n";
  cout<<FRED("                                                  Registration number of the patient: ")<<no<<"\n\n";
  cout<<FRED("                                                  Name of the patient: ")<<name<<"\n\n";
  cout<<FRED("                                                  Age of the patient: ")<<age<<"\n\n";
  cout<<FRED("                                                  Disease or problem for which he/she wants treatment: ")<<dis<<"\n\n";
  cout<<FRED("                                                  Name of his/her doctor: ")<<doc<<"\n\n";
  cout<<FRED("                                                  Condition of the patient at the time of discharge: ")<<"Recovered"<<"\n\n";
  cout<<FRED("                                                  Date of discharge: ")<<datd<<"\n\n";
  cout<<FBLU("            *********************************************************************************************************************************\n");
}
 inline void billp()
{int n;
 cout<<FRED("Enter the No of days\n");
 cin>>n;
 cout<<FRED("                                                           Patient Fee Charge\n");
 cout<<FBLU("             *********************************************************************************************************************************\n");
 cout<<FRED("                                                   Hospital room charges: ")<<"1000 per day\n\n";
 cout<<FRED("                                                   Hospital Care charges: ")<<"500\n\n";
 cout<<FRED("                                                   Hospital Maintanence Charges: ")<<"500\n\n";
 cout<<FRED("                                                   Patient Individual charge: ")<<bill<<"\n\n";
 sum=(n*(1000+bill)+500+500);
 cout<<FRED("                                                   Total Fee charges : ")<<sum<<"\n\n";
 cout<<FBLU("             *********************************************************************************************************************************\n");
} 
void del()
{
 remove(name1.c_str());
}
}; 
class doctor:public hospital
{static int countd;
 static int k;
 int ch,i,age;
 char qua[20],spe[20],exp[20];
 char hno[20],str[20],c[20],st[20],phno[20];
 public:
 int id;
 char name[20];
 string name1;
 void data()
 {cout<<FBLU("Enter the file name for storage\n");
  cin>>name1;
  ofstream fout;
  fout.open(name1.c_str());
  xy(45,0);
  cout<<FRED("**************************************************\n");
  xy(62,0);
  cout<<FBLU("DOCTOR DETAILS\n");
  xy(45,0);
  cout<<FRED("**************************************************\n");
  xy(45,0);
  cout<<FBLU("Enter the unique  ID of the doctor :");
  cin>>id;
  cout<<"\n";
  xy(45,0);
  cout<<FBLU("Enter the name of the doctor :");
  cin>>name;
  cout<<"\n";
  xy(45,0);
  cout<<FBLU("Enter the age of the doctor :");
  cin>>age;
  cout<<"\n";
  xy(45,0);
  cout<<FBLU("Enter the Qualification of the doctor :");
  cin>>qua;
  cout<<"\n";
  xy(45,0);
  cout<<FBLU("Enter the field of Specification of the doctor :");
  cin>>spe;
  cout<<"\n";
  xy(45,0);
  cout<<FBLU("Enter the experience of the doctor :");
  cin>>exp;
  cout<<"\n";
  xy(45,0);
  cout<<"Enter the address of the doctor :-";
  cout<<"\n";
  xy(45,0);
  cout<<FBLU("Enter the house number :");
  cin>>hno;
  cout<<"\n";
  xy(45,0);
  cout<<FBLU("Enter the street/colony :");
  cin>>str;
  cout<<"\n";
  xy(45,0);
  cout<<FBLU("Enter the city :");
  cin>>c;
  cout<<"\n";
  xy(45,0);
  cout<<FBLU("Enter the state :");
  cin>>st;
  cout<<"\n";
  xy(45,0);
  cout<<FBLU("Enter the phone number of the doctor :");
  cin>>phno;
  fout<<"             *********************************************************************************************************************************\n";
  fout<<"                                                  ID of the doctor: "<<id<<"\n\n";
  fout<<"                                                  Name of the doctor: "<<name<<"\n\n";
  fout<<"                                                  Age of the doctor: "<<age<<"\n\n";
  fout<<"                                                  Qualification of the doctor: "<<qua<<"\n\n";
  fout<<"                                                  Field of Specification of the doctor: "<<spe<<"\n\n";
  fout<<"                                                  Experience of the doctor: "<<exp<<"\n\n";
  fout<<"                                                  Address of the doctor:- \n\n";
  fout<<"                                                  House number: "<<hno<<"\n\n";
  fout<<"                                                  street/colony: "<<str<<"\n\n";
  fout<<"                                                  city: "<<c<<"\n\n";
  fout<<"                                                  state: "<<st<<"\n\n";
  fout<<"                                                  Phone number of the doctor: "<<phno<<"\n\n";
  fout<<"            *********************************************************************************************************************************\n";
 fout.close();
 }
 inline int reg()
{
 return this->id;
}
 void modify()
{ 
  do
  {system(cls);
  cout<<"Enter your choice of modification\n";
  cout<<FBLU("1.ID:\n2.Name:\n3.Age:\n4.Qualification:\n5.Specification:\n6.Experience:\n7.Address:\n8.Phone number:\n9.Exit\n");
  cin>>ch;
  system(cls);
  switch(ch)
 {
   case 1:cout<<FBLU("Enter the new unique  ID of the doctor\n");
          cin>>id;
          break;
   case 2:cout<<FBLU("Enter the new name of the doctor\n");
          cin>>name;
          break;
   case 3:cout<<FBLU("Enter the Age of the doctor\n");
          cin>>age;
          break;
   case 4:cout<<FBLU("Enter the Qualification of the doctor\n");
          cin>>qua;
          break;
   case 5:cout<<FBLU("Enter the field of specification of the doctor\n");
          cin>>spe;
          break;
   case 6:cout<<FBLU("Enter the experience of the doctor\n");
          cin>>exp;
          break;
   case 7:cout<<"Enter the Address of the doctor\n";
          cout<<FBLU("Enter the House number\n");
          cin>>hno;
          cout<<FBLU("Enter the street/colony \n");
          cin>>str;
          cout<<FBLU("Enter the city\n");
          cin>>c;
          cout<<FBLU("Enter the state\n");
          cin>>st;
          break;
   case 8:cout<<FBLU("Enter the new phone number\n");
          cin>>phno;
          break;
}}while(ch<=8); 
 ofstream fout;
 fout.open(name1.c_str()); 
  fout<<"             *********************************************************************************************************************************\n";
  fout<<"                                                  ID of the doctor: "<<id<<"\n\n";
  fout<<"                                                  Name of the doctor: "<<name<<"\n\n";
  fout<<"                                                  Age of the doctor: "<<age<<"\n\n";
  fout<<"                                                  Qualification of the doctor: "<<qua<<"\n\n";
  fout<<"                                                  Field of Specification of the doctor: "<<spe<<"\n\n";
  fout<<"                                                  Experience of the doctor: "<<exp<<"\n\n";
  fout<<"                                                  Address of the doctor:- \n\n";
  fout<<"                                                  House number: "<<hno<<"\n\n";
  fout<<"                                                  street/colony: "<<str<<"\n\n";
  fout<<"                                                  city: "<<c<<"\n\n";
  fout<<"                                                  state: "<<st<<"\n\n";
  fout<<"                                                  Phone number of the doctor: "<<phno<<"\n\n";
  fout<<"            *********************************************************************************************************************************\n";
 fout.close();
 
} 
  void display()
{ cout<<FRED("             *********************************************************************************************************************************\n");
  cout<<FBLU("                                                  ID of the doctor: ")<<id<<"\n\n";
  cout<<FBLU("                                                  Name of the doctor: ")<<name<<"\n\n";
  cout<<FBLU("                                                  Age of the doctor: ")<<age<<"\n\n";
  cout<<FBLU("                                                  Qualification of the doctor: ")<<qua<<"\n\n";
  cout<<FBLU("                                                  Field of Specification of the doctor: ")<<spe<<"\n\n";
  cout<<FBLU("                                                  Experience of the doctor: ")<<exp<<"\n\n";
  cout<<FBLU("                                                  Address of the doctor:- \n\n");
  cout<<FBLU("                                                  House number: ")<<hno<<"\n\n";
  cout<<FBLU("                                                  street/colony: ")<<str<<"\n\n";
  cout<<FBLU("                                                  city: ")<<c<<"\n\n";
  cout<<FBLU("                                                  state: ")<<st<<"\n\n";
  cout<<FBLU("                                                  Phone number of the doctor: ")<<phno<<"\n\n";
  cout<<FRED("            *********************************************************************************************************************************\n");
} 
 inline int displayall()
{ 
  if(id==NULL)
  countd++;
  else
  {countd=0;
  cout<<FRED("\n             *********************************************************************************************************************************\n");
  cout<<FBLU("                           Sno:     ID:     Name:         Specializaton:        Age:      Experience:\n");
  cout<<"                           "<<++k<<"        "<<id<<"   "<<name<<"        "<<spe<<"                 "<<age<<"         "<<exp;
  cout<<FRED("\n             *********************************************************************************************************************************\n");
}return this->countd;}
  void dlt()
{
 k=0;
}
 void del()
{
 remove(name1.c_str());
}
};
class staff:public hospital
{static int countw;
 static int kw;
 int ch,i,age;
 char sal[20],exp[20];
 char hno[20],str[20],c[20],st[20],phno[20];
 public:
 string name1;
 int id;
 char name[20];
  void data()
 {cout<<FBLU("Enter the file name for storage\n");
  cin>>name1;
  ofstream fout;
  fout.open(name1.c_str());
  xy(45,0);
  cout<<FYEL("**************************************************\n");
  xy(62,0);
  cout<<FGRN("EMPLOYEE DETAILS\n");
  xy(45,0);
  cout<<FYEL("**************************************************\n");
  xy(45,0);
  cout<<FGRN("Enter the unique  ID of the employee :");
  cin>>id;
  cout<<"\n";
  xy(45,0);
  cout<<FGRN("Enter the name of the employee :");
  cin>>name;
  cout<<"\n";
  xy(45,0);
  cout<<FGRN("Enter the age of the employee :");
  cin>>age;
  cout<<"\n";
  xy(45,0);
  cout<<FGRN("Enter the salary of the employee :");
  cin>>sal;
  cout<<"\n";
  xy(45,0);
  cout<<FGRN("Enter the experience of the employee :");
  cin>>exp;
  cout<<"\n";
  xy(45,0);
  cout<<"Enter the address of the employee :-";
  cout<<"\n";
  xy(45,0);
  cout<<FGRN("Enter the house number :");
  cin>>hno;
  cout<<"\n";
  xy(45,0);
  cout<<FGRN("Enter the street/colony :");
  cin>>str;
  cout<<"\n";
  xy(45,0);
  cout<<FGRN("Enter the city :");
  cin>>c;
  cout<<"\n";
  xy(45,0);
  cout<<FGRN("Enter the state :");
  cin>>st;
  cout<<"\n";
  xy(45,0);
  cout<<FGRN("Enter the phone number of the employee :");
  cin>>phno;
  fout<<"             *********************************************************************************************************************************\n";
  fout<<"                                                  ID of the employee: "<<id<<"\n\n";
  fout<<"                                                  Name of the employee: "<<name<<"\n\n";
  fout<<"                                                  Age of the employee: "<<age<<"\n\n";
  fout<<"                                                  salary of the employee: "<<sal<<"\n\n";
  fout<<"                                                  Experience of the employee: "<<exp<<"\n\n";
  fout<<"                                                  Address of the employee:- \n\n";
  fout<<"                                                  House number: "<<hno<<"\n\n";
  fout<<"                                                  street/colony: "<<str<<"\n\n";
  fout<<"                                                  city: "<<c<<"\n\n";
  fout<<"                                                  state: "<<st<<"\n\n";
  fout<<"                                                  Phone number of the employee: "<<phno<<"\n\n";
  fout<<"            *********************************************************************************************************************************\n";
  fout.close();
 }
 inline int reg()
{
 return this->id;
}
 
 void modify()
{ 
  do
  {system(cls);
  cout<<"Enter your choice of modification\n";
  cout<<FGRN("1.ID:\n2.Name:\n3.Age:\n4.salary\n5.Experience:\n6.Address:\n7.Phone number:\n8.Exit\n");
  cin>>ch;
  system(cls);
  switch(ch)
 {
   case 1:cout<<FGRN("Enter the new unique  ID of the employee\n");
          cin>>id;
          break;
   case 2:cout<<FGRN("Enter the new name of the employee\n");
          cin>>name;
          break;
   case 3:cout<<FGRN("Enter the Age of the employee\n");
          cin>>age;
          break;
   case 4:cout<<FGRN("Enter the salary of the employee\n");
          cin>>sal;
          break;
   case 5:cout<<FGRN("Enter the experience of the employee\n");
          cin>>exp;
          break;
   case 6:cout<<"Enter the Address of the patient\n";
          cout<<FGRN("Enter the House number\n");
          cin>>hno;
          cout<<FGRN("Enter the street/colony \n");
          cin>>str;
          cout<<FGRN("Enter the city\n");
          cin>>c;
          cout<<FGRN("Enter the state\n");
          cin>>st;
          break;
   case 7:cout<<FGRN("Enter the new phone number\n");
          cin>>phno;
          break;
}}while(ch<=7);  
 ofstream fout;
 fout.open(name1.c_str());
  fout<<"             *********************************************************************************************************************************\n";
  fout<<"                                                  ID of the employee: "<<id<<"\n\n";
  fout<<"                                                  Name of the employee: "<<name<<"\n\n";
  fout<<"                                                  Age of the employee: "<<age<<"\n\n";
  fout<<"                                                  salary of the employee: "<<sal<<"\n\n";
  fout<<"                                                  Experience of the employee: "<<exp<<"\n\n";
  fout<<"                                                  Address of the employee:- \n\n";
  fout<<"                                                  House number: "<<hno<<"\n\n";
  fout<<"                                                  street/colony: "<<str<<"\n\n";
  fout<<"                                                  city: "<<c<<"\n\n";
  fout<<"                                                  state: "<<st<<"\n\n";
  fout<<"                                                  Phone number of the employee: "<<phno<<"\n\n";
  fout<<"            *********************************************************************************************************************************\n";
  fout.close();
} 
 void display()
{ cout<<FYEL("             *********************************************************************************************************************************\n");
  cout<<FGRN("                                                  ID of the employee: ")<<id<<"\n\n";
  cout<<FGRN("                                                  Name of the employee: ")<<name<<"\n\n";
  cout<<FGRN("                                                  Age of the employee: ")<<age<<"\n\n";
  cout<<FGRN("                                                  salary of the employee: ")<<sal<<"\n\n";
  cout<<FGRN("                                                  Experience of the employee: ")<<exp<<"\n\n";
  cout<<FGRN("                                                  Address of the employee:- \n\n");
  cout<<FGRN("                                                  House number: ")<<hno<<"\n\n";
  cout<<FGRN("                                                  street/colony: ")<<str<<"\n\n";
  cout<<FGRN("                                                  city: ")<<c<<"\n\n";
  cout<<FGRN("                                                  state: ")<<st<<"\n\n";
  cout<<FGRN("                                                  Phone number of the employee: ")<<phno<<"\n\n";
  cout<<FYEL("            *********************************************************************************************************************************\n");
} 
 inline int displayall()
{ 
  if(id==NULL)
  countw++;
  else
  {countw=0;
  cout<<FYEL("\n             *********************************************************************************************************************************\n");
  cout<<FGRN("                           Sno:     ID:     Name:         Salary:        Age:      Experience:\n");
  cout<<"                           "<<++kw<<"        "<<id<<"   "<<name<<"        "<<sal<<"           "<<age<<"         "<<exp;
  cout<<FYEL("\n             *********************************************************************************************************************************\n");
}return this->countw;}
void dlt()
{
 kw=0;
}
void del()
{
 remove(name1.c_str());
}
};
class medicine:public hospital
{static int countm;
 static int km;
 int ch,i;
 int pri,qua,amount;
 public:
 int id;
 string name1;
 char name[20];
 void data()
 {cout<<FBLU("Enter the file name for storage\n");
  cin>>name1;
  ofstream fout;
  fout.open(name1.c_str());
  xy(45,0);
  cout<<FGRN("**************************************************\n");
  xy(62,0);
  cout<<FYEL("INVENTORY DETAILS\n");
  xy(45,0);
  cout<<FGRN("**************************************************\n");
  xy(45,0);
  cout<<FYEL("Enter the R.no of the Item :");
  cin>>id;
  cout<<"\n";
  xy(45,0);
  cout<<FYEL("Enter the name of the Item :");
  cin>>name;
  cout<<"\n";
  xy(45,0);
  cout<<FYEL("Enter the quantity of the Item :");
  cin>>qua;
  cout<<"\n";
  xy(45,0);
  cout<<FYEL("Enter the price of the Item :");
  cin>>pri;
  amount=pri*qua;
  fout<<"             *********************************************************************************************************************************\n";
  fout<<"                                                  R.no of the Item: "<<id<<"\n\n";
  fout<<"                                                  Name of the Item: "<<name<<"\n\n";
  fout<<"                                                  Quantity of the Item: "<<qua<<"\n\n";
  fout<<"                                                  Price of the Item: "<<pri<<"\n\n";
  fout<<"                                                  Total Amount of the Item: "<<amount<<"\n\n";
  fout<<"            *********************************************************************************************************************************\n";
  fout.close();
}
 inline int reg()
{
 return this->id;
}
 void modify()
{ 
  do
  {system(cls);
  cout<<"Enter your choice of modification\n";
  cout<<FYEL("1.R.no:\n2.Name:\n3.Quantity:\n4.Price:\n5.Exit:\n");
  cin>>ch;
  system(cls);
  switch(ch)
 {
   case 1:cout<<FYEL("Enter the new R.no of the Item\n");
          cin>>id;
          break;
   case 2:cout<<FYEL("Enter the new name of the Item\n");
          cin>>name;
          break;
   case 3:cout<<FYEL("Enter the Quantity of the Item\n");
          cin>>qua;
          amount=pri*qua;
          break;
   case 4:cout<<FYEL("Enter the Price of the Item\n");
          cin>>pri;
          amount=pri*qua;
          break;
}}while(ch<=4);  
 ofstream fout;
 fout.open(name1.c_str());
  fout<<"             *********************************************************************************************************************************\n";
  fout<<"                                                  R.no of the Item: "<<id<<"\n\n";
  fout<<"                                                  Name of the Item: "<<name<<"\n\n";
  fout<<"                                                  Quantity of the Item: "<<qua<<"\n\n";
  fout<<"                                                  Price of the Item: "<<pri<<"\n\n";
  fout<<"                                                  Total Amount of the Item: "<<amount<<"\n\n";
  fout<<"            *********************************************************************************************************************************\n";
  fout.close();
} 
  void display()
{ cout<<FGRN("             *********************************************************************************************************************************\n");
  cout<<FYEL("                                                  R.no of the Item: ")<<id<<"\n\n";
  cout<<FYEL("                                                  Name of the Item: ")<<name<<"\n\n";
  cout<<FYEL("                                                  Quantity of the Item: ")<<qua<<"\n\n";
  cout<<FYEL("                                                  Price of the Item: ")<<pri<<"\n\n";
  cout<<FYEL("                                                  Total Amount of the Item: ")<<amount<<"\n\n";
  cout<<FGRN("            *********************************************************************************************************************************\n");
} 
 inline int displayall()
{ 
  if(id==NULL)
  countm++;
  else
  {countm=0;
  cout<<FGRN("\n             *********************************************************************************************************************************\n");
  cout<<FYEL("                           Sno:     R.no:     Name:         Quantity:   Price:      Total Amount:\n");
  cout<<"                           "<<++km<<"        "<<id<<"   "<<name<<"        "<<qua<<"           "<<pri<<"         "<<amount;
  cout<<FGRN("\n             *********************************************************************************************************************************\n");
}return this->countm;}
void dlt()
{
 km=0;
}
void del()
{
 remove(name1.c_str());
}
};
int patient::count=0;
int patient::k=0;
int doctor::k=0;
int doctor::countd=0;
int staff::countw=0;
int staff::kw=0;
int medicine::countm=0;
int medicine::km=0;
main()
{patient *pa[1000];
 doctor *d[100];
 staff *w[100];
 medicine *m[1000];
 int count=0,countp,i=0,n=0,ch,c,no;
 int flag=0,countd,fla=0,fl,fd=0,f=0;
 int id=0,nd=0,flagd=0,flad=0,fld=0;
 int flar=0,flab=0,countwf=0,fw=0;
 int iw=0,nw=0,flagw=0,flaw=0,flw,fp;
 int countmd=0,nm=0,im=0,flagm=0;
 int flam=0,flm,fm=0,countnp=0,countmnp=0;
 int countrnp=0,countpnp=0,countprnp=0,countmrnp=0;
 int countdnp=0,countdrnp=0,countwfnp=0,countwfrnp=0;
 char *s,*ps,*ds,k,*name;
 char np[20],rnp[20],pnp[20],prnp[20],mnp[20];
 char dnp[20],drnp[20],wfnp[20],wfrnp[20],mrnp[20];
 char *wf,*mc;
 char p[20],pat[20],doc[20],wsf[20],mdc[20];
 system(ter);
 system(full);
 ifstream fin;
 fin.open("password.txt");
 fin>>fp;
 fin.close();
 if(fp==0)
 {
 ofstream fout;
 fout.open("password.txt");
 cout<<FMAG("Set the Access codes for each Database and Restart the application\n");
 cout<<FCYN("Set a Access code for the management system\n");
 cin>>p;
 fout<<p<<"\n";
 cout<<FRED("Set a Access code for the Patients Database\n");
 cin>>pat;
 fout<<pat<<"\n";
 cout<<FBLU("Set a Access code for the Doctors Database\n");
 cin>>doc;
 fout<<doc<<"\n";
 cout<<FGRN("Set a Access code for the Working staff Database\n");
 cin>>wsf;
 fout<<wsf<<"\n";
 cout<<FYEL("Set a Access code for the Inventory Database\n");
 cin>>mdc;
 fout<<mdc<<"\n";
 if(p==NULL||pat==NULL||doc==NULL||wsf==NULL||mdc==NULL)
 fp=0;
 fout<<fp<<"\n";
 fout.close();}
 else
 {
 ifstream fin;
 fin.open("password.txt");
 fin>>p;
 fin>>pat;
 fin>>doc;
 fin>>wsf;
 fin>>mdc;
 fin.close();
 abc:
 s=getpass("Enter the Access code of the Management system:\n ");
 if(strcmp(s,p)==0)
 {system(cls);
 cout<<FCYN("Access Granted\n\n"); 
 abcr:
 do{
 system(t);
 cout<<BOLD(FGRN("                        ******************************************************************************             \n"));
 cout<<BOLD(FRED("                                                            ******                                                  \n"));
 cout<<BOLD(FRED("                                                    *********    *********                                        \n"));
 cout<<BOLD(FYEL("                        @~~~~~~~~~~~~~~~~~~~~~~~~~~~"));
 cout<<BOLD(FRED("*"));
 cout<<BOLD(FWHT("Hospital  Management"));
 cout<<BOLD(FRED("*"));
 cout<<BOLD(FYEL("~~~~~~~~~~~~~~~~~~~~~~~~~~~@             \n"));
 cout<<BOLD(FRED("                                                    *********    *********                                           \n"));
 cout<<BOLD(FRED("                                                            ******                                                  \n"));
 cout<<BOLD(FGRN("                        ******************************************************************************             \n"));
 cout<<FRED("                                                         1.Patients\n");
 cout<<FBLU("                                                         2.Doctors\n");
 cout<<FGRN("                                                         3.Working staff\n");
 cout<<FYEL("                                                         4.Inventory\n");
 cout<<FCYN("                                                         5.Reset Access code\n");
 cout<<FMAG("                                                         6.ShutDown\n");
 cout<<"Enter your choice from Hospital management block\n";
 cin>>c;
 system(cls);
 switch(c)
 {
  case 1:countp=0;
         abcd:
         ps=getpass("Enter the Access code of the Patient Database:\n ");
         if(strcmp(ps,pat)==0)
         {system(cls);
         cout<<FCYN("Access Granted\n\n");
         abcp:
         do
         {
         system(t);
         cout<<FRED("                                                          WELCOME TO PATIENTS DATABASE\n");
         cout<<FBLU("             *********************************************************************************************************************************\n");
         cout<<FRED("                                                  Enter your choice:\n");
         cout<<FRED("                                                  1.Enter data of a new patient\n");
         cout<<FRED("                                                  2.Modify data of already existing patient\n");
         cout<<FRED("                                                  3.Display data of an existing patient\n");
         cout<<FRED("                                                  4.Display the list of all the patients in the hospital\n");
         cout<<FRED("                                                  5.Delete the record of a patient\n");
         cout<<FRED("                                                  6.Delete the records of all the patients in the hospital\n");
         cout<<FRED("                                                  7.Generate the report of a patient\n");
         cout<<FRED("                                                  8.Generate the bill of a patient\n");
         cout<<FRED("                                                  9.Reset Access code of the database\n");
         cout<<FRED("                                                  10.Exit\n");
         cout<<FBLU("             *********************************************************************************************************************************\n");
         cin>>ch;
         switch(ch)
        {
        case 1: system(cls);
                pa[i]=new class patient();
                pa[i]->data();
                i++;
                n++;
                system(cls);
                goto abcp;
                break;
        case 2: system(cls);
                flag=0;
                cout<<"Enter the unique  registration number of the patient for modification\n";
                cin>>no;
                for(i=0;i<n;i++)
                {if(no==pa[i]->reg())
                 pa[i]->modify();
                 else
                 flag++;
                }
                if(flag==n)
                cout<<FMAG("Patient not found in the database\n");
                cout<<FMAG("Press ENTER to continue.....\n");
                cin.ignore();
                cin.get();
                system(cls);
                goto abcp;
                break;
        case 3: fla=0;
                system(cls);
                cout<<"Enter the unique  registration number of the patient for display\n";
                cin>>no;
                for(i=0;i<n;i++)
                {if(no==pa[i]->reg())
                pa[i]->display();
                else
                fla++;
                }
                if(fla==n)
                cout<<FMAG("Patient not found\n");
                cout<<FMAG("Press ENTER to continue.....\n");
                cin.ignore();
                cin.get();
                system(cls);
                goto abcp;
                break;
        case 4: system(cls);
                for(i=0;i<n;i++)
                {
                if(i<n)
                {fl=pa[i]->displayall();}
                }
                if(fl>=n)
                cout<<FMAG("No patients found\n");
                cout<<FMAG("Press ENTER to continue.....\n");
                cin.ignore();
                cin.get();
                system(cls);
                pa[i]->dlt();
                goto abcp;
                break;   
        case 5:f=0;
               system(cls);
               cout<<"Enter the unique  registration number of the patient for deletion\n";
               cin>>no;
               for(i=0;i<n;i++)
               {if(no==pa[i]->reg())
               {pa[i]->no=NULL;
                pa[i]->dlt();
                pa[i]->del();}
               else
               f++;
               }
               if(f==n)
               cout<<FMAG("Patient not found in the database\n");
               cout<<FMAG("Press ENTER to continue.....\n");
               cin.ignore();
               cin.get();
               system(cls);
               goto abcp;
               break;
        case 6: system(cls);
                for(i=0;i<n;i++)
                {if(i<n)
                {pa[i]->no=NULL;
                 pa[i]->del();}
                 }
                cout<<FMAG("All the Patients information is erased from the database\n");
                cout<<FMAG("Press ENTER to continue.....\n");
                cin.ignore();
                cin.get();
                system(cls);
                goto abcp;
                break;   
        case 7: flar=0;
                system(cls);
                cout<<"Enter the unique  registration number of the patient for Report\n";
                cin>>no;
                for(i=0;i<n;i++)
                {if(no==pa[i]->reg())
                pa[i]->report();
                else
                flar++;
                }
                if(flar==n)
                cout<<FMAG("Patient not found\n");
                cout<<FMAG("Press ENTER to continue.....\n");
                cin.ignore();
                cin.get();
                system(cls);
                goto abcp;
                break;
        case 8: flab=0;
                system(cls);
                cout<<"Enter the unique  registration number of the patient for Bill Details\n";
                cin>>no;
                for(i=0;i<n;i++)
                {if(no==pa[i]->reg())
                pa[i]->billp();
                else
                flab++;
                }
                if(flab==n)
                cout<<FMAG("Patient not found\n");
                cout<<FMAG("Press ENTER to continue.....\n");
                cin.ignore();
                cin.get();
                system(cls);
                goto abcp;
                break;
        case 9:system(cls);
               countpnp=0;
               countprnp=0; 
               abcpnp:
               s=getpass("Enter the old Access code\n");
               if(strcmp(s,pat)==0)
               {
               cout<<FMAG("Enter the new Access code\n");
               cin>>pnp;
               cout<<FMAG("Reenter the new Access code\n");
               cin>>prnp;
               if(strcmp(pnp,prnp)==0)
               {strcpy(pat,pnp);
                ofstream fout;
                fout.open("password.txt");
                fout<<p<<"\n";
                fout<<pat<<"\n";
                fout<<doc<<"\n";
                fout<<wsf<<"\n";
                fout<<mdc<<"\n";
                fout.close();
                goto abcd;}
               else
               {cout<<FMAG("The above Access codes do not match\n");
                countprnp++;
               if(countprnp==3)
               {cout<<FRED("Closing due to many wrong attempts\n");
                system(cls);
                goto abcr;}
                cout<<FMAG("Try again\n");
                goto abcpnp;}}
               else
               {cout<<FMAG("Access code cannot be changed\n");
               countpnp++;
               if(countpnp==3)
               {cout<<FRED("Closing due to many wrong attempts\n");
               system(cls);
               goto abcr;}}
               goto abcpnp;
        case 10:system(cls);
               goto abcr;
               break;
        default:system(cls);
                cout<<FMAG("invalid choice\n");
                cout<<FMAG("Enter a valid one\n");
                break;
        }}while(ch>=10);
        }
        else
       {cout<<FMAG("Access  Denied\n");
        cout<<FMAG("Please Try again\n");
        countp++;
        if(countp==3)
        {cout<<FRED("Closing due to many wrong attempts\n");
         system(cls);
         goto abcr;
        }
        goto abcd;}
         break;
  case 2:countd=0;
         abcdd:
         ds=getpass("Enter the Access code of the Doctor Database:\n ");
         if(strcmp(ds,doc)==0)
         {system(cls);
         cout<<FCYN("Access Granted\n\n");
         dd:
         do
         {system(t);
         cout<<FBLU("                                                          WELCOME TO DOCTORS DATABASE\n");
         cout<<FRED("             *********************************************************************************************************************************\n");
         cout<<FBLU("                                                  Enter your choice:\n");
         cout<<FBLU("                                                  1.Enter data of a new Doctor\n");
         cout<<FBLU("                                                  2.Modify data of already existing Doctor\n");
         cout<<FBLU("                                                  3.Display data of an existing Doctor\n");
         cout<<FBLU("                                                  4.Display the list of all the Doctors in the hospital\n");
         cout<<FBLU("                                                  5.Delete the data of a Doctor\n");
         cout<<FBLU("                                                  6.Delete the data of all the Doctors\n");
         cout<<FBLU("                                                  7.Reset the Access code for the Database\n");
         cout<<FBLU("                                                  8.Exit\n");
         cout<<FRED("             *********************************************************************************************************************************\n");
         cin>>ch;
         switch(ch)
         {
         case 1:system(cls);
                d[id]=new class doctor();
                d[id]->data();
                id++;
                nd++;
                system(cls);
                goto dd;
                break;
         case 2:system(cls);
                flagd=0;
                cout<<"Enter the unique  ID of the doctor for modification\n";
                cin>>no;
                for(id=0;id<nd;id++)
                {if(no==(d[id]->reg()))
                 d[id]->modify();
                 else
                 flagd++;
                }
                if(flagd==nd)
                cout<<FMAG("doctor not found\n");
                cout<<FMAG("Press ENTER to continue.....\n");
                cin.ignore();
                cin.get();
                system(cls);
                goto dd;
                break;
         case 3:flad=0; 
                system(cls);
                cout<<"Enter the unique  ID of the doctor for display\n";
                cin>>no;
                for(id=0;id<nd;id++)
                {if(no==(d[id]->reg()))
                d[id]->display();
                else
                flad++;
                }
                if(flad==nd)
                cout<<FMAG("doctor not found\n");
                cout<<FMAG("Press ENTER to continue.....\n");
                cin.ignore();
                cin.get();
                system(cls);
                goto dd;
                break;
         case 4:system(cls);
                for(id=0;id<nd;id++)
                {if(id<nd)
                fld=d[id]->displayall();
                }
                if(fld>=nd)
                cout<<FMAG("No doctors found\n");
                cout<<FMAG("Press ENTER to continue.....\n");
                cin.ignore();
                cin.get();
                d[id]->dlt();
                system(cls);
                goto dd;
                break;
         case 5:fd=0;
                system(cls);
                cout<<"Enter the unique  ID of the doctor for deletion\n";
                cin>>no;
                for(id=0;id<nd;id++)
                {if(no==(d[id]->reg()))
                {d[id]->id=NULL;
                 d[id]->dlt();
                 d[id]->del();
                }
                else
                fd++;
                }
                if(fd==nd)
                cout<<FMAG("doctor not found\n");
                cout<<FMAG("Press ENTER to continue.....\n");
                cin.ignore();
                cin.get();
                system(cls);
                goto dd;
                break;
         case 6:system(cls);
                for(id=0;id<nd;id++)
                {if(id<nd)
                {d[id]->id=NULL;
                 d[id]->del();}
                 }
                cout<<FMAG("All the Doctors information is erased from the database\n");
                cout<<FMAG("Press ENTER to continue.....\n");
                cin.ignore();
                cin.get();
                system(cls);
                goto dd;
                break;
         case 7:system(cls);
                countdnp=0;
                countdrnp=0;
               abcdnp:
               s=getpass("Enter the old Access code\n");
               if(strcmp(s,doc)==0)
               {
               cout<<FMAG("Enter the new Access code\n");
               cin>>dnp;
               cout<<FMAG("Reenter the new Access code\n");
               cin>>drnp;
               if(strcmp(dnp,drnp)==0)
               {strcpy(doc,dnp);
                ofstream fout;
                fout.open("password.txt");
                fout<<p<<"\n";
                fout<<pat<<"\n";
                fout<<doc<<"\n";
                fout<<wsf<<"\n";
                fout<<mdc<<"\n";
                fout.close();
                goto abcdd;}
               else
               {cout<<FMAG("The above Access codes do not match\n");
                countdrnp++;
               if(countdrnp==3)
               {cout<<FRED("Closing due to many wrong attempts\n");
                system(cls);
                goto abcr;}
                cout<<FMAG("Try again\n");
                goto abcdnp;}}
               else
               {cout<<FMAG("Access code cannot be changed\n");
               countdnp++;
               if(countdnp==3)
               {cout<<FRED("Closing due to many wrong attempts\n");
               system(cls);
               goto abcr;}}
               goto abcdnp;
         case 8:system(cls);
                goto abcr;
                break;
         default:system(cls);
                cout<<FMAG("invalid choice\n");
                cout<<FMAG("Enter a valid one\n"); 
                break;         
        }}while(ch>=8);
         }
         else
       {cout<<FMAG("Access  Denied\n");
        cout<<FMAG("Please Try again\n");
        countd++;
        if(countd==3)
        {cout<<FRED("Closing due to many wrong attempts\n");
         system(cls);
         goto abcr;
        }
        goto abcdd;}
         break;
  case 3:countwf=0;
         abcwf:
         wf=getpass("Enter the Access code of the  Database:\n ");
         if(strcmp(wf,wsf)==0)
         {system(cls);
         cout<<FCYN("Access Granted\n\n");
         wff:
         do
         {system(t);
         cout<<FGRN("                                                          WELCOME TO WORKINGSTAFF DATABASE\n");
         cout<<FYEL("             *********************************************************************************************************************************\n");
         cout<<FGRN("                                                  Enter your choice:\n");
         cout<<FGRN("                                                  1.Enter data of a new Member\n");
         cout<<FGRN("                                                  2.Modify data of already existing Member\n");
         cout<<FGRN("                                                  3.Display data of an existing Member\n");
         cout<<FGRN("                                                  4.Display the list of all the Staff in the hospital\n");
         cout<<FGRN("                                                  5.Delete the data of a Member\n");
         cout<<FGRN("                                                  6.Delete the data of all the Staff\n");
         cout<<FGRN("                                                  7.Reset the Access code for the Database\n");
         cout<<FGRN("                                                  8.Exit\n");
         cout<<FYEL("             *********************************************************************************************************************************\n");
         cin>>ch;
         switch(ch)
         {
         case 1:system(cls);
                w[iw]=new class staff();
                w[iw]->data();
                iw++;
                nw++;
                system(cls);
                goto wff;
                break;
         case 2:system(cls);
                flagw=0;
                cout<<"Enter the unique  ID of the Employee for modification\n";
                cin>>no;
                for(iw=0;iw<nw;iw++)
                {if(no==(w[iw]->reg()))
                 w[iw]->modify();
                 else
                 flagw++;
                }
                if(flagw==nw)
                cout<<FMAG("Employee not found\n");
                cout<<FMAG("Press ENTER to continue.....\n");
                cin.ignore();
                cin.get();
                system(cls);
                goto wff;
                break;
         case 3:flaw=0;
                system(cls);
                cout<<"Enter the unique  ID of the Employee for display\n";
                cin>>no;
                for(iw=0;iw<nw;iw++)
                {if(no==(w[iw]->reg()))
                w[iw]->display();
                else
                flaw++;
                }
                if(flaw==nw)
                cout<<FMAG("Employee not found\n");
                cout<<FMAG("Press ENTER to continue.....\n");
                cin.ignore();
                cin.get();
                system(cls);
                goto wff;
                break;
         case 4:system(cls);
                for(iw=0;iw<nw;iw++)
                {if(iw<nw)
                flw=w[iw]->displayall();
                }
                if(flw>=nw)
                cout<<FMAG("No Employee found\n");
                cout<<FMAG("Press ENTER to continue.....\n");
                cin.ignore();
                cin.get();
                w[iw]->dlt();
                system(cls);
                goto wff;
                break;
         case 5:fw=0;
                system(cls);
                cout<<"Enter the unique  ID of the Employee for deletion\n";
                cin>>no;
                for(iw=0;iw<nw;iw++)
                {if(no==(w[iw]->reg()))
                {w[iw]->id=NULL;
                 w[iw]->dlt();
                 w[iw]->del();
                }
                else
                fw++;
                }
                if(fw==nw)
                cout<<FMAG("Employee not found\n");
                cout<<FMAG("Press ENTER to continue.....\n");
                cin.ignore();
                cin.get();
                system(cls);
                goto wff;
                break;
         case 6:system(cls);
                for(iw=0;iw<nw;iw++)
                {if(iw<nw)
                {w[iw]->id=NULL;
                 w[iw]->del();}
                 }
                cout<<FMAG("All the Employees information is erased from the database\n");
                cout<<FMAG("Press ENTER to continue.....\n");
                cin.ignore();
                cin.get();
                system(cls);
                goto wff;
                break;
         case 7:system(cls);
                countwfnp=0;
                countwfrnp=0;
               abcwfnp:
               s=getpass("Enter the old Access code\n");
               if(strcmp(s,wsf)==0)
               {
               cout<<FMAG("Enter the new Access code\n");
               cin>>wfnp;
               cout<<FMAG("Reenter the new Access code\n");
               cin>>wfrnp;
               if(strcmp(wfnp,wfrnp)==0)
               {strcpy(wsf,wfnp);
                ofstream fout;
                fout.open("password.txt");
                fout<<p<<"\n";
                fout<<pat<<"\n";
                fout<<doc<<"\n";
                fout<<wsf<<"\n";
                fout<<mdc<<"\n";
                fout.close();
                goto abcwf;}
               else
               {cout<<FMAG("The above Access codes do not match\n");
                countwfrnp++;
               if(countwfrnp==3)
               {cout<<FRED("Closing due to many wrong attempts\n");
                system(cls);
                goto abcr;}
                cout<<FMAG("Try again\n");
                goto abcwfnp;}}
               else
               {cout<<FMAG("Access code cannot be changed\n");
               countwfnp++;
               if(countwfnp==3)
               {cout<<FRED("Closing due to many wrong attempts\n");
               system(cls);
               goto abcr;}}
               goto abcwfnp;
         case 8:system(cls);
                goto abcr;
                break;
         default:system(cls);
                cout<<FMAG("invalid choice\n");
                cout<<FMAG("Enter a valid one\n"); 
                break;         
        }}while(ch>=8);
         }
         else
       {cout<<FMAG("Access  Denied\n");
        cout<<FMAG("Please Try again\n");
        countwf++;
        if(countwf==3)
        {cout<<FRED("Closing due to many wrong attempts\n");
         system(cls);
         goto abcr;
        }
         goto abcwf;}
         break;
  case 4:countmd=0;
         abcmd:
         mc=getpass("Enter the Access code of the  Database:\n ");
         if(strcmp(mc,mdc)==0)
         {system(cls);
         cout<<FCYN("Access Granted\n\n");
         md:
         do
         {system(t);
         cout<<FYEL("                                                          WELCOME TO INVENTORY DATABASE\n");
         cout<<FGRN("             *********************************************************************************************************************************\n");
         cout<<FYEL("                                                  Enter your choice:\n");
         cout<<FYEL("                                                  1.Enter data of a new Item\n");
         cout<<FYEL("                                                  2.Modify data of already existing Item\n");
         cout<<FYEL("                                                  3.Display data of an existing Item\n");
         cout<<FYEL("                                                  4.Display the list of all the inventory in the hospital\n");
         cout<<FYEL("                                                  5.Delete the data of an Item\n");
         cout<<FYEL("                                                  6.Delete the data of all the inventory\n");
         cout<<FYEL("                                                  7.Reset the Access code for this Database\n");
         cout<<FYEL("                                                  8.Exit\n");
         cout<<FGRN("             *********************************************************************************************************************************\n");
         cin>>ch;
         switch(ch)
         {
         case 1:system(cls);
                m[im]=new class medicine();
                m[im]->data();
                im++;
                nm++;
                system(cls);
                goto md;
                break;
         case 2:system(cls);
                flagm=0;
                cout<<"Enter the R.no of the item for modification\n";
                cin>>no;
                for(im=0;im<nm;im++)
                {if(no==(m[im]->reg()))
                 m[im]->modify();
                 else
                 flagm++;
                }
                if(flagm==nm)
                cout<<FMAG("Item not found\n");
                cout<<FMAG("Press ENTER to continue.....\n");
                cin.ignore();
                cin.get();
                system(cls);
                goto md;
                break;
         case 3:flam=0;
                system(cls);
                cout<<"Enter the R.no of the item for display\n";
                cin>>no;
                for(im=0;im<nm;im++)
                {if(no==(m[im]->reg()))
                m[im]->display();
                else
                flam++;
                }
                if(flam==nm)
                cout<<FMAG("Item not found\n");
                cout<<FMAG("Press ENTER to continue.....\n");
                cin.ignore();
                cin.get();
                system(cls);
                goto md;
                break;
         case 4:system(cls);
                for(im=0;im<nm;im++)
                {if(im<nm)
                flm=m[im]->displayall();
                }
                if(flm>=nm)
                cout<<FMAG("No Items found\n");
                cout<<FMAG("Press ENTER to continue.....\n");
                cin.ignore();
                cin.get();
                m[im]->dlt();
                system(cls);
                goto md;
                break;
         case 5:fm=0;
                system(cls);
                cout<<"Enter the R.no of the Item for deletion\n";
                cin>>no;
                for(im=0;im<nm;im++)
                {if(no==(m[im]->reg()))
                {m[im]->id=NULL;
                 m[im]->dlt();
                 m[im]->del();
                }
                else
                fm++;
                }
                if(fm==nm)
                cout<<FMAG("Item not found\n");
                cout<<FMAG("Press ENTER to continue.....\n");
                cin.ignore();
                cin.get();
                system(cls);
                goto md;
                break;
         case 6:system(cls);
                for(im=0;im<nm;im++)
                {if(im<nm)
                {m[im]->id=NULL;
                 m[im]->del();}
                 }
                cout<<FMAG("All the Items information is erased from the database\n");
                cout<<FMAG("Press ENTER to continue.....\n");
                cin.ignore();
                cin.get();
                system(cls);
                goto md;
                break;
         case 7:system(cls);
               countmnp=0;
               countmrnp=0; 
               abcmnp:
               s=getpass("Enter the old Access code\n");
               if(strcmp(s,mdc)==0)
               {
               cout<<FMAG("Enter the new Access code\n");
               cin>>mnp;
               cout<<FMAG("Reenter the new Access code\n");
               cin>>mrnp;
               if(strcmp(mnp,mrnp)==0)
               {strcpy(mdc,mnp);
                ofstream fout;
                fout.open("password.txt");
                fout<<p<<"\n";
                fout<<pat<<"\n";
                fout<<doc<<"\n";
                fout<<wsf<<"\n";
                fout<<mdc<<"\n";
                fout.close();
                goto abcmd;}
               else
               {cout<<FMAG("The above Access codes do not match\n");
                countmrnp++;
               if(countmrnp==3)
               {cout<<FRED("Closing due to many wrong attempts\n");
                system(cls);
                goto abcr;}
                cout<<FMAG("Try again\n");
                goto abcmnp;}}
               else
               {cout<<FMAG("Access code cannot be changed\n");
               countmnp++;
               if(countmnp==3)
               {cout<<FRED("Closing due to many wrong attempts\n");
               system(cls);
               goto abcr;}}
               goto abcmnp;
         case 8:system(cls);
                goto abcr;
                break;
         default:system(cls);
                cout<<FMAG("invalid choice\n");
                cout<<FMAG("Enter a valid one\n"); 
                break;         
        }}while(ch>=8);
         }
         else
       {cout<<FMAG("Access  Denied\n");
        cout<<FMAG("Please Try again\n");
        countmd++;
        if(countmd==3)
        {cout<<FRED("Closing due to many wrong attempts\n");
         system(cls);
         goto abcr;
        }
         goto abcmd;}
         break;
         break;
  case 5:abcnp:
         s=getpass("Enter the old Access code\n");
         if(strcmp(s,p)==0)
         {
          cout<<FMAG("Enter the new Access code\n");
          cin>>np;
          cout<<FMAG("Reenter the new Access code\n");
          cin>>rnp;
          if(strcmp(np,rnp)==0)
          {strcpy(p,np);
           ofstream fout;
           fout.open("password.txt");
           fout<<p<<"\n";
           fout<<pat<<"\n";
           fout<<doc<<"\n";
           fout<<wsf<<"\n";
           fout<<mdc<<"\n";
           fout.close();
          goto abc;}
          else 
          {cout<<FMAG("The above Access codes do not match\n");
          countrnp++;
          if(countrnp==3)
          {cout<<FRED("Closing due to many wrong attempts\n");
          exit(0);}
          cout<<FMAG("Try again\n");
          goto abcnp;}}
         else
         {cout<<FMAG("Access code cannot be changed\n");
          countnp++;
          if(countnp==3)
          {cout<<FRED("Closing due to many wrong attempts\n");
          exit(0);}}
         goto abcnp;
  case 6:system(ef);
         exit(0);
         break;
  default:cout<<FMAG("Invalid choice\n");
          cout<<FMAG("Enter the valid one\n");
         break;
 }}while(c!=6);
 }
 else
 {cout<<FMAG("Access  Denied\n");
 cout<<FMAG("Please Try again\n");
 count++;
 if(count==3)
 {cout<<FRED("Closing system due to many wrong authenciation attempts\n");
 exit(0);}
 goto abc;}
}}
