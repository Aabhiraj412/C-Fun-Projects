#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdio.h>
using namespace std;


struct hotel{
	int room_no;
	char name[30];
	char address[50];
	char phone[10];
	public:
	void main_menu();
	void add();
	void display();
	void rooms();
	void edit();
	int check(int);
	void modify(int);
	void delete_rec(int);
};

void hotel::main_menu(){
	int choice;
	while(choice!=5){
		cout<<"\n\t\t\t\t \t MAIN MENU";
		cout<<"\n\t\t\t\t                        ";
		cout<<"\n\n\n\t\t\t  1. Book A Room";
		cout<<"\n\t\t\t  2. Customer Record";
		cout<<"\n\t\t\t  3. Rooms Allotted";
		cout<<"\n\t\t\t  4. Edit Record";
		cout<<"\n\t\t\t  5. Exit";
		cout<<"\n\n\t\t\t  Enter Your Choice:";
		cin>>choice;
		system("cls");
		switch(choice)
		{
			case 1: 
				add();
				break;
			case 2: 
				display();
				break;
			case 3: 
				rooms();
				break;
			case 4: 
				edit();
				break;
			case 5: 
				break;
			default:
				cout<<"\n\n\t\t\t  Error: Invalid Choice";
				cout<<"\n\t\t\t  Press any key to continue";
				getch();
		
		}
	}
}
void hotel::add(){
	int r,flag;
	ofstream fout("Record.dat",ios::app);
	cout<<"\n Enter Customer Details";
	cout<<"\n\n Room no:";
	cin>>r;
	flag= check(r);
	
	if(flag)
		cout<<"\nSorry, The room is already  booked";
	else{
		fflush(stdin);
		room_no=r;
		cout<<"Name:";
		gets(name);
		cout<<"Address:";
		gets(address);
		cout<<"Phone No.:";
		gets(phone);
		fout.write((char*)this,sizeof(hotel));
		cout<<"\nRoom Booked";
	}
	cout<<"\nPress any key to continue";
	getch();
	system("cls");
	fout.close();
}
void hotel::display(){
	ifstream fin("Record.dat",ios::in);
	int r, flag;
	cout<<"\n  Enter room no.:";
	cin>>r;
	while(fin.read((char*)this,sizeof(hotel))){
		if(room_no==r){
			cout<<"\n Customer Details";
			cout<<"\n                ";
			cout<<"\n\n Room no.:"<<room_no;
			cout<<"\n Name:"<<name;
			cout<<"\n Address: "<<address;
			cout<<"\n Phone No.:"<<phone;
			flag=1;
			break;
		}
	}
	if(flag==0)
		cout<<"\n Error: Room not found orRoom Vacant";
	cout<<"\n\n Press any key to continue";
	getch();
	fin.close();
}
void hotel::rooms(){
	ifstream fin("Record.dat",ios::in);
	cout<<"\n\t\t\t List Of Rooms Allotted";
	cout<<"\n\t\t\t                                     ";
	cout<<"\n\nRoom No. \t Name \t\t\t Address \t Phone No. \n";
	while(fin.read((char*)this,sizeof(hotel))){
		cout<<"\n\n"<< room_no<< "\t\t " << name;
		cout<<"\t\t " << address <<"\t\t "<< phone;
	}
	cout<<"\n\n\n\t\t\tPress any key to continue";
	getch();
	fin.close();
}
void hotel::edit(){
	int choice,r;
	cout<<"\n  EDIT MENU";
	cout<<"\n                   ";
	cout<<"\n\n  1. Modify Customer Record";
	cout<<"\n\n  2. Delete Customer Record";
	cout<<"\n\n  Enter your choice:";
	cin>>choice;
	cout<<"\n  Enter room no.:";
	cin>>r;
	switch(choice)
	{
	   	case 1: 
		   	modify(r);
		    break;
	    case 2: 
			delete_rec(r);
	        break;
		default:
	        cout<<"\n  Error: Invalid Choice";
	}
	cout<<"\n  Press any key to continue";
	getch();
}
int hotel::check(int r){
	int flag=0;
	ifstream fin("Record.dat",ios::in);
	while(!fin.eof()){
		fin.read((char*)this,sizeof(hotel));
		if(room_no==r){
			flag=1; 
			break;
		}
	}
	fin.close();
	return(flag);
}
void hotel::modify(int r){
	long pos, flag=0;
	fstream file("Record.dat",ios::in|ios::out|ios::binary);
	while(file.read((char*)this,sizeof(hotel))){
		pos= file.tellg();
		if(room_no==r){
			fflush(stdin);
			cout<<"\n Enter New Details";
			cout<<"\n Name:";
			gets(name);
			cout<<"\n Address:";
			gets(address);
			cout<<"\n Phone no:";
			gets(phone);	
			file.seekg(pos);
			file.write((char*)this,sizeof(hotel));
			cout<<"\n Record Modified";
			flag=1;
			break;
		}
	}
	if(flag==0)
		cout<<"\n Error: Room not found or Room Vacant";
	file.close();
}
void hotel::delete_rec(int r){
	int flag=0;
	char ch;
	ifstream fin("Record.dat",ios::in);
	ofstream fout("temo.dat",ios::out);
	while(!fin.eof()){
		fin.read((char*)this,sizeof(hotel));
		if(room_no==r){
			cout<<"\n Name:"<<name;
			cout<<"\n Address:"<<address;
			cout<<"\n Phone No.:"<<phone;
			cout<<"\n\n Do you want to delete this record(y/n):";
			cin>>ch;
			if(ch=='n')
			fout.write((char*)this,sizeof(hotel));
			flag=1;
		}
		else
			fout.write((char*)this,sizeof(hotel));
	}
	fin.close();
	fout.close();
	
	if(flag==0)
		cout<<"\n Error: Room not found or Room Vacant";
	else{
		remove("Record.dat");
		rename("temp.dat","Record.dat");
	}
}
main(){
	hotel h;
	cout<<"\n\t\t\t\t  HOTEL MANAGEMENT PROJECT";
	cout<<"\n\t\t\t\t                                   ";
	cout<<"\n\n\n\n\t\t  Made By:";
	cout<<"ABHIRAJ DIXIT";
	cout<<"\n\n\n\n\t\t  CLASS:";
	cout<<"B.Tech CS/DS A3";
	cout<<"\n\n\n\n\t\t  SUBJECT:";
	cout<<"MINI PROJECT";
	cout<<"\n\n\n\n\t\t  FACULTY NAME:";
	cout<<"MR. Vinay Sir";
	cout<<"\n\n\n\n\n\n\t\t\t\t  Press any key to continue";
	getch();
	system("cls");
	h.main_menu();
}
