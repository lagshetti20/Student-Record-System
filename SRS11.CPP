#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<iomanip.h>
#include<fstream.h>
#define hodusername "hod@123"
#define hodpassword "pass123"
fstream fp1,fp2,fs1,fs2;
void lab_assistant();  //global method declaration
void hod_method();
void add_admission();
void student_delete();
void student_update();
void student_search();
void options_lab();
void options_hod();
void options_staff();
void write_hod();
void write_lab();
void write_staff();
void write_SE_marks();
void write_SE_marks();
void roll_list();
void write_add_fe();
void write_add_se();
void write_add_te();
void write_add_be();
int flag=0;					//global variables
class labassistant {
	public:
		int id_no;
		char first_name[20];
		char middle_name[20];
		char last_name[20];
		char address1[100];
		char city1[10];
		char gender1[10];
		char email_id[20];
		char password1[10];
		char education[10];
		long int contact_number;

		char full_name[50];
		long int application_id;
		char password2[10];
		char father_name[20];
		char mother_name[20];
		long int parents_mobile_no;
		long int student_mobile_no;
		char address[500];
		char city[20];
		char state[20];
		char cast[20];
		char category[10];
		char gender[10];
		char emailid[100];
		float hsc_percentage;
		int cet_score;
		int jee_score;

		float diploma_percentage;

	public:
		void l_registeration() {
			int i = 0;
			char a;//a Temp char

			cout<<"\n\t Registeration.....\n===================================\n";
			//sr_no=count;
			cout<<"\n ID Number :";
			cin>>id_no;
			cout<<"\n Enter First Name :";
			for(i=0;;)//infinite loop
			{
				a=getch();//stores char typed in a
				if((a>='a'&&a<='z')||(a>='A'&&a<='Z'))
				//check if a is numeric or alphabet
				{
					first_name[i]=a;//stores a in pass
					++i;
					cout<<a;
				}
				if(a=='\b'&&i>=1)//if user typed backspace
				//i should be greater than 1.
				{
					cout<<"\b \b";//rub the character behind the cursor.
					--i;
				}
				if(a=='\r')//if enter is pressed
				{
					first_name[i]='\0';//null means end of string.
					break;//break the loop
				}
			}
			cout<<"\n Enter Middle Name :";
			for(i=0;;)//infinite loop
			{
				a=getch();//stores char typed in a
				if((a>='a'&&a<='z')||(a>='A'&&a<='Z'))
				//check if a is numeric or alphabet
				{
					middle_name[i]=a;//stores a in pass
					++i;
					cout<<a;
				}
				if(a=='\b'&&i>=1)//if user typed backspace
				//i should be greater than 1.
				{
					cout<<"\b \b";//rub the character behind the cursor.
					--i;
				}
				if(a=='\r')//if enter is pressed
				{
					middle_name[i]='\0';//null means end of string.
					break;//break the loop
				}
			}
			cout<<"\n Enter Last Name :";
			for(i=0;;)//infinite loop
			{
				a=getch();//stores char typed in a
				if((a>='a'&&a<='z')||(a>='A'&&a<='Z'))
				//check if a is numeric or alphabet
				{
					last_name[i]=a;//stores a in pass
					++i;
					cout<<a;
				}
				if(a=='\b'&&i>=1)//if user typed backspace
				//i should be greater than 1.
				{
					cout<<"\b \b";//rub the character behind the cursor.
					--i;
				}
				if(a=='\r')//if enter is pressed
				{
					last_name[i]='\0';//null means end of string.
					break;//break the loop
				}
			}
			cout<<"\n Enter Address :";
			for(i=0;;)//infinite loop
			{
				a=getch();//stores char typed in a
				if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a>='0'&&a<='9')||(a=='/')||(a==' ')||(a==','))
				//check if a is numeric or alphabet
				{
					address1[i]=a;//stores a in pass
					++i;
					cout<<a;
				}
				if(a=='\b'&&i>=1)//if user typed backspace
				//i should be greater than 1.
				{
					cout<<"\b \b";//rub the character behind the cursor.
					--i;
				}
				if(a=='\r')//if enter is pressed
				{
					address1[i]='\0';//null means end of string.
					break;//break the loop
				}
			}
			cout<<"\n Enter City :";
			for(i=0;;)//infinite loop
			{
				a=getch();//stores char typed in a
				if((a>='a'&&a<='z')||(a>='A'&&a<='Z'))
				//check if a is numeric or alphabet
				{
					city1[i]=a;//stores a in pass
					++i;
					cout<<a;
				}
				if(a=='\b'&&i>=1)//if user typed backspace
				//i should be greater than 1.
				{
					cout<<"\b \b";//rub the character behind the cursor.
					--i;
				}
				if(a=='\r')//if enter is pressed
				{
					city1[i]='\0';//null means end of string.
					break;//break the loop
				}
			}
			cout<<"\n Enter Gender :";
			for(i=0;;)//infinite loop
			{
				a=getch();//stores char typed in a
				if((a>='a'&&a<='z')||(a>='A'&&a<='Z'))
				//check if a is numeric or alphabet
				{
					gender1[i]=a;//stores a in pass
					++i;
					cout<<a;
				}
				if(a=='\b'&&i>=1)//if user typed backspace
				//i should be greater than 1.
				{
					cout<<"\b \b";//rub the character behind the cursor.
					--i;
				}
				if(a=='\r')//if enter is pressed
				{
					gender1[i]='\0';//null means end of string.
					break;//break the loop
				}
			}
			cout<<"\n Email id be the username when you login !!!"<<"\n Enter Email ID :";
			for(i=0;;)//infinite loop
			{
				a=getch();//stores char typed in a
				if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a=='@')||(a=='.')||(a>='0'&&a<='9'))
				//check if a is numeric or alphabet
				{
					email_id[i]=a;//stores a in pass
					++i;
					cout<<a;
				}
				if(a=='\b'&&i>=1)//if user typed backspace
				//i should be greater than 1.
				{
					cout<<"\b \b";//rub the character behind the cursor.
					--i;
				}
				if(a=='\r')//if enter is pressed
				{
					email_id[i]='\0';//null means end of string.
					break;//break the loop
				}
			}
			cout<<"\n Enter Password :";
			for(i=0;;)//infinite loop
			{
				a=getch();//stores char typed in a
				if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a>='0'&&a<='9')||(a>='!'&&a<='$'))
				//check if a is numeric or alphabet
				{
					password1[i]=a;//stores a in pass
					++i;
					cout<<"*";
				}
				if(a=='\b'&&i>=1)//if user typed backspace
				//i should be greater than 1.
				{
					cout<<"\b \b";//rub the character behind the cursor.
					--i;
				}
				if(a=='\r')//if enter is pressed
				{
					password1[i]='\0';//null means end of string.
					break;//break the loop
				}
			}
			cout<<"\n Enter Education :";
			for(i=0;;)//infinite loop
			{
				a=getch();//stores char typed in a
				if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a==' '))
				//check if a is numeric or alphabet
				{
					education[i]=a;//stores a in pass
					++i;
					cout<<a;
				}
				if(a=='\b'&&i>=1)//if user typed backspace
				//i should be greater than 1.
				{
					cout<<"\b \b";//rub the character behind the cursor.
					--i;
				}
				if(a=='\r')//if enter is pressed
				{
					education[i]='\0';//null means end of string.
					break;//break the loop
				}
			}
			cout<<"\n Enter Contact Number :";
			cin>>contact_number;
		}
	   char *return_email() {
			return email_id;
		}
		char *return_password() {
			return password1;
		}
		void l_login() {
			char usernamel[50],passwordl[10],a,mail[20];
			int i=0;
			cout<<"\n Lab assistant Login\n=======================\n";
			flag=0;
			cout<<"\n Enter Username :";
			for(i=0;;)//infinite loop
			{
				a=getch();//stores char typed in a
				if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a>='0'&&a<='9')||(a=='@')||(a=='.'))
				//check if a is numeric or alphabet
				{
					usernamel[i]=a;//stores a in pass
					++i;
					cout<<a;
				}
				if(a=='\b'&&i>=1)//if user typed backspace
				//i should be greater than 1.
				{
					cout<<"\b \b";//rub the character behind the cursor.
					--i;
				}
				if(a=='\r')//if enter is pressed
				{
					usernamel[i]='\0';//null means end of string.
					break;//break the loop
				}
			}
			cout<<"\n Enter Password :";
			for(i=0;;)//infinite loop
			{
				a=getch();//stores char typed in a
				if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a>='0'&&a<='9'))
				//check if a is numeric or alphabet
				{
					passwordl[i]=a;//stores a in pass
					++i;
					cout<<"*";
				}
				if(a=='\b'&&i>=1)//if user typed backspace
				//i should be greater than 1.
				{
					cout<<"\b \b";//rub the character behind the cursor.
					--i;
				}
				if(a=='\r')//if enter is pressed
				{
					passwordl[i]='\0';//null means end of string.
					break;//break the loop
				}
			}
			int f=0;
			fp1.open("assi.dat",ios::in);
			while(fp1.read((char*)&l1,sizeof(labassistant)))
			{
				if(strcmp(return_email(),usernamel)==0 &&strcmp(return_password(),passwordl)==0) {
					f=1;
				}
				else {
					f=0;
				}
				if(f==1) {
				   if(strcmp(l1.email_id,usernamel)==0 && strcmp(l1.password1,passwordl)==0) {
						flag=1;
						cout<<"\n Login Successfully ....";
						getch();
					}
				}
			}
			fp1.close();

			if(flag==1) {
				system("cls");
				options_lab();
			}
			else {
				cout<<"\n Incorrect Username or Password !!!!!!";
			}
		}
		void add_FE_student() {
			int i = 0;
			char a;//a Temp char

			cout<<"\n\t ADD STUDENT ADDMISSION DETAILS\n===================================\n";
			cout<<"\n Enter Application ID :";
			cin>>application_id;
			cout<<"\n Enter Password :";
			for(i=0;;)//infinite loop
			{
				a=getch();//stores char typed in a
				if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a>='0'&&a<='9')||(a>='!'&&a<='$'))
				//check if a is numeric or alphabet
				{
					password2[i]=a;//stores a in pass
					++i;
					cout<<"*";
				}
				if(a=='\b'&&i>=1)//if user typed backspace
				//i should be greater than 1.
				{
					cout<<"\b \b";//rub the character behind the cursor.
					--i;
				}
				if(a=='\r')//if enter is pressed
				{
					password2[i]='\0';//null means end of string.
					break;//break the loop
				}
			}
			cout<<"\n Enter Student Full Name :";
			for(i=0;;)//infinite loop
			{
				a=getch();//stores char typed in a
				if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a==' '))
				//check if a is numeric or alphabet
				{
					full_name[i]=a;//stores a in pass
					++i;
					cout<<a;
				}
				if(a=='\b'&&i>=1)//if user typed backspace
				//i should be greater than 1.
				{
					cout<<"\b \b";//rub the character behind the cursor.
					--i;
				}
				if(a=='\r')//if enter is pressed
				{
					full_name[i]='\0';//null means end of string.
					break;//break the loop
				}
			}
			cout<<"\n Enter Address :";
			for(i=0;;)//infinite loop
			{
				a=getch();//stores char typed in a
				if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a>='0'&&a<='9')||(a=='/')||(a==' ')||(a==','))
				//check if a is numeric or alphabet
				{
					address[i]=a;//stores a in pass
					++i;
					cout<<a;
				}
				if(a=='\b'&&i>=1)//if user typed backspace
				//i should be greater than 1.
				{
					cout<<"\b \b";//rub the character behind the cursor.
					--i;
				}
				if(a=='\r')//if enter is pressed
				{
					address[i]='\0';//null means end of string.
					break;//break the loop
				}
			}
			cout<<"\n Enter City :";
			for(i=0;;)//infinite loop
			{
				a=getch();//stores char typed in a
				if((a>='a'&&a<='z')||(a>='A'&&a<='Z'))
				//check if a is numeric or alphabet
				{
					city[i]=a;//stores a in pass
					++i;
					cout<<a;
				}
				if(a=='\b'&&i>=1)//if user typed backspace
				//i should be greater than 1.
				{
					cout<<"\b \b";//rub the character behind the cursor.
					--i;
				}
				if(a=='\r')//if enter is pressed
				{
					city[i]='\0';//null means end of string.
					break;//break the loop
				}
			}
			cout<<"\n Enter State :";
			for(i=0;;)//infinite loop
			{
				a=getch();//stores char typed in a
				if((a>='a'&&a<='z')||(a>='A'&&a<='Z'))
				//check if a is numeric or alphabet
				{
					state[i]=a;//stores a in pass
					++i;
					cout<<a;
				}
				if(a=='\b'&&i>=1)//if user typed backspace
				//i should be greater than 1.
				{
					cout<<"\b \b";//rub the character behind the cursor.
					--i;
				}
				if(a=='\r')//if enter is pressed
				{
					state[i]='\0';//null means end of string.
					break;//break the loop
				}
			}
			cout<<"\n Enter Cast :";
			for(i=0;;)//infinite loop
			{
				a=getch();//stores char typed in a
				if((a>='a'&&a<='z')||(a>='A'&&a<='Z'))
				//check if a is numeric or alphabet
				{
					cast[i]=a;//stores a in pass
					++i;
					cout<<a;
				}
				if(a=='\b'&&i>=1)//if user typed backspace
				//i should be greater than 1.
				{
					cout<<"\b \b";//rub the character behind the cursor.
					--i;
				}
				if(a=='\r')//if enter is pressed
				{
					cast[i]='\0';//null means end of string.
					break;//break the loop
				}
			}
			cout<<"\n Enter Category :";
			for(i=0;;)//infinite loop
			{
				a=getch();//stores char typed in a
				if((a>='a'&&a<='z')||(a>='A'&&a<='Z'))
				//check if a is numeric or alphabet
				{
					category[i]=a;//stores a in pass
					++i;
					cout<<a;
				}
				if(a=='\b'&&i>=1)//if user typed backspace
				//i should be greater than 1.
				{
					cout<<"\b \b";//rub the character behind the cursor.
					--i;
				}
				if(a=='\r')//if enter is pressed
				{
					category[i]='\0';//null means end of string.
					break;//break the loop
				}
			}
			cout<<"\n Enter Gender :";
			for(i=0;;)//infinite loop
			{
				a=getch();//stores char typed in a
				if((a>='a'&&a<='z')||(a>='A'&&a<='Z'))
				//check if a is numeric or alphabet
				{
					gender[i]=a;//stores a in pass
					++i;
					cout<<a;
				}
				if(a=='\b'&&i>=1)//if user typed backspace
				//i should be greater than 1.
				{
					cout<<"\b \b";//rub the character behind the cursor.
					--i;
				}
				if(a=='\r')//if enter is pressed
				{
					gender[i]='\0';//null means end of string.
					break;//break the loop
				}
			}
			cout<<"\n Enter Email ID :";
			for(i=0;;)//infinite loop
			{
				a=getch();//stores char typed in a
				if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a=='@')||(a=='.')||(a>='0'&&a<='9'))
				//check if a is numeric or alphabet
				{
					emailid[i]=a;//stores a in pass
					++i;
					cout<<a;
				}
				if(a=='\b'&&i>=1)//if user typed backspace
				//i should be greater than 1.
				{
					cout<<"\b \b";//rub the character behind the cursor.
					--i;
				}
				if(a=='\r')//if enter is pressed
				{
					emailid[i]='\0';//null means end of string.
					break;//break the loop
				}
			}
			cout<<"\n Enter HSC Percentage :";
			cin>>hsc_percentage;
			cout<<"\n Enter CET Score :";
			cin>>cet_score;
			cout<<"\n Enter JEE Score :";
			cin>>jee_score;
		}
		void add_SE_student() {
			int i = 0;
			char a;//a Temp char
			cout<<"\n\t ADD STUDENT ADDMISSION DETAILS\n===================================\n";
			cout<<"\n Enter Application ID :";
			cin>>application_id;
			cout<<"\n Enter Password :";
			for(i=0;;)//infinite loop
			{
				a=getch();//stores char typed in a
				if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a>='0'&&a<='9')||(a>='!'&&a<='$'))
				//check if a is numeric or alphabet
				{
					password2[i]=a;//stores a in pass
					++i;
					cout<<"*";
				}
				if(a=='\b'&&i>=1)//if user typed backspace
				//i should be greater than 1.
				{
					cout<<"\b \b";//rub the character behind the cursor.
					--i;
				}
				if(a=='\r')//if enter is pressed
				{
					password2[i]='\0';//null means end of string.
					break;//break the loop
				}
			}
			cout<<"\n Enter Student Full Name :";
			for(i=0;;)//infinite loop
			{
				a=getch();//stores char typed in a
				if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a==' '))
				//check if a is numeric or alphabet
				{
					full_name[i]=a;//stores a in pass
					++i;
					cout<<a;
				}
				if(a=='\b'&&i>=1)//if user typed backspace
				//i should be greater than 1.
				{
					cout<<"\b \b";//rub the character behind the cursor.
					--i;
				}
				if(a=='\r')//if enter is pressed
				{
					full_name[i]='\0';//null means end of string.
					break;//break the loop

				}
			}
			cout<<"\n Enter Address :";
			for(i=0;;)//infinite loop
			{
				a=getch();//stores char typed in a
				if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a>='0'&&a<='9')||(a=='/')||(a==' ')||(a==','))
				//check if a is numeric or alphabet
				{
					address[i]=a;//stores a in pass
					++i;
					cout<<a;
				}
				if(a=='\b'&&i>=1)//if user typed backspace
				//i should be greater than 1.
				{
					cout<<"\b \b";//rub the character behind the cursor.
					--i;
				}
				if(a=='\r')//if enter is pressed
				{
					address[i]='\0';//null means end of string.
					break;//break the loop
				}
			}
			cout<<"\n Enter City :";
			for(i=0;;)//infinite loop
			{
				a=getch();//stores char typed in a
				if((a>='a'&&a<='z')||(a>='A'&&a<='Z'))
				//check if a is numeric or alphabet
				{
					city[i]=a;//stores a in pass
					++i;
					cout<<a;
				}
				if(a=='\b'&&i>=1)//if user typed backspace
				//i should be greater than 1.
				{
					cout<<"\b \b";//rub the character behind the cursor.
					--i;
				}
				if(a=='\r')//if enter is pressed
				{
					city[i]='\0';//null means end of string.
					break;//break the loop
				}
			}
			cout<<"\n Enter State :";
			for(i=0;;)//infinite loop
			{
				a=getch();//stores char typed in a
				if((a>='a'&&a<='z')||(a>='A'&&a<='Z'))
				//check if a is numeric or alphabet
				{
					state[i]=a;//stores a in pass
					++i;
					cout<<a;
				}
				if(a=='\b'&&i>=1)//if user typed backspace
				//i should be greater than 1.
				{
					cout<<"\b \b";//rub the character behind the cursor.
					--i;
				}
				if(a=='\r')//if enter is pressed
				{
					state[i]='\0';//null means end of string.
					break;//break the loop
				}
			}
			cout<<"\n Enter Cast :";
			for(i=0;;)//infinite loop
			{
				a=getch();//stores char typed in a
				if((a>='a'&&a<='z')||(a>='A'&&a<='Z'))
				//check if a is numeric or alphabet
				{
					cast[i]=a;//stores a in pass
					++i;
					cout<<a;
				}
				if(a=='\b'&&i>=1)//if user typed backspace
				//i should be greater than 1.
				{
					cout<<"\b \b";//rub the character behind the cursor.
					--i;
				}
				if(a=='\r')//if enter is pressed
				{
					cast[i]='\0';//null means end of string.
					break;//break the loop
				}
			}
			cout<<"\n Enter Category :";
			for(i=0;;)//infinite loop
			{
				a=getch();//stores char typed in a
				if((a>='a'&&a<='z')||(a>='A'&&a<='Z'))
				//check if a is numeric or alphabet
				{
					category[i]=a;//stores a in pass
					++i;
					cout<<a;
				}
				if(a=='\b'&&i>=1)//if user typed backspace
				//i should be greater than 1.
				{
					cout<<"\b \b";//rub the character behind the cursor.
					--i;
				}
				if(a=='\r')//if enter is pressed
				{
					category[i]='\0';//null means end of string.
					break;//break the loop
				}
			}
			cout<<"\n Enter Gender :";
			for(i=0;;)//infinite loop
			{
				a=getch();//stores char typed in a
				if((a>='a'&&a<='z')||(a>='A'&&a<='Z'))
				//check if a is numeric or alphabet
				{
					gender[i]=a;//stores a in pass
					++i;
					cout<<a;
				}
				if(a=='\b'&&i>=1)//if user typed backspace
				//i should be greater than 1.
				{
					cout<<"\b \b";//rub the character behind the cursor.
					--i;
				}
				if(a=='\r')//if enter is pressed
				{
					gender[i]='\0';//null means end of string.
					break;//break the loop
				}
			}
			cout<<"\n Enter Email ID :";
			for(i=0;;)//infinite loop
			{
				a=getch();//stores char typed in a
				if((a>='a'&&a<='z')||(a=='@')||(a=='.')||(a>='0'&&a<='9'))
				//check if a is numeric or alphabet
				{
					emailid[i]=a;//stores a in pass
					++i;
					cout<<a;
				}
				if(a=='\b'&&i>=1)//if user typed backspace
				//i should be greater than 1.
				{
					cout<<"\b \b";//rub the character behind the cursor.
					--i;
				}
				if(a=='\r')//if enter is pressed
				{
					emailid[i]='\0';//null means end of string.
					break;//break the loop
				}
			}
			cout<<"\n Enter Diploma Percentage :"; cin>>diploma_percentage;
		}
		void show_FE() {
			cout<<"\n Application ID    : "<<application_id;
			cout<<"\n Password          : "<<password2;
			cout<<"\n Full Name         : "<<full_name;
			cout<<"\n Address           : "<<address;
			cout<<"\n City              : "<<city;
			cout<<"\n State             : "<<state;
			cout<<"\n Cast              : "<<cast;
			cout<<"\n Category          : "<<category;
			cout<<"\n Gender            : "<<gender;
			cout<<"\n Email id          : "<<emailid;
			cout<<"\n HSC Percentage    : "<<hsc_percentage;
			cout<<"\n CET Score         : "<<cet_score;
			cout<<"\n JEE Score         : "<<jee_score;
		}
		void show_SE() {
			cout<<"\n Application ID      : "<<application_id;
			cout<<"\n Password            : "<<password2;
			cout<<"\n Full Name           : "<<full_name;
			cout<<"\n Address             : "<<address;
			cout<<"\n City                : "<<city;
			cout<<"\n State               : "<<state;
			cout<<"\n Cast                : "<<cast;
			cout<<"\n Category            : "<<category;
			cout<<"\n Gender              : "<<gender;
			cout<<"\n Email id            : "<<emailid;
			cout<<"\n Diploma Percentage  : "<<diploma_percentage;
		}
		void view_FE_student() {
			clrscr();
			cout<<"\n\n\n\t\tDISPLAY FE RECORDS !!!\n\n";
			fp1.open("feadd.dat",ios::in);
			while(fp1.read((char*)&l1,sizeof(labassistant)))
			{
				l1.show_FE();
				cout<<"\n\n====================================\n";
				getch();
			}
			fp1.close();
			getch();
		}
		void view_SE_student() {
			clrscr();
			cout<<"\n\n\n\t\tDISPLAY SE RECORDS !!!\n\n";
			fp1.open("addse.dat",ios::in);
			while(fp1.read((char*)&l1,sizeof(labassistant)))
			{
				l1.show_SE();
				cout<<"\n\n====================================\n";
				getch();
			}
			fp1.close();
			getch();
		}

		void view_all_student() {
			int choice15;
			do {
				cout<<"\n\t Display ALL Students ";
				cout<<"\n 1. FE \n 2. SE \n 3. Back To Menu";
				cout<<"\n Enter your Choice :";
				cin>>choice15;
				switch(choice15) {
					case 1 : clrscr();
							 l1.view_FE_student();
					break;
					case 2 : clrscr();
							 l1.view_SE_student();
					break;
					case 3 : choice15=0;
					break;
					default : cout<<"\a";
					break;
				}
			}while(choice15!=0);
		}
		void show_labassistant() {
			cout<<"ID NO.            :"<<id_no;
			cout<<"\n Name           :"<<first_name<<" "<<middle_name<<" "<<last_name;
			cout<<"\n Address        :"<<address1;
			cout<<"\n City           :"<<city1;
			cout<<"\n Gender         :"<<gender1;
			cout<<"\n Email id       :"<<email_id;
			cout<<"\n Password       : "<<password1;
			cout<<"\n Education      :"<<education;
			cout<<"\n Contact Number	 :"<<contact_number;
		}
		void view_labassistant_data() {
			clrscr();
			cout<<"\n\n\n\t\tDISPLAY LAB ASSISTANT RECORD !!!\n\n";
			fp1.open("assi.dat",ios::in);
			while(fp1.read((char*)&l1,sizeof(labassistant)))
			{
				l1.show_labassistant();
				cout<<"\n\n====================================\n";
				getch();
			}
			fp1.close();
			getch();
		}
		int return_id() {
			return id_no;
		}
		int return_application_id() {
			return application_id;
		}
		void  search_FE_student(int applicationid) {
			int flagg=0;
			fp1.open("feadd.dat",ios::in);
			while(fp1.read((char*)&l1,sizeof(labassistant)))
			{
				if(l1.return_application_id()==applicationid)
				{
					clrscr();
					l1.show_FE();
					flagg=1;
					cout<<"\n\n.....Record Found and Displayed......\n";
				}
			}
			fp1.close();
			if(flagg==0)
			cout<<"\n ID Number not in file....\n";
			cout<<"\n Reading of Data File Completed......\n";
		}
		void  search_SE_student(int applicationid) {
			int flagg=0;
			fp1.open("addse.dat",ios::in);
			while(fp1.read((char*)&l1,sizeof(labassistant)))
			{
				if(l1.return_application_id()==applicationid)
				{
					clrscr();
					l1.show_SE();
					flagg=1;
					cout<<"\n\n.....Record Found and Displayed......\n";
				}
			}
			fp1.close();
			if(flagg==0)
			cout<<"\n ID Number not in file....\n";
			cout<<"\n Reading of Data File Completed......\n";
		}
		void update_labassistant() {
				int no,found=0;
				clrscr();
				cout<<"\n\n\tTo Modify ";
				cout<<"\n\n\tPlease Enter The ID number of lab assistant";
				cin>>no;
				fp1.open("assi.dat",ios::in|ios::out);
				while(fp1.read((char*)&l1,sizeof(labassistant)) && found==0)
				{
					if(l1.return_id()==no)
					{
						l1.show_labassistant();
						cout<<"\n Please Enter The New Details of Lab assistant"<<endl;
						l1.l_registeration();
						int pos=-1*sizeof(l1);
						fp1.seekp(pos,ios::cur);
						fp1.write((char*)&l1,sizeof(labassistant));
						cout<<"\n\n\t Record Updated";
						found=1;
					}
				}
				fp1.close();
				if(found==0)
				cout<<"\n\n Record Not Found ";
				getch();
			}
			void update_FE_student() {
				int no,found=0;
				clrscr();
				cout<<"\n\n\tTo Modify ";
				cout<<"\n\n\tPlease Enter The Application ID number of student";
				cin>>no;
				fp1.open("feadd.dat",ios::in|ios::out);
				while(fp1.read((char*)&l1,sizeof(labassistant)) && found==0)
				{
					if(l1.return_application_id()==no)
					{
						l1.show_FE();
						cout<<"\nPlease Enter The New Details of student"<<endl;
						l1.add_FE_student();
						int pos=-1*sizeof(l1);
						fp1.seekp(pos,ios::cur);
						fp1.write((char*)&l1,sizeof(labassistant));
						cout<<"\n\n\t Record Updated";
						found=1;
					}
				}
				fp1.close();
				if(found==0)
				cout<<"\n\n Record Not Found ";
				getch();
			}
			void update_SE_student() {
				int no,found=0;
				clrscr();
				cout<<"\n\n\tTo Modify ";
				cout<<"\n\n\tPlease Enter The Application ID number of student";
				cin>>no;
				fp1.open("addse.dat",ios::in|ios::out);
				while(fp1.read((char*)&l1,sizeof(labassistant)) && found==0)
				{
					if(l1.return_application_id()==no)
					{
						l1.show_SE();
						cout<<"\n Please Enter The New Details of student"<<endl;
						l1.add_SE_student();
						int pos=-1*sizeof(l1);
						fp1.seekp(pos,ios::cur);
						fp1.write((char*)&l1,sizeof(labassistant));
						cout<<"\n\n\t Record Updated";
						found=1;
					}
				}
				fp1.close();
				if(found==0)
				cout<<"\n\n Record Not Found ";
				getch();
			}
			void delete_FE_student()
			{
				int n, flag=0;
				fp1.open("feadd.dat",ios::in|ios::out|ios::app);
				fp1.open("temp.dat",ios::out|ios::in);
				cout<<"\n Enter Application ID Number of Record To Delete : ";
				cin>>n;

				while(fp1.read((char*)&l1,sizeof(labassistant)))
				{
					if(l1.return_application_id()==n)
					{
						cout<<"\n The Following record is deleted....\n";
						l1.show_FE();
						flag++;
					}
					else
					{
						fp1.write((char*)&l1,sizeof(labassistant));
					}
				}
				fp1.close();
				if(flag==0)
					cout<<"\n The Record of Serial Number "<<n<<" is not in file....\n";
				cout<<"\n Reading of Data File Completed......\n";
				remove("feadd.dat");
				rename("temp.dat","addfe2.dat");
			}
			void delete_SE_student()
			{
				int n, flag=0;
				fp1.open("addse.dat",ios::out|ios::binary|ios::app);
				fp1.open("temp.dat",ios::out|ios::binary);
				cout<<"\n Enter Application ID Number of Record To Delete : ";
				cin>>n;

				while(fp1.read((char*)&l1,sizeof(labassistant)))
				{
					if(l1.return_application_id()==n)
					{
						cout<<"\n The Following record is deleted....\n";
						l1.show_FE();
						flag++;
					}
					else
					{
						fp1.write((char*)&l1,sizeof(labassistant));
					}
				}
				fp1.close();
				cout<<"\n Reading of Data File Completed......\n";
				remove("addse.dat");
				rename("temp.dat","addse2.dat");
			}
};
labassistant l1,l2;
void write_lab()
{
	fp1.open("assi.dat",ios::out|ios::app);
	clrscr();
	l1.l_registeration();
	fp1.write((char*)&l1,sizeof(labassistant));
	fp1.close();
	cout<<"\n Lab assistant record Has Been Created ";
	getch();
}
void write_add_fe() {
	fp2.open("feadd.dat",ios::out|ios::app);
	l2.add_FE_student();
	fp2.write((char*)&l2,sizeof(labassistant));
	fp2.close();
	cout<<"\n FE Student record Has Been Created ";
	getch();
}
void write_add_se() {
	fp1.open("addse.dat",ios::out|ios::app);
	l1.add_SE_student();
	fp1.write((char*)&l1,sizeof(labassistant));
	fp1.close();
	cout<<"\n SE Student record Has Been Created ";
	getch();
}

void lab_assistant()
{
	int choice1;
	do  {
		cout<<"\n 1. Registeration.\n 2. Login \n 3. Back to menu";
		cout<<"\n Enter your choice :";
		cin>>choice1;
		switch(choice1)
		{
			case 1: system("cls");
					write_lab();
			break;
			case 2: system("cls");
					l1.l_login();
			break;
			case 3:
					choice1=0;
			break;
			default:
					cout<<"\a";
			break;
		}
	}while(choice1!=0);

}
void options_lab() {
	int choice1;
	do {
		cout<<"\n 1. ADD STUDENT \n 2. UPDATE STUDENT \n 3. DELETE STUDENT \n 4. SEARCH STUDENT \n 5. VIEW ALL STUDENT DETAILS \n 6. VIEW LAB ASSISTANT DETAILS \n 7. UPDATE LAD ASSISTANT DETAILS \n 8. BACK TO MENU";
		cout<<"\n Enter the Choice :";
		cin>>choice1;
		switch(choice1)  {
			case 1 : system("cls");
					 add_admission();
			break;
			case 2 : system("cls");
					 student_update();
			break;
			case 3 : system("cls");
					 student_delete();
			break;
			case 4 : system("cls");
					 student_search();
			break;
			case 5 : system("cls");
					 l1.view_all_student();
			break;
			case 6 : system("cls");
					 l1.view_labassistant_data();;
			break;
			case 7 : system("cls");
					 l1.update_labassistant();
			break;
			case 8 : choice1=0;
			default :
					cout<<"\a";
			break;
		}
	}while(choice1!=0);
}
void add_admission()
{
	int choice2;
	do {
		cout<<"\n ADD NEW ADMITTED STUDENT \n========================\n";
		cout<<"\n 1. FE \n 2. SE \n 3. Back to Menu";
		cout<<"\n Enter the Choice :";
		cin>>choice2;
		switch(choice2)  {
			case 1 : system("cls");
					 write_add_fe();
			break;
			case 2 : system("cls");
					 write_add_se();
			break;
			case 3 : choice2=0;
			break;
			default :
					cout<<"\a";
			break;
		}
	}while(choice2!=0);
}
void student_delete() {
	int choice3;
	do {
		cout<<"\n 1. FE \n 2. SE \n 3. Back to Menu";
		cout<<"\n Enter the Choice :";
		cin>>choice3;
		switch(choice3)  {
			case 1 : system("cls");
					 l1.delete_FE_student();
			break;
			case 2 : system("cls");
					 l1.delete_SE_student();
			break;
			case 3 :choice3=0;
			break;
			default :
					cout<<"\a";
			break;
		}
	}while(choice3!=0);
}
void student_update() {
	int choice4;
	do {
		cout<<"\n 1. FE \n 2. SE \n 3. Back to Menu";
		cout<<"\n Enter the Choice :";
		cin>>choice4;
		switch(choice4)  {
			case 1 : system("cls");
					 l1.update_FE_student();
			break;
			case 2 : system("cls");
					 l1.update_SE_student();
			break;
			case 3 : choice4=0;
			break;
			default :
					cout<<"\a";
			break;
		}
	}while(choice4!=0);
}
void student_search() {
	int choice5,id;
	char a;
	do {
		cout<<"\n 1. FE \n 2. SE \n 3. Back to Menu";
		cout<<"\n Enter the Choice :";
		cin>>choice5;
			switch(choice5)  {
			case 1 :system("cls");
					cout<<"\n Enter Application ID Number of Record To Display: ";
					cin>>id;
					l1.search_FE_student(id);
			break;
			case 2 :system("cls");
					cout<<"\n Enter Application ID Number of Record To Display: ";
					cin>>id;
					l1.search_SE_student(id);
			break;
			case 3 :choice5=0;
			break;
			default :
					cout<<"\a";
			break;
		}
	}while(choice5!=0);
}
class staff:public labassistant {
	public:
		int id_no1;
		char first_name1[20];
		char middle_name1[20];
		char last_name1[20];
		char address11[100];
		char city11[10];
		char gender11[10];
		char email_id1[20];
		char password11[10];
		char education1[10];
		long int contact_number1;

		int roll_no;
		char student_name[500];

		int roll_no1;
		char student_name1[500];

		int physics_marks,chemistry_marks,maths_marks,softskill_marks,english_marks;
		float percentage;
		char grade;
	public:
		void s_registeration() {
			int i = 0;
			char a;//a Temp char

			cout<<"\n\t Registeration.....\n===================================\n";

			cout<<"\n ID Number :";
			cin>>id_no1;
			cout<<"\n Enter First Name :";
			for(i=0;;)//infinite loop
			{
				a=getch();//stores char typed in a
				if((a>='a'&&a<='z')||(a>='A'&&a<='Z'))
				//check if a is numeric or alphabet
				{
					first_name1[i]=a;//stores a in pass
					++i;
					cout<<a;
				}
				if(a=='\b'&&i>=1)//if user typed backspace
				//i should be greater than 1.
				{
					cout<<"\b \b";//rub the character behind the cursor.
					--i;
				}
				if(a=='\r')//if enter is pressed
				{
					first_name1[i]='\0';//null means end of string.
					break;//break the loop
				}
			}
			//gets(first_name);
			cout<<"\n Enter Middle Name :";
			for(i=0;;)//infinite loop
			{
				a=getch();//stores char typed in a
				if((a>='a'&&a<='z')||(a>='A'&&a<='Z'))
				//check if a is numeric or alphabet
				{
					middle_name1[i]=a;//stores a in pass
					++i;
					cout<<a;
				}
				if(a=='\b'&&i>=1)//if user typed backspace
				//i should be greater than 1.
				{
					cout<<"\b \b";//rub the character behind the cursor.
					--i;
				}
				if(a=='\r')//if enter is pressed
				{
					middle_name1[i]='\0';//null means end of string.
					break;//break the loop
				}
			}
			//gets(middle_name);
			cout<<"\n Enter Last Name :";
			for(i=0;;)//infinite loop
			{
				a=getch();//stores char typed in a
				if((a>='a'&&a<='z')||(a>='A'&&a<='Z'))
				//check if a is numeric or alphabet
				{
					last_name1[i]=a;//stores a in pass
					++i;
					cout<<a;
				}
				if(a=='\b'&&i>=1)//if user typed backspace
				//i should be greater than 1.
				{
					cout<<"\b \b";//rub the character behind the cursor.
					--i;
				}
				if(a=='\r')//if enter is pressed
				{
					last_name1[i]='\0';//null means end of string.
					break;//break the loop
				}
			}
			//gets(last_name);
			cout<<"\n Enter Address :";
			for(i=0;;)//infinite loop
			{
				a=getch();//stores char typed in a
				if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a>='0'&&a<='9')||(a=='/')||(a==' ')||(a==','))
				//check if a is numeric or alphabet
				{
					address11[i]=a;//stores a in pass
					++i;
					cout<<a;
				}
				if(a=='\b'&&i>=1)//if user typed backspace
				//i should be greater than 1.
				{
					cout<<"\b \b";//rub the character behind the cursor.
					--i;
				}
				if(a=='\r')//if enter is pressed
				{
					address11[i]='\0';//null means end of string.
					break;//break the loop
				}
			}
			//gets(address1);
			cout<<"\n Enter City :";
			for(i=0;;)//infinite loop
			{
				a=getch();//stores char typed in a
				if((a>='a'&&a<='z')||(a>='A'&&a<='Z'))
				//check if a is numeric or alphabet
				{
					city11[i]=a;//stores a in pass
					++i;
					cout<<a;
				}
				if(a=='\b'&&i>=1)//if user typed backspace
				//i should be greater than 1.
				{
					cout<<"\b \b";//rub the character behind the cursor.
					--i;
				}
				if(a=='\r')//if enter is pressed
				{
					city11[i]='\0';//null means end of string.
					break;//break the loop
				}
			}
			//gets(city1);
			cout<<"\n Enter Gender :";
			for(i=0;;)//infinite loop
			{
				a=getch();//stores char typed in a
				if((a>='a'&&a<='z')||(a>='A'&&a<='Z'))
				//check if a is numeric or alphabet
				{
					gender11[i]=a;//stores a in pass
					++i;
					cout<<a;
				}
				if(a=='\b'&&i>=1)//if user typed backspace
				//i should be greater than 1.
				{
					cout<<"\b \b";//rub the character behind the cursor.
					--i;
				}
				if(a=='\r')//if enter is pressed
				{
					gender11[i]='\0';//null means end of string.
					break;//break the loop
				}
			}
			//gets(gender1);
			cout<<"\n Email id be the username when you login !!!"<<"\n Enter Email ID :";
			for(i=0;;)//infinite loop
			{
				a=getch();//stores char typed in a
				if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a=='@')||(a=='.')||(a>='0'&&a<='9'))
				//check if a is numeric or alphabet
				{
					email_id1[i]=a;//stores a in pass
					++i;
					cout<<a;
				}
				if(a=='\b'&&i>=1)//if user typed backspace
				//i should be greater than 1.
				{
					cout<<"\b \b";//rub the character behind the cursor.
					--i;
				}
				if(a=='\r')//if enter is pressed
				{
					email_id1[i]='\0';//null means end of string.
					break;//break the loop
				}
			}
			//gets(email_id);
			cout<<"\n Enter Password :";
			for(i=0;;)//infinite loop
			{
				a=getch();//stores char typed in a
				if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a>='0'&&a<='9')||(a>='!'&&a<='$'))
				//check if a is numeric or alphabet
				{
					password11[i]=a;//stores a in pass
					++i;
					cout<<"*";
				}
				if(a=='\b'&&i>=1)//if user typed backspace
				//i should be greater than 1.
				{
					cout<<"\b \b";//rub the character behind the cursor.
					--i;
				}
				if(a=='\r')//if enter is pressed
				{
					password11[i]='\0';//null means end of string.
					break;//break the loop
				}
			}
			cout<<"\n Enter Education :";
			for(i=0;;)//infinite loop
			{
				a=getch();//stores char typed in a
				if((a>='a'&&a<='z')||(a>='A'&&a<='Z'))
				//check if a is numeric or alphabet
				{
					education1[i]=a;//stores a in pass
					++i;
					cout<<a;
				}
				if(a=='\b'&&i>=1)//if user typed backspace
				//i should be greater than 1.
				{
					cout<<"\b \b";//rub the character behind the cursor.
					--i;
				}
				if(a=='\r')//if enter is pressed
				{
					education1[i]='\0';//null means end of string.
					break;//break the loop
				}
			}
			//gets(education);
			cout<<"\n Enter Contact Number :";
			cin>>contact_number1;
		}
		int return_id() {
			return id_no1;
		}
		char *return_email_id1() {
			return email_id1;
		}
		char *return_password1() {
			return password11;
		}
		void s_login() {
			char usernames[50],passwords[10],a;
			int i=0,flag11=0;
			cout<<"\n Staff Login\n=======================\n";
			flag11=0;
			cout<<"\n Enter Username :";
			for(i=0;;)//infinite loop
			{
				a=getch();//stores char typed in a
				if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a>='0'&&a<='9')||(a=='@')||(a=='.'))
				//check if a is numeric or alphabet
				{
					usernames[i]=a;//stores a in pass
					++i;
					cout<<a;
				}
				if(a=='\b'&&i>=1)//if user typed backspace
				//i should be greater than 1.
				{
					cout<<"\b \b";//rub the character behind the cursor.
					--i;
				}
				if(a=='\r')//if enter is pressed
				{
					usernames[i]='\0';//null means end of string.
					break;//break the loop
				}
			}
			cout<<"\n Enter Password :";
			for(i=0;;)//infinite loop
			{
				a=getch();//stores char typed in a
				if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a>='0'&&a<='9'))
				//check if a is numeric or alphabet
				{
					passwords[i]=a;//stores a in pass
					++i;
					cout<<"*";
				}
				if(a=='\b'&&i>=1)//if user typed backspace
				//i should be greater than 1.
				{
					cout<<"\b \b";//rub the character behind the cursor.
					--i;
				}
				if(a=='\r')//if enter is pressed
				{
					passwords[i]='\0';//null means end of string.
					break;//break the loop
				}
			}
			int f=0;
			fs1.open("stafff.dat",ios::in);
			while(fs1.read((char*)&s1,sizeof(staff)))
			{
				if(strcmp(return_email_id1(),usernames)==0 &&strcmp(return_password1(),passwords)==0) {
					f=1;
				}
				else {
					f=0;
				}
				if(f==1) {
				   if(strcmp(s1.email_id1,usernames)==0 && strcmp(s1.password11,passwords)==0) {
						flag11=1;
						cout<<"\n Login Successfully ....";
						getch();
					}
				}
			}
			fs1.close();

			if(flag11==1) {
				system("cls");
				options_staff();
			}
			else {
				cout<<"\n Incorrect Username or Password !!!!!!";
			}
		}
		void show_staff() {
			cout<<"\n ID NO.         :"<<id_no1;
			cout<<"\n Name           :"<<first_name1<<" "<<middle_name1<<" "<<last_name1;
			cout<<"\n Address        :"<<address11;
			cout<<"\n City           :"<<city11;
			cout<<"\n Gender         :"<<gender11;
			cout<<"\n Email id       :"<<email_id1;
			cout<<"\n Password       : "<<password11;
			cout<<"\n Education      :"<<education1;
			cout<<"\n Contact Number :"<<contact_number1;
		}
		void view_staff_details() {
			clrscr();
			cout<<"\n\n\n\t\tDISPLAY STAFF RECORDS !!!\n\n";
			fs1.open("stafff.dat",ios::in);
			while(fs1.read((char*)&s1,sizeof(staff)))
			{
				s1.show_staff();
				cout<<"\n\n====================================\n";
				getch();
			}
			fs1.close();
			getch();
		}

		void update_staff_details()  {
			int no1,found1=0;
			clrscr();
			cout<<"\n\n\t To Modify ";
			cout<<"\n\n\t Please Enter The Staff ID number of ";
			cin>>no1;
			fs1.open("stafff.dat",ios::in|ios::out);
			while(fs1.read((char*)&s1,sizeof(staff)) && found1==0)
			{
				if(s1.return_id()==no1)
				{
					s1.show_staff();
					cout<<"\n Please Enter The New Details of Lab assistant"<<endl;
					s1.s_registeration();
					int pos=-1*sizeof(s1);
					fs1.seekp(pos,ios::cur);
					fs1.write((char*)&s1,sizeof(staff));
					cout<<"\n\n\t Record Updated";
					found1=1;
				}
			}
			fs1.close();
			if(found1==0)
				cout<<"\n\n Record Not Found ";
			getch();
		}
		void generate_FE_roll_list() {
			int i;
			char a;
			cout<<"\n Enter Roll No. :";
			cin>>roll_no;
			cout<<"\n Enter Student Name :";
			for(i=0;;)//infinite loop
			{
				a=getch();//stores char typed in a
				if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a==' '))
				//check if a is numeric or alphabet
				{
					student_name[i]=a;//stores a in pass
					++i;
					cout<<a;
				}
				if(a=='\b'&&i>=1)//if user typed backspace
				//i should be greater than 1.
				{
					cout<<"\b \b";//rub the character behind the cursor.
					--i;
				}
				if(a=='\r')//if enter is pressed
				{
					student_name[i]='\0';//null means end of string.
					break;//break the loop
				}
			}
		}
		void generate_SE_roll_list() {
			int i;
			char a;
			cout<<"\n Enter Roll No. :";
			cin>>roll_no1;
			cout<<"\n Enter Student Name :";
			for(i=0;;)//infinite loop
			{
				a=getch();//stores char typed in a
				if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a==' '))
				//check if a is numeric or alphabet
				{
					student_name1[i]=a;//stores a in pass
					++i;
					cout<<a;
				}
				if(a=='\b'&&i>=1)//if user typed backspace
				//i should be greater than 1.
				{
					cout<<"\b \b";//rub the character behind the cursor.
					--i;
				}
				if(a=='\r')//if enter is pressed
				{
					student_name1[i]='\0';//null means end of string.
					break;//break the loop
				}
			}
		}
		void show_FE_roll_list() {
			cout<<setw(4)<<roll_no<<setw(12)<<student_name<<setw(10)<<endl;
		}
		void show_SE_roll_list() {
			cout<<setw(4)<<roll_no1<<setw(12)<<student_name1<<setw(10)<<endl;
		}
		void view_roll_list() {
			int choice17;
			do {
				cout<<"\n\t Roll list For Following Years :";
				cout<<"\n1. FE \n2. SE \n3. Back to Menu";
				cout<<"\n Enter your choice :";
				cin>>choice17;
				switch(choice17) {
					case 1 :system("cls");
							cout<<"\n\t FE ROLL LIST ";
							FE_roll_list();
					break;
					case 2 :system("cls");
							cout<<"\n\t SE ROLL LIST ";
							SE_roll_list();
					break;
					case 3 : choice17=0;
					break;
					default : cout<<"\a";
					break;
				}
			}while(choice17!=0);
		}

		void calculate_grade()
		{
			percentage=(physics_marks+chemistry_marks+maths_marks+english_marks+softskill_marks)/5.0;
			if(percentage>=60)
				grade='A';
			else if(percentage>=50 && percentage<60)
				grade='B';
			else if(percentage>=33 && percentage<50)
				grade='C';
			else
				grade='F';
		}
		void get_FE_marks()
		{
			cout<<"\n Enter The roll number of student ";
			cin>>roll_no;
			cout<<"\n Enter The Name of student ";
			gets(student_name);
			cout<<"\n Enter The marks in physics out of 100 : ";
			cin>>physics_marks;
			cout<<"\n Enter The marks in chemistry out of 100 : ";
			cin>>chemistry_marks;
			cout<<"\n Enter The marks in maths out of 100 : ";
			cin>>maths_marks;
			cout<<"\n Enter The marks in english out of 100 : ";
			cin>>english_marks;
			cout<<"\n Enter The marks in computer science out of 100 : ";
			cin>>softskill_marks;
			calculate_grade();
		}
		void get_SE_marks()
		{
			cout<<"\n Enter The roll number of student ";
			cin>>roll_no1;
			cout<<"\n Enter The Name of student ";
			gets(student_name1);
			cout<<"\n Enter The marks in physics out of 100 : ";
			cin>>physics_marks;
			cout<<"\n Enter The marks in chemistry out of 100 : ";
			cin>>chemistry_marks;
			cout<<"\n Enter The marks in maths out of 100 : ";
			cin>>maths_marks;
			cout<<"\n Enter The marks in english out of 100 : ";
			cin>>english_marks;
			cout<<"\n Enter The marks in computer science out of 100 : ";
			cin>>softskill_marks;
			calculate_grade();
		}
		int return_roll_no()
		{
			return roll_no;
		}
		void update_FE_marks() {
			int no,found=0;
			clrscr();
			cout<<"\n\n\tTo Modify ";
			cout<<"\n\n\tPlease Enter The Roll number of student";
			cin>>no;
			fs1.open("FE_marks.dat",ios::in|ios::out);
			while(fp1.read((char*)&s1,sizeof(staff)) && found==0)
			{
				if(s1.return_roll_no()==no)
				{
					s1.show_FE_marks();
					cout<<"\nPlease Enter The New Details of student"<<endl;
					s1.get_FE_marks();
					int pos=-1*sizeof(s1);
					fs1.seekp(pos,ios::cur);
					fs1.write((char*)&l1,sizeof(staff));
					cout<<"\n\n\t Record Updated";
					found=1;
				}
			}
			fp1.close();
			if(found==0)
				cout<<"\n\n Record Not Found ";
			getch();
		}
		void update_SE_marks() {
			int no,found=0;
			clrscr();
			cout<<"\n\n\tTo Modify ";
			cout<<"\n\n\tPlease Enter The Roll number of student";
			cin>>no;
			fs1.open("SE_marks.dat",ios::in|ios::out);
			while(fp1.read((char*)&s1,sizeof(staff)) && found==0)
			{
				if(s1.return_roll_no()==no)
				{
					s1.show_SE_marks();
					cout<<"\nPlease Enter The New Details of student"<<endl;
					s1.get_SE_marks();
					int pos=-1*sizeof(s1);
					fs1.seekp(pos,ios::cur);
					fs1.write((char*)&l1,sizeof(staff));
					cout<<"\n\n\t Record Updated";
					found=1;
				}
			}
			fp1.close();
			if(found==0)
				cout<<"\n\n Record Not Found ";
			getch();
		}
		void show_FE_marks()
		{
			cout<<"\n Roll number of student      : "<<roll_no;
			cout<<"\n Name of student             : "<<student_name;
			cout<<"\n Marks in Physics            : "<<physics_marks;
			cout<<"\n Marks in Chemistry          : "<<chemistry_marks;
			cout<<"\n Marks in Maths              : "<<maths_marks;
			cout<<"\n Marks in English            : "<<english_marks;
			cout<<"\n Marks in Soft Skill         : "<<softskill_marks;
			cout<<"\n Percentage of student is    : "<<setprecision(2)<<percentage;
			cout<<"\n Grade of student is         : "<<grade;
		}
		void view_FE_marks() {
			clrscr();
			cout<<"\n\n\n\t\tDISPLAY FE MARKS \n\n";
			fs1.open("FE_marks.dat",ios::in);
			while(fs1.read((char*)&s1,sizeof(staff)))
			{
				s1.show_FE_marks();
				cout<<"\n\n====================================\n";
				getch();
			}
			fs1.close();
			getch();
		}
		void view_SE_marks() {
			clrscr();
			cout<<"\n\n\n\t\tDISPLAY SE MARKS \n\n";
			fs1.open("SE_marks.dat",ios::in);
			while(fs1.read((char*)&s1,sizeof(staff)))
			{
				s1.show_SE_marks();
				cout<<"\n\n====================================\n";
				getch();
			}
			fs1.close();
			getch();
		}
		void show_SE_marks()
		{
			cout<<"\n Roll number of student      : "<<roll_no1;
			cout<<"\n Name of student             : "<<student_name1;
			cout<<"\n Marks in Physics            : "<<physics_marks;
			cout<<"\n Marks in Chemistry          : "<<chemistry_marks;
			cout<<"\n Marks in Maths              : "<<maths_marks;
			cout<<"\n Marks in English            : "<<english_marks;
			cout<<"\n Marks in Soft Skill         : "<<softskill_marks;
			cout<<"\n Percentage of student is    : "<<setprecision(2)<<percentage;
			cout<<"\n Grade of student is         : "<<grade;
		}
		void show_marks_tabular()
		{
			cout<<roll_no<<setw(12)<<student_name<<setw(10)<<physics_marks<<setw(3)<<chemistry_marks<<setw(3)<<maths_marks<<setw(3)<<english_marks<<setw(3)<<softskill_marks<<setw(6)<<setprecision(3)<<percentage<<"   "<<grade<<endl;
		}
		void add_marks() {
			int choice19;
			do {
				cout<<"\n 1. FE \n 2. SE \n 3. Back to Menu ";
				cout<<"\n Enter your choice :";
				cin>>choice19;
				switch(choice19) {
					case 1 : system("cls");
							 write_FE_marks();
					break;
					case 2 : system("cls");
							 write_SE_marks();
					break;
					case 3 : choice19=0;
					break;
					default : cout<<"\a";
					break;
				}
			}while(choice19!=0);
		}
		void view_marks() {
			int choice18;
			do {
				cout<<"\n 1. FE\n 2. SE \n 3. Back to Menu ";
				cout<<"\n Enter your choice :";
				cin>>choice18;
				switch(choice18) {
					case 1 : system("cls");
							 s1.view_FE_marks();
					break;
					case 2 : system("cls");
							 s1.view_SE_marks();
					break;
					case 3 : choice18=0;
					break;
					default : cout<<"\a";
					break;
				}
			}while(choice18!=0);
		}
		void edit_marks() {
			int choice18;
			do {
				cout<<"\n 1. FE\n 2. SE \n 3. Back to Menu ";
				cout<<"\n Enter your choice :";
				cin>>choice18;
				switch(choice18) {
					case 1 : system("cls");
							 s1.update_FE_marks();
					break;
					case 2 : system("cls");
							 s1.update_SE_marks();
					break;
					case 3 : choice18=0;
					break;
					default : cout<<"\a";
					break;
				}
			}while(choice18!=0);
		}
};

staff s1,s2;
void staff_method() {
	int choice12;
	do  {
		cout<<"\n 1. Registeration \n 2. Login \n 3. Back to menu";
		cout<<"\n Enter your choice :";
		cin>>choice12;
		switch(choice12)
		{
			case 1: system("cls");
					write_staff();
			break;
			case 2: system("cls");
					s1.s_login();
			break;
			case 3: choice12=0;
			break;
			default: cout<<"\a";
			break;
		}
	}while(choice12!=0);

}
void write_staff()
{
	fs1.open("stafff.dat",ios::out|ios::app);
	s1.s_registeration();
	fs1.write((char*)&s1,sizeof(staff));
	fs1.close();
	cout<<"\n Staff record Has Been Created ";
	getch();
}
void write_FE_roll_list() {
	fs1.open("FE_roll1.dat",ios::out|ios::app);
	s1.generate_FE_roll_list();
	fs1.write((char*)&s1,sizeof(staff));
	fs1.close();
	cout<<"\n FE Roll list Created ";
	getch();
}
void write_SE_roll_list() {
	fs1.open("SE_roll1.dat",ios::out|ios::app);
	s1.generate_SE_roll_list();
	fs1.write((char*)&s1,sizeof(staff));
	fs1.close();
	cout<<"\n SE Roll list Created ";
	getch();
}
void write_FE_marks() {
	fs1.open("FE_marks.dat",ios::out|ios::app);
	s1.get_FE_marks();
	fs1.write((char*)&s1,sizeof(staff));
	fs1.close();
	cout<<"\n FE marks are Written";
	getch();
}
void write_SE_marks() {
	fs1.open("SE_marks.dat",ios::out|ios::app);
	s1.get_SE_marks();
	fs1.write((char*)&s1,sizeof(staff));
	fs1.close();
	cout<<"\n SE Marks are Written";
	getch();
}

void FE_roll_list()
{
	clrscr();
	fs2.open("FE_roll1.dat",ios::in);
	if(!fs2)
	{
		cout<<" ERROR!!! FILE COULD NOT BE OPEN\n\n\n Go To Entry Menu to create File";
		cout<<"\n\n\n Program is closing ....";
		getch();
	}

	cout<<"\n\n\t\t ALL STUDENTS ROLL LIST \n\n";
	cout<<"\n====================================================\n";
	cout<<"Roll No.   Name";
	cout<<"\n====================================================\n";

	while(fs2.read((char*)&s2,sizeof(staff)))
	{
		s2.show_FE_roll_list();
	}
	fs2.close();
	getch();
}
void SE_roll_list()
{
	clrscr();
	fs2.open("SE_roll1.dat",ios::in);
	if(!fs2)
	{
		cout<<"ERROR!!! FILE COULD NOT BE OPEN\n\n\n Go To Entry Menu to create File";
		cout<<"\n\n\n Program is closing ....";
		getch();
	}

	cout<<"\n\n\t\t ALL STUDENTS ROLL LIST \n\n";
	cout<<"\n====================================================\n";
	cout<<"Roll No.   Name"<<endl;
	cout<<"\n====================================================\n";

	while(fs2.read((char*)&s1,sizeof(staff)))
	{
		s1.show_SE_roll_list();
	}
	fs2.close();
	getch();
}

void options_staff() {
	int choice13;
	do  {
		cout<<"\n 1. GENERATE ROLL LIST \n 2. ADD MARKS \n 3. VIEW STAFF DETAILS \n 4. VIEW ROLL LIST \n 5. VIEW MARKS \n 6. UPDATE STAFF DETAILS \n 7. EDIT MARKS \n 8. BACK TO MENU ";
		cout<<"\n Enter your choice :";
		cin>>choice13;
		switch(choice13)
		{
			case 1: system("cls");
					roll_list();
			break;
			case 2: system("cls");
					s1.add_marks();
			break;
			case 3: system("cls");
					s1.view_staff_details();
			break;
			case 4: system("cls");
					s1.view_roll_list();
			break;
			case 5: system("cls");
					s1.view_marks();
			break;
			case 6: system("cls");
					s1.update_staff_details();
			break;
			case 7: system("cls");
					s1.edit_marks();
			break;
			case 8: choice13=0;
			break;
			default:
					cout<<"\a";
			break;
		}
	}while(choice13!=0);
}
void roll_list() {
	int choice16;
	do {
		cout<<"\n\t Roll list For Following Years :";
		cout<<"\n 1. FE \n 2. SE \n 3. Back to Menu";
		cout<<"\n Enter your choice :";
		cin>>choice16;
		switch(choice16) {
			case 1 :system("cls");
					cout<<"\n\t GENERATE FE ROLL LIST ";
					write_FE_roll_list();
			break;
			case 2 :system("cls");
					cout<<"\n\t GENERATE SE ROLL LIST ";
					write_SE_roll_list();
			break;
			case 3 : choice16=0;
			break;
			default : cout<<"\a";
			break;
		}
	}while(choice16!=0);
}
class student_class :public staff{
	public:
		int prn_no;
		char password_stud[10];
		char name[50];
		char address[500];
		char gender[10];
		char mail_id[20];
		long int contact_number;

	public:
		void Register_FE_student() {
			int i = 0;
			char a;//a Temp char

			//cout<<"\n\t ADD STUDENT \n===================================\n";
			cout<<"\n PRN NO will be the username to login..\n Enter PRN No :";
			cin>>prn_no;
			cout<<"\n Enter Password :";
			for(i=0;;)//infinite loop
			{
				a=getch();//stores char typed in a
				if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a>='0'&&a<='9')||(a>='!'&&a<='$'))
				//check if a is numeric or alphabet
				{
					password_stud[i]=a;//stores a in pass
					++i;
					cout<<"*";
				}
				if(a=='\b'&&i>=1)//if user typed backspace
				//i should be greater than 1.
				{
					cout<<"\b \b";//rub the character behind the cursor.
					--i;
				}
				if(a=='\r')//if enter is pressed
				{
					password_stud[i]='\0';//null means end of string.
					break;//break the loop
				}
			}
			cout<<"\n Enter Student Full Name :";
			for(i=0;;)//infinite loop
			{
				a=getch();//stores char typed in a
				if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a==' '))
				//check if a is numeric or alphabet
				{
					name[i]=a;//stores a in pass
					++i;
					cout<<a;
				}
				if(a=='\b'&&i>=1)//if user typed backspace
				//i should be greater than 1.
				{
					cout<<"\b \b";//rub the character behind the cursor.
					--i;
				}
				if(a=='\r')//if enter is pressed
				{
					name[i]='\0';//null means end of string.
					break;//break the loop

				}
			}
			cout<<"\n Enter Address :";
			for(i=0;;)//infinite loop
			{
				a=getch();//stores char typed in a
				if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a>='0'&&a<='9')||(a=='/')||(a==' ')||(a==','))
				//check if a is numeric or alphabet
				{
					address[i]=a;//stores a in pass
					++i;
					cout<<a;
				}
				if(a=='\b'&&i>=1)//if user typed backspace
				//i should be greater than 1.
				{
					cout<<"\b \b";//rub the character behind the cursor.
					--i;
				}
				if(a=='\r')//if enter is pressed
				{
					address[i]='\0';//null means end of string.
					break;//break the loop
				}
			}
			cout<<"\n Enter Gender :";
			for(i=0;;)//infinite loop
			{
				a=getch();//stores char typed in a
				if((a>='a'&&a<='z')||(a>='A'&&a<='Z'))
				//check if a is numeric or alphabet
				{
					gender[i]=a;//stores a in pass
					++i;
					cout<<a;
				}
				if(a=='\b'&&i>=1)//if user typed backspace
				//i should be greater than 1.
				{
					cout<<"\b \b";//rub the character behind the cursor.
					--i;
				}
				if(a=='\r')//if enter is pressed
				{
					gender[i]='\0';//null means end of string.
					break;//break the loop
				}
			}
			cout<<"\n Enter Email ID :";
			for(i=0;;)//infinite loop
			{
				a=getch();//stores char typed in a
				if((a>='a'&&a<='z')||(a=='@')||(a=='.')||(a>='0'&&a<='9'))
				//check if a is numeric or alphabet
				{
					mail_id[i]=a;//stores a in pass
					++i;
					cout<<a;
				}
				if(a=='\b'&&i>=1)//if user typed backspace
				//i should be greater than 1.
				{
					cout<<"\b \b";//rub the character behind the cursor.
					--i;
				}
				if(a=='\r')//if enter is pressed
				{
					mail_id[i]='\0';//null means end of string.
					break;//break the loop
				}
			}
			cout<<"\n Enter Contact Number :";
			cin>>contact_number;
		}
		int return_prn_no() {
			return prn_no;
		}
		char *return_studentpassword() {
			return password_stud;
		}
		void show_FE_registeration() {
			cout<<"\n PRN No            : "<<prn_no;
			cout<<"\n Password          : "<<password_stud;
			cout<<"\n Full Name         : "<<name;
			cout<<"\n Address           : "<<address;
			cout<<"\n Gender            : "<<gender;
			cout<<"\n Email id          : "<<mail_id;
			cout<<"\n Contact Number    : "<<contact_number;
		}
		void Register_SE_student() {
			int i = 0;
			char a;//a Temp char

			//cout<<"\n\t ADD STUDENT \n===================================\n";
			cout<<"\n PRN NO will be the username to login..\n Enter PRN No :";
			cin>>prn_no;
			cout<<"\n Enter Password :";
			for(i=0;;)//infinite loop
			{
				a=getch();//stores char typed in a
				if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a>='0'&&a<='9')||(a>='!'&&a<='$'))
				//check if a is numeric or alphabet
				{
					password_stud[i]=a;//stores a in pass
					++i;
					cout<<"*";
				}
				if(a=='\b'&&i>=1)//if user typed backspace
				//i should be greater than 1.
				{
					cout<<"\b \b";//rub the character behind the cursor.
					--i;
				}
				if(a=='\r')//if enter is pressed
				{
					password_stud[i]='\0';//null means end of string.
					break;//break the loop
				}
			}
			cout<<"\n Enter Student Full Name :";
			for(i=0;;)//infinite loop
			{
				a=getch();//stores char typed in a
				if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a==' '))
				//check if a is numeric or alphabet
				{
					name[i]=a;//stores a in pass
					++i;
					cout<<a;
				}
				if(a=='\b'&&i>=1)//if user typed backspace
				//i should be greater than 1.
				{
					cout<<"\b \b";//rub the character behind the cursor.
					--i;
				}
				if(a=='\r')//if enter is pressed
				{
					name[i]='\0';//null means end of string.
					break;//break the loop

				}
			}
			cout<<"\n Enter Address :";
			for(i=0;;)//infinite loop
			{
				a=getch();//stores char typed in a
				if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a>='0'&&a<='9')||(a=='/')||(a==' ')||(a==','))
				//check if a is numeric or alphabet
				{
					address[i]=a;//stores a in pass
					++i;
					cout<<a;
				}
				if(a=='\b'&&i>=1)//if user typed backspace
				//i should be greater than 1.
				{
					cout<<"\b \b";//rub the character behind the cursor.
					--i;
				}
				if(a=='\r')//if enter is pressed
				{
					address[i]='\0';//null means end of string.
					break;//break the loop
				}
			}
			cout<<"\n Enter Gender :";
			for(i=0;;)//infinite loop
			{
				a=getch();//stores char typed in a
				if((a>='a'&&a<='z')||(a>='A'&&a<='Z'))
				//check if a is numeric or alphabet
				{
					gender[i]=a;//stores a in pass
					++i;
					cout<<a;
				}
				if(a=='\b'&&i>=1)//if user typed backspace
				//i should be greater than 1.
				{
					cout<<"\b \b";//rub the character behind the cursor.
					--i;
				}
				if(a=='\r')//if enter is pressed
				{
					gender[i]='\0';//null means end of string.
					break;//break the loop
				}
			}
			cout<<"\n Enter Email ID :";
			for(i=0;;)//infinite loop
			{
				a=getch();//stores char typed in a
				if((a>='a'&&a<='z')||(a=='@')||(a=='.')||(a>='0'&&a<='9'))
				//check if a is numeric or alphabet
				{
					mail_id[i]=a;//stores a in pass
					++i;
					cout<<a;
				}
				if(a=='\b'&&i>=1)//if user typed backspace
				//i should be greater than 1.
				{
					cout<<"\b \b";//rub the character behind the cursor.
					--i;
				}
				if(a=='\r')//if enter is pressed
				{
					mail_id[i]='\0';//null means end of string.
					break;//break the loop
				}
			}
			cout<<"\n Enter Contact Number :";
			cin>>contact_number;
		}
		void show_SE_registeration() {
			cout<<"\n PRN No            : "<<prn_no;
			cout<<"\n Password          : "<<password_stud;
			cout<<"\n Full Name         : "<<name;
			cout<<"\n Address           : "<<address;
			cout<<"\n Gender            : "<<gender;
			cout<<"\n Email id          : "<<mail_id;
			cout<<"\n Contact Number    : "<<contact_number;
		}

		void student_registeration() {
			int choice1;
			do {
				cout<<"\n 1. FE\n 2. SE\n 3. Back to Menu";
				cout<<"\n Enter your choice :";
				cin>>choice1;
				switch(choice1) {
					case 1 : system("cls");
							 write_FE_registeration();
					break;
					case 2 : system("cls");
							 write_SE_registeration();
					break;
					case 3 : choice1=0;
					break;
					default :  cout<<"\a";
					break;
				}
			}while(choice1!=0);
		}
		void login_FE_student() {
			int prn,passwordstud1[10],a;
			int i=0;
			cout<<"\n Student Login\n=======================\n";
			flag=0;
			cout<<"\n Enter Username :";
			cin>>prn;
			cout<<"\n Enter Password :";
			for(i=0;;)//infinite loop
			{
				a=getch();//stores char typed in a
				if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a>='0'&&a<='9'))
				//check if a is numeric or alphabet
				{
					passwordstud1[i]=a;//stores a in pass
					++i;
					cout<<"*";
				}
				if(a=='\b'&&i>=1)//if user typed backspace
				//i should be greater than 1.
				{
					cout<<"\b \b";//rub the character behind the cursor.
					--i;
				}
				if(a=='\r')//if enter is pressed
				{
					passwordstud1[i]='\0';//null means end of string.
					break;//break the loop
				}
			}
			if(return_prn_no()==prn && stud.password_stud==passwordstud1) {
				flag=1;
				cout<<"\n Login Success";
			}
			if(flag=1) {
				clrscr();
				options_student();
			}
		}
		void login_SE_student() {
			int prn,passwordstud1[10],a;
			int i=0;
			cout<<"\n Student Login\n=======================\n";
			flag=0;
			cout<<"\n Enter Username :";
			cin>>prn;
			cout<<"\n Enter Password :";
			for(i=0;;)//infinite loop
			{
				a=getch();//stores char typed in a
				if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a>='0'&&a<='9'))
				//check if a is numeric or alphabet
				{
					passwordstud1[i]=a;//stores a in pass
					++i;
					cout<<"*";
				}
				if(a=='\b'&&i>=1)//if user typed backspace
				//i should be greater than 1.
				{
					cout<<"\b \b";//rub the character behind the cursor.
					--i;
				}
				if(a=='\r')//if enter is pressed
				{
					passwordstud1[i]='\0';//null means end of string.
					break;//break the loop
				}
			}
			if(return_prn_no()==prn && stud.password_stud==passwordstud1) {
				flag=1;
				cout<<"\n Login Success";
			}
			if(flag=1) {
				clrscr();
				options_student();
			}
		}
		void student_login() {
			int choice1;
			do {
				cout<<"\n 1. FE\n 2. SE\n 3. Back to Menu";
				cout<<"\n Enter your choice :";
				cin>>choice1;
				switch(choice1) {
					case 1 : system("cls");
							 stud.login_FE_student();
					break;
					case 2 : system("cls");
							 stud.login_SE_student();
					break;
					case 3 : choice1=0;
					break;
					default : cout<<"\a";
					break;
				}
			}while(choice1!=0);
		}
};
student_class stud;
void write_FE_registeration() {
	fs2.open("reg_fe.dat",ios::out|ios::app);
	stud.Register_FE_student();
	fs2.write((char*)&stud,sizeof(student_class));
	fs2.close();
	cout<<"\n\t Student Registered ";
	getch();
}
void write_SE_registeration() {
	fs2.open("reg_se.dat",ios::out|ios::app);
	stud.Register_SE_student();
	fs2.write((char*)&stud,sizeof(student_class));
	fs2.close();
	cout<<"\n\t Student Registered ";
	getch();
}
void student_method() {
	int choice;
	do {
		cout<<"\n 1. Student Registeration \n 2. Student Login \n 3. Back to Menu";
		cout<<"\n Enter Your choice :";
		cin>>choice;
		switch(choice) {
			case 1 : system("cls");
					 stud.student_registeration();
			break;
			case 2 : system("cls");
					 stud.student_login();
			break;
			case 3 : choice=0;
			break;
			default :cout<<"\a";
			break;
		}
	}while(choice!=0);
}
void options_student() {
	int choice12;
	do {
		cout<<"\n 1. View Addmission Details \n 2. View Roll list \n 3. View Results \n 4. Back to Menu";
		cout<<"\n Enter Your Choice :";
		cin>>choice12;
		switch(choice12) {
			case 1 : system("cls");
					 stud.view_all_student();
			break;
			case 2 : stud.view_roll_list();
			break;
			case 3 : stud.view_marks();
			break;
			case 4 : choice12=0;
			break;
			default : cout<<"\a";
			break;
		}
	}while(choice12!=0);
}
class HOD : public student_class
{
	public:
		int i,setflag;
		char a;//a Temp char
		char hod_username[10];
		char hod_password[10];
	public:
		void login() {                 //1st option
			i=0;
			setflag=0;
			cout<<"\n Enter Username :";
			for(i=0;;)//infinite loop
			{
				a=getch();//stores char typed in a
				if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a>='0'&&a<='9')||(a=='@'))
				//check if a is numeric or alphabet
				{
					hod_username[i]=a;//stores a in pass
					++i;
					cout<<a;
				}
				if(a=='\b'&&i>=1)//if user typed backspace
				//i should be greater than 1.
				{
					cout<<"\b \b";//rub the character behind the cursor.
					--i;
				}
				if(a=='\r')//if enter is pressed
				{
					hod_username[i]='\0';//null means end of string.
					break;//break the loop
				}
			}
			cout<<"\n Enter Password :";
			//char pass[32];//to store password.
			for(i=0;;)//infinite loop
			{
				a=getch();//stores char typed in a
				if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a>='0'&&a<='9'))
				//check if a is numeric or alphabet
				{
					hod_password[i]=a;//stores a in pass
					++i;
					cout<<"*";
				}
				if(a=='\b'&&i>=1)//if user typed backspace
				//i should be greater than 1.
				{
					cout<<"\b \b";//rub the character behind the cursor.
					--i;
				}
				if(a=='\r')//if enter is pressed
				{
					hod_password[i]='\0';//null means end of string.
					break;//break the loop
				}
			}
			if(strcmp(hodusername,hod_username)==0 && strcmp(hodpassword,hod_password)==0) {
				setflag=1;
				cout<<"\n Login Successfully ....";
			}
			if(setflag==1) {
				system("cls");
				options_hod();
			}
			if(setflag==0) {
				cout<<"\n INCORRECT USERNAME OR PASSWORD ...";
			}
		}
		void show_hod() {
			cout<<"\n USERNAME :"<<hodusername;
			cout<<"\n PASSWORD :"<<hodpassword;
		}
};
HOD h1;
void write_hod()
{
	fp1.open("hod.csv",ios::out|ios::app);
	h1.show_hod();
	fp1.write((char*)&h1,sizeof(HOD));
	fp1.close();
	cout<<"\n\n Data Stored in File.... ";
	getch();
}

void hod_method() {
	int choice1;
	do  {
		cout<<"\n 1. Login \n 2. Back to menu";
		cout<<"\n Enter your choice :";
		cin>>choice1;
		switch(choice1)
		{
			case 1: system("cls");
					h1.login();
			break;
			case 2: choice1=0;
			break;
			default: cout<<"\a";
			break;
		}
	}while(choice1!=0);

}
void options_hod() {
	int choice11;
	do  {
		cout<<"\n 1. View Student Addmission Details \n2. View student Roll list \n3. View student Results \n 4. View HOD Details \n 5. Back To Menu";
		cout<<"\n Enter your choice :";
		cin>>choice11;
		switch(choice11)
		{
			case 1 : system("cls");
					 h1.view_all_student();
			break;
			case 2 : system("cls");
					 write_hod();
			break;
			case 3:h1.view_roll_list();
					break;
			case 4 :h1.view_marks();
			break;
			case  5: choice11=0;
			default:
					cout<<"\a";
			break;
		}
	}while(choice11!=0);
}
void main() {
	int choice;
	clrscr();
	do	{
		cout<<"\n\t STUDENT RECORD SYSTEM";
		cout<<"\n 1. LAB Assistant \n 2. Staff \n 3. HOD \n 4. Student \n 5. Exit";
		cout<<"\n Enter Choice from above choice :";
		cin>>choice;
		switch(choice)	{
			case 1:
					lab_assistant();
			break;
			case 2:
					staff_method();
			break;
			case 3:
					hod_method();
			break;
			case 4:
					student_method();
			break;
			case 5:
					exit(0);
			break;
			default:
					cout<<"wrong choice..";
			break;

		}
	}while(choice!=0);
	getch();
}