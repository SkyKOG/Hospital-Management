#include <fstream.h>
#include <conio.h>
#include <process.h>
#include <stdio.h>
#include <time.h>
#include <dos.h>
#include <string.h>
#include "loading.cpp"
class patient
{
char fname[30];
char mname[30];
char lname[30];
int martialstatus;
int regno;
char bloodgroup[10];
int sex;
int houseno;
char street[30];
char city[30];
char state[30];
char country[30];
int day,year,month;
char condition[30];
char disease[30];
char emergency[1];
char category[10];
int age;

public:
void enterdetails();
void search();
void display();
void modify();
void delrec();
void about();
void all();
void print();
void backup();
int getregno()
{
 return regno;
}
//void advanced();
}s;
void modify2();
void box();
void main()
{
ofstream nout("Log.txt",ios::out|ios::app);
time_t time1;
time (&time1);
nout<<"Software Started : ";nout<<ctime(&time1)<<"\n";
nout<<"--------------------------------------------\n\n";
nout.close();
textbackground(BLACK);
clrscr();
loading();
gotoxy(30,20);
cout<<"Loading Completed";
delay(1000);
clrscr();
gotoxy(1,1);
int task;
do{
time_t time1;
time (&time1);
cout<<ctime(&time1);
cout<<"\n\n";
cout<<"                       ***HOSPITAL MANAGEMENT SOFTWARE***"<<"\n\n";
cout<<"	                 **Hospital Management Tasks**"<<"\n\n";
cout<<"                           *************************"<<"\n\n";
gotoxy(18,12);
cout<<"Please  select a task to do...."<<"\n\n";
gotoxy(18,14);
cout<<"1. Enter a new patient information ."<<"\n";
gotoxy(18,16);
cout<<"2. Search details of existing patients ."<<"\n";
gotoxy(18,18);
cout<<"3. Go to Extended Operations ."<<"\n";
gotoxy(18,20);
cout<<"4. Exit from the program ."<<"\n\n";
gotoxy(18,22);
cout<<"5. About .";
gotoxy(18,26);
cout<<"Enter your task serail : "<<"\n\n";
gotoxy(18,28);
for(int g=0;g<24;g++)
cout<<"-";
gotoxy(18,30);
cin>>task;
clrscr();
switch(task)
{
  case 1:{
	  s.enterdetails();
	  break;
	 }
  case 2:{
	  s.search();
	  break;
	 }
  case 3:{
	  ofstream nout("Log.txt",ios::out|ios::app);
	  time_t time1;
	  time (&time1);
	  nout<<"Extended Operations menu Opened : ";nout<<ctime(&time1)<<"\n";
	  nout<<"--------------------------------------------\n\n";
	  nout.close();
	  box();   int u;
	  gotoxy(24,14);
	  cout<<"Welcome To Extended Operations";
	  gotoxy(18,18);
	  cout<<"1.View All Records .";
	  gotoxy(18,20);
	  cout<<"2.Print A Patient's Record .";
	  gotoxy(18,22);
	  cout<<"3.Modify A Patient's Record .";
	  gotoxy(18,24);
	  cout<<"4.Delete A Patient's Record .";
	  gotoxy(18,26);
	  cout<<"5.Backup Operations .";
	  gotoxy(18,28);
	  cout<<"6.Exit Extended Operations Menu .";
	  gotoxy(18,32);
	  cout<<"Enter your task serail :"<<"\n\n";
	  gotoxy(18,34);
	  for(int g=0;g<24;g++)
	  cout<<"-";
	  gotoxy(18,36);
	  cin>>u;
	  if(u==1)
	  {clrscr();s.all();clrscr();}
	  if(u==2)
	  {clrscr();s.print();clrscr();}
	  if(u==3)
	  {clrscr();modify2();clrscr();}
	  if(u==4)
	  {clrscr();s.delrec();clrscr();}
	  if(u==5)
	  {clrscr();s.backup();
	  clrscr();}
	  if(u==6)
	  clrscr();
	  break;
	  }
  case 4:{ clrscr();
  ofstream nout("Log.txt",ios::out|ios::app);
time_t time1;
time (&time1);
nout<<"Software Closed : ";nout<<ctime(&time1)<<"\n";
nout<<"--------------------------------------------\n\n\n\n\n";
nout.close();
  exit(0);}
  case 5:{
  clrscr();
  box();
  s.about();clrscr();break;
   }
default:{
	  clrscr();
	  cout<<"Invalid task serial .""\n";
	  cout<<"Press any key to continue....""\n";
	  getch();
	  clrscr();

	 }
}}while(task>=1||task<=5);
}
void patient::enterdetails()
{ clrscr();
 box();
 ofstream fout("patient",ios::out|ios::app);
 gotoxy(28,22);
 cout<<"Enter Registration Number";
 gotoxy(40,24);
 cin>>regno;
 clrscr();  box();
 gotoxy(33,15);
 cout<<"General Info";
 //clrscr();
 cout<<"\n\n";
  gotoxy(29,17);
 cout<<"Enter Patient Details";
  gotoxy(16,20);
 cout<<"Enter First Name                 : \n";

 gotoxy(16,22);
  cout<<"Enter Middle Name                : \n";
 gotoxy(16,24);
 cout<<"Enter Last Name                  : \n";
  gotoxy(16,26);
 cout<<"Enter Age                        : \n";
 gotoxy(16,28);
 cout<<"Enter Sex [1-Male or 2-Female]   : \n";
 cout<<"\n\n";
 gotoxy(29,31);
 cout<<"Enter Date of Birth              \n\n";
 gotoxy(16,34);
 cout<<"Enter Date                       : \n";
 gotoxy(16,36);
 cout<<"Enter Month                      : \n";
 gotoxy(16,38);
 cout<<"Enter Year                       : \n";
 cout<<"\n";
 gotoxy(16,40);
 cout<<"Enter Martial Status [1-Married or 2-Unmarried]: \n";
 gotoxy(51,20);
 cin>>fname;
 gotoxy(51,22);
 cin>>mname;
 gotoxy(51,24);
 cin>>lname;
 gotoxy(51,26);
 cin>>age;
 gotoxy(51,28);
 cin>>sex;
 gotoxy(51,34);
 cin>>day;
 gotoxy(51,36);
 cin>>month;
 gotoxy(51,38);
 cin>>year;
 gotoxy(65,40);
 cin>>martialstatus;

 clrscr();
 box();
 cout<<"\n\n";
 gotoxy(33,15);
 cout<<"Enter Address \n\n";
 gotoxy(16,21);
 cout<<"Enter House Number               : \n";
 gotoxy(16,23);
 cout<<"Street                           : \n";
 gotoxy(16,25);
 cout<<"City                             : \n";
 gotoxy(16,27);
 cout<<"State                            : \n";
 gotoxy(16,29);
 cout<<"Country                          : \n";
 gotoxy(51,21);
 cin>>houseno;
 gotoxy(51,23);
 gets(street);
 gotoxy(51,25);
 gets(city);
 gotoxy(51,27);
 gets(state);
 gotoxy(51,29);
 gets(country);

 clrscr();
 box();
 gotoxy(24,15);
 cout<<"Please Enter Medical Information \n\n";
 gotoxy(16,21);
 cout<<"Enter Blood Group                : ";
 gotoxy(16,23);
 cout<<"Condition                        : \n";
 gotoxy(16,25);
 cout<<"Diseases                         : \n";
 gotoxy(16,27);
 cout<<"Emergency Condition ? [Y/N]      : \n";
 gotoxy(16,29);
 cout<<"Patient Category                 : \n";
 gotoxy(51,21);
 cin>>bloodgroup;
 gotoxy(51,23);
 cin>>condition;
 gotoxy(51,25);
 gets(disease);
 gotoxy(51,27);
 cin>>emergency;
 gotoxy(51,29);
 cin>>category;
 fout.write((char*)&s,sizeof(s));clrscr();
 clrscr();
 box();
 gotoxy(19,25);
 cout<<"The Provided information has been Accepted";
 ofstream nout("Log.txt",ios::out|ios::app);
time_t time1;
time (&time1);
nout<<"New Record Added : ";nout<<ctime(&time1)<<"\n";
nout<<"Record Number    : ";nout<<regno<<"\n";
nout<<"--------------------------------------------\n\n";
nout.close();
 getch();clrscr();
 fout.close();
}
void box()
{
 //clrscr();
 int i;
 gotoxy(9,10);
 for(i=0;i<62;i++)
 cout<<"*";
 for(i=11;i<45;i++)
 {
 gotoxy(9,i);
 cout<<"*";
 }

 for(i=0;i<61;i++)
 cout<<"*";
 for(i=11;i<44;i++)
 {
  gotoxy(70,i);
  cout<<"*";
 }
//getch();
}

void patient::about()
{
 gotoxy(17,25);
 ofstream nout("Log.txt",ios::out|ios::app);
    time_t time1;
    time (&time1);
    nout<<"About Page Was Viewed : ";nout<<ctime(&time1)<<"\n";
    nout<<"--------------------------------------------\n\n";
    nout.close();
 cout<<"This Program Has Been Made By Akash";
 gotoxy(17,23);
 cout<<"   Thankyou For Trying Out This Program ;=D";
 getch();
}
void patient::search()
{
 ifstream see("patient",ios::in);
 see.seekg(0);
 int reg;
 char flag='n';
 gotoxy(13,18);
 cout<<"Enter Patient's Registration Number to be searched for : \n";
 gotoxy(40,22);
 cin>>reg;clrscr();
 ofstream nout("Log.txt",ios::out|ios::app);
time_t time1;
time (&time1);
nout<<"Database was Searched For Record : ";nout<<ctime(&time1)<<"\n";
nout<<"Record Number    : ";nout<<reg<<"\n";
nout<<"--------------------------------------------\n\n";
nout.close();
 while(!see.eof())
 {
  see.read((char*)&s,sizeof(s));
  if(reg==s.regno)
 { flag='y';
  gotoxy(32,18);
  cout<<"Record Found\n";getch();
  clrscr();
  gotoxy(1,1);
  s.display();
  break;
 }

 }
 see.close();
 if(flag=='n')
 {gotoxy(26,18);
 cout<<"Record Not Found In Database \n";}
 getch();
 clrscr();
}

void patient::display()
{
 box();
 gotoxy(28,13);
 char s[10],m[10];
 cout<<"Registration Number : ";
 cout<<regno;  //                     cout<<"\n";
 gotoxy(18 ,16);
 cout<<"General Info";
 gotoxy(12,18);
 cout<<"Name : ";
 cout<<fname<<" "<<mname<<" "<<lname;cout<<"\n";
 gotoxy(12,20);
 cout<<"Date Of Birth : ";
 cout<<day<<"-"<<month<<"-"<<year;cout<<"\n";
 gotoxy(12,22);
 cout<<"Age  : ";
 cout<<age;cout<<"\n";
 gotoxy(12,24);
 cout<<"Sex  : ";
 if(sex==1)
 strcpy(s,"Male");
 if(sex==2)
 strcpy(s,"Female");
 cout<<s;cout<<"\n";
 gotoxy(12,26);
 cout<<"Martial Status : ";
 if(martialstatus==1)
 strcpy(m,"Married");
 if(martialstatus==2)
 strcpy(m,"Unmarried");
 cout<<m;cout<<"\n";
 gotoxy(51,16);
 cout<<"Address";
 gotoxy(46,18);
 cout<<"House Number :";
 cout<<houseno;cout<<"\n";
 gotoxy(46,20);
 cout<<"Street  : ";
 puts(street);cout<<"\n";
 gotoxy(46,22);
 cout<<"City    : ";
 puts(city);cout<<"\n";
 gotoxy(46,24);
 cout<<"State   : ";
 puts(state);cout<<"\n";
 gotoxy(46,26);
 cout<<"Country : ";
 puts(country);cout<<"\n";
 gotoxy(32,29);
 cout<<"Medical Data";
 gotoxy(17,31);
 cout<<"Blood Group     : ";
 cout<<bloodgroup;cout<<"\n";
 gotoxy(17,33);
 cout<<"Condition       : ";
 cout<<condition;cout<<"\n";
 gotoxy(17,35);
 cout<<"Emergency [Y/N] : ";
 cout<<emergency;cout<<"\n";
 gotoxy(17,37);
 cout<<"Diseases        : ";
 puts(disease);cout<<"\n";
 gotoxy(17,39);
 cout<<"Category        : ";
 cout<<category;cout<<"\n";

}

void patient ::all()
{
 ifstream fin;
 fin.open("patient",ios::in);
 fin.seekg(0);
 box();
 gotoxy(34,15);
 cout<<"All Entries";getch();
 gotoxy(12,18);
 while(!fin.eof())
 {
  fin.read((char*)&s,sizeof(s));
  cout<<fname<<" "<<mname<<" "<<lname;
  cout<<"\n";
  cout<<"\t\t";
 } box();
 fin.close();getch();
}

void patient::delrec()
{
 ifstream fio("patient",ios::in);
 ofstream file("temp.dat",ios::out);
 int rec;
 char found='f',confirm='n';
 gotoxy(19,18);
 cout<<"Enter Record Number of Patient to be Deleted";
 gotoxy(40,22);
 cin>>rec;clrscr();
 while(!fio.eof())
 {
  fio.read((char*)&s,sizeof(s));
  if(rec==s.regno)
  {
   s.display();
   found='t';
   gotoxy(13,49);
   cout<<"Are you sure, you want to DELETE this Record ? [Y/N]";
   cin>>confirm;
   if(confirm=='y'){
   ofstream nout("Log.txt",ios::out|ios::app);
   time_t time1;
   time (&time1);
   nout<<"Record was DELETED From Database : ";nout<<ctime(&time1)<<"\n";
   nout<<"Record Number    : ";nout<<rec<<"\n";
   nout<<"--------------------------------------------\n\n";
   nout.close(); }
   if(confirm=='n') {
   file.write((char*)&s,sizeof(s));}
  }
  else
   file.write((char*)&s,sizeof(s));
 }
 if(found=='f')
 {gotoxy(31,18);
 cout<<"Record Not Found";}
 fio.close();
 file.close();
 remove("patient");
 rename("temp.dat","patient");getch();
}

void patient::print()
{
 ifstream fio("patient",ios::in);
 ofstream file("PRN",ios::out);
 int rec;
 char found='f',confirm='n';
 gotoxy(19,18);
 cout<<"Enter Record Number of Patient to be Printed";
 gotoxy(40,22);
 cin>>rec;clrscr();
 while(!fio.eof())
 {
  fio.read((char*)&s,sizeof(s));
  if(rec==s.regno)
  {
   s.display();
   found='t';
   gotoxy(13,49);
   cout<<"Are you sure, you want to PRINT this Record ? [Y/N]";
   cin>>confirm;
   if(confirm=='y') {
   ofstream nout("Log.txt",ios::out|ios::app);
   time_t time1;
   time (&time1);
   nout<<"A Record was Printed : ";nout<<ctime(&time1)<<"\n";
   nout<<"Record Number    : ";nout<<rec<<"\n";
   nout<<"--------------------------------------------\n\n";
   nout.close();
   file.write((char*)&s,sizeof(s));}
  }

 }
 if(found=='f')
 {gotoxy(31,18);
 cout<<"Record Not Found";}
 fio.close();
 file.close();                       getch();
}

void modify2()
{
 fstream fio("patient",ios::in|ios::out|ios::binary);
 int reg;
 long pos;char found='f';
 gotoxy(9,21);
 cout<<"Enter Registration Number of Patient whose Data is to be Modified";
 gotoxy(40,24);
 cin>>reg;
 clrscr();
 while(!fio.eof())
 {
  pos=fio.tellg();
  fio.read((char*)&s,sizeof(s));
  if(reg==s.getregno())
  {
    s.display();
    gotoxy(17,6);
    cout<<"Please Carefully Note The Changes To Be Made";
    getch();clrscr();
    s.modify();
    fio.seekg(pos);
    fio.write((char*)&s,sizeof(s));
    ofstream nout("Log.txt",ios::out|ios::app);
    time_t time1;
    time (&time1);
    nout<<"Existing Record was Modified : ";nout<<ctime(&time1)<<"\n";
    nout<<"Record Number    : ";nout<<reg<<"\n";
    nout<<"--------------------------------------------\n\n";
    nout.close();
    found='t';
    break;
  }
 }
 if(found=='f')
 {gotoxy(32,18);
  cout<<"Record Not Found";
 }
 fio.close();                                getch();
}

void patient::modify()
{
char fname1[30];
char mname1[30];
char lname1[30];
int martialstatus1;
int regno1;
char bloodgroup1[10];
int sex1;
int houseno1;
char street1[30];
char city1[30];
char state1[30];
char country1[30];
int day1,year1,month1;
char condition1[30];
char disease1[30];
char emergency1[1];
char category1[10];
int age1;

  gotoxy(28,22);
 cout<<"Enter Registration Number";
 gotoxy(40,24);
 cin>>regno1;
 clrscr();
  box();
  gotoxy(9,6);
  cout<<"Use '-1' to Retain Numercal Values & '.' To Retain Alpha Values";
 gotoxy(33,15);
 cout<<"General Info";
 //clrscr();
 cout<<"\n\n";
  gotoxy(29,17);
 cout<<"Enter Patient Details";
  gotoxy(16,20);
 cout<<"Enter First Name                 : \n";

 gotoxy(16,22);
  cout<<"Enter Middle Name                : \n";
 gotoxy(16,24);
 cout<<"Enter Last Name                  : \n";
  gotoxy(16,26);
 cout<<"Enter Age                        : \n";
 gotoxy(16,28);
 cout<<"Enter Sex [1-Male or 2-Female]   : \n";
 cout<<"\n\n";
 gotoxy(29,31);
 cout<<"Enter Date of Birth              \n\n";
 gotoxy(16,34);
 cout<<"Enter Date                       : \n";
 gotoxy(16,36);
 cout<<"Enter Month                      : \n";
 gotoxy(16,38);
 cout<<"Enter Year                       : \n";
 cout<<"\n";
 gotoxy(16,40);
 cout<<"Enter Martial Status [1-Married or 2-Unmarried]: \n";
 gotoxy(51,20);
 cin>>fname1;
 gotoxy(51,22);
 cin>>mname1;
 gotoxy(51,24);
 cin>>lname1;
 gotoxy(51,26);
 cin>>age1;
 gotoxy(51,28);
 cin>>sex1;
 gotoxy(51,34);
 cin>>day1;
 gotoxy(51,36);
 cin>>month1;
 gotoxy(51,38);
 cin>>year1;
 gotoxy(65,40);
 cin>>martialstatus1;

 clrscr();
 box();
 gotoxy(9,6);
 cout<<"Use '-1' to Retain Numercal Values & '.' To Retain Alpha Values";
 cout<<"\n\n";
 gotoxy(33,15);
 cout<<"Enter Address \n\n";
 gotoxy(16,21);
 cout<<"Enter House Number               : \n";
 gotoxy(16,23);
 cout<<"Street                           : \n";
 gotoxy(16,25);
 cout<<"City                             : \n";
 gotoxy(16,27);
 cout<<"State                            : \n";
 gotoxy(16,29);
 cout<<"Country                          : \n";
 gotoxy(51,21);
 cin>>houseno1;
 gotoxy(51,23);
 gets(street1);
 gotoxy(51,25);
 gets(city1);
 gotoxy(51,27);
 gets(state1);
 gotoxy(51,29);
 gets(country1);

 clrscr();
 box();
 gotoxy(9,6);
 cout<<"Use '-1' to Retain Numercal Values & '.' To Retain Alpha Values";
 gotoxy(24,15);
 cout<<"Please Enter Medical Information \n\n";
 gotoxy(16,21);
 cout<<"Enter Blood Group                : ";
 gotoxy(16,23);
 cout<<"Condition                        : \n";
 gotoxy(16,25);
 cout<<"Diseases                         : \n";
 gotoxy(16,27);
 cout<<"Emergency Condition ? [Y/N]      : \n";
 gotoxy(16,29);
 cout<<"Patient Category                 : \n";
 gotoxy(51,21);
 cin>>bloodgroup1;
 gotoxy(51,23);
 cin>>condition1;
 gotoxy(51,25);
 gets(disease1);
 gotoxy(51,27);
 cin>>emergency1;
 gotoxy(51,29);
 cin>>category1;

 clrscr();
 box();
 gotoxy(19,25);
 cout<<"The Provided information has been Accepted";
 if (strcmp(fname1,".")!=0)
 strcpy(fname,fname1);
 if (strcmp(mname1,".")!=0)
 strcpy(mname,mname1);
 if (strcmp(lname1,".")!=0)
 strcpy(lname,lname1);
 if(martialstatus1!=-1)
 martialstatus=martialstatus1;
 if(regno1!=-1)
 regno=regno1;
 if (strcmp(bloodgroup1,".")!=0)
 strcpy(bloodgroup,bloodgroup1);
 if(sex1!=-1)
 sex=sex1;
 if(houseno1!=-1)
 houseno=houseno1;
 if (strcmp(street1,".")!=0)
 strcpy(street,street1);
 if (strcmp(city1,".")!=0)
 strcpy(city,city1);
 if (strcmp(state1,".")!=0)
 strcpy(state,state1);
 if (strcmp(country1,".")!=0)
 strcpy(country,country1);
 if(day1!=-1)
 day=day1;
 if(month1!=-1)
 month=month1;
 if(year1!=-1)
 year=year1;
 if (strcmp(condition1,".")!=0)
 strcpy(condition,condition1);
 if (strcmp(disease1,".")!=0)
 strcpy(disease,disease1);
 if (strcmp(emergency1,".")!=0)
 strcpy(emergency,emergency1);
 if (strcmp(category1,".")!=0)
 strcpy(category,category1);

}

void patient::backup()
{
int task;
ofstream nout("Log.txt",ios::out|ios::app);
time_t time1;
time (&time1);
nout<<"Backup Mode Started : ";nout<<ctime(&time1)<<"\n";
nout<<"--------------------------------------------\n\n";
nout.close();
box();
gotoxy(32,18);
cout<<"Backup Operations\n";
gotoxy(26,22);
cout<<"1.Create Backup File .";
gotoxy(26,24);
cout<<"2.Restore From A Backup File .";
gotoxy(26,26);
cout<<"3.Delete A Backup File .";
gotoxy(26,28);
cout<<"4.Exit Backup Operations . ";
gotoxy(26,32);
cout<<"Enter your task serail : "<<"\n\n";
gotoxy(26,34);
for(int g=0;g<24;g++)
cout<<"-";
gotoxy(26,36);
cin>>task;clrscr();
if(task==1)
{
 clrscr();
 box();
 char a[10];
 gotoxy(27,23);
 cout<<"Enter Name For Backup File";
 gotoxy(39,26);
 cin>>a;
 ifstream fin("patient",ios::in);
 fin.seekg(0);
 ofstream fout(a,ios::out);
 clrscr();
 box();
 gotoxy(30,23);
 cout<<"Creating Backup File";
 gotoxy(30,25);
 for(int i=0;i<20;i++)
 {cout<<char(278);
  delay(100);}
  clrscr();
  box();
  gotoxy(30,23);
  cout<<"Created Successfully";
  ofstream nout("Log.txt",ios::out|ios::app);
  time_t time1;
  time (&time1);
  nout<<"New Backup Archive Created : ";nout<<ctime(&time1)<<"\n";
  nout<<"Name Of Archive : "<<a<<"\n";
  nout<<"--------------------------------------------\n\n";
  nout.close();
 while(!fin.eof())
 {
  fin.read((char*)&s,sizeof(s));
  fout.write((char*)&s,sizeof(s));
 }
 fin.close();
 fout.close();
}
if(task==2)
{
  clrscr();
  box();
  char b[10];
  gotoxy(16,23);
  cout<<"Enter Name Of Backup Archive To Be Recovered From";
  gotoxy(39,26);
  cin>>b;
  ifstream fin(b,ios::in);
  if(!fin)
  {
   clrscr();
   box();
   gotoxy(30,23);
   cout<<"File Does Not Exist";
   fin.close();
  }
  else
  {
   clrscr();
   box();
   gotoxy(27,23);
   cout<<"Recovering From Backup File";
   gotoxy(30,25);
   for(int i=0;i<20;i++)
  {
   cout<<char(278);
   delay(100);
  }
   clrscr();
   box();
   gotoxy(30,23);
   cout<<"Recovered Successfully";
   fin.close();
   ofstream nout("Log.txt",ios::out|ios::app);
   time_t time1;
   time (&time1);
   nout<<"Backup Recovered From Archive : ";nout<<ctime(&time1)<<"\n";
   nout<<"Archive Name : "<<b<<"\n";
   nout<<"--------------------------------------------\n\n";
   nout.close();
   remove("patient");
   ifstream fin(b,ios::in); fin.seekg(0);
   ofstream fout("temp",ios::in);
   while(!fin.eof())
 {
  fin.read((char*)&s,sizeof(s));
  fout.write((char*)&s,sizeof(s));
 }
   fin.close();
   fout.close();
   rename(b,"patient");
   rename("temp",b);

  }

  }
 if(task==3)
 {
  clrscr();
  box();
  char c[10];
  gotoxy(21,23);
  cout<<"Enter Name Of Backup File To Be Deleted";
  gotoxy(40,25);
  cin>>c;
  ifstream fin(c,ios::in);
  if(fin)
  {
    char ans;
    fin.close();
    clrscr();
    box();
    gotoxy(16,23);
    cout<<"Are You Sure You want to DELETE This Backup File ?";
    gotoxy(39,25);
    cin>>ans;
    if(ans=='y')
    remove(c);
    clrscr();
    box();
    gotoxy(30,23);
    cout<<"Deleting Archive";
    gotoxy(30,25);
   for(int i=0;i<15;i++)
  {
   cout<<char(278);
   delay(100);
  }
    clrscr();
    box();
    gotoxy(30,23);
    cout<<"Deleted Successfully";
    ofstream nout("Log.txt",ios::out|ios::app);
    time_t time1;
    time (&time1);
    nout<<"Backup Archive Deleted : ";nout<<ctime(&time1)<<"\n";
    nout<<"Archive Name : "<<c<<"\n";
    nout<<"--------------------------------------------\n\n";
    nout.close();

   }

  }
getch();


}
