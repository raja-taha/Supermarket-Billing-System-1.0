#include <iostream>
#include<windows.h>
using namespace std;

int Dis_Price(int x)
{
	
	if(x >= 1000)
	{
		
		x=(x*2)/100;
			
	}
	else if(x >= 2500)
	{
		
		x=(x*5)/100;
			
	}
	else if(x >= 4000)
	{
		
		x=(x*9)/100;
			
	}
	else 
	{
		
		x=0;
			
	}
	return x;
}

int main()
{

	cout<<"\n\n\t\tSuperMarket Billing System"<<endl;

	string username,password;

    cout<<"\n\n\n\t\t******Signup******"<<endl;

	cout<<"\t\tEnter New Username: ";

	cin>>username;

	cout<<"\t\tEnter New Password: ";

	cin>>password;

	cout<<"\t\tYour new ID is creating. Please wait.";

	for(int i=0;i<6;i++)

	{
		
		cout<<".";
		
		Sleep(500);
		
	}

	cout<<"\n\t\tYour ID created successfully.";
	
	Sleep(2000);

	start:

	system("CLS");

	string usrn,pswd;

	cout<<"\n\n\t\tSuperMarket Billing System"<<endl;

	cout<<"\n\n\n\t\t******Login******"<<endl;

	cout<<"\t\tEnter Username: ";

	cin>>usrn;

	cout<<"\t\tEnter Password: ";

	cin>>pswd;

	if(usrn==username&&pswd==password)
	
	{
		menu:
		
		system("CLS");
	
		int ch;
		int opt, m=0, e=0, j=0, br=0, bi=0, sn=0, r=0, i=0, so=0, sh=0;
		int p1=0, p2=0, p3=0, p4=0, p5=0, p6=0, p7=0, p8=0, p9=0, p10=0;
		int i1=0, i2=0, i3=0, i4=0, i5=0, i6=0, i7=0, i8=0, i9=0, i10=0;
		int total=0, items=0;
		
	
		while(1)
		
		{
			cout<<"\n\n\t\t*****Main Menu*****"<<endl;
			
			cout<<"\n\nPress 1 to show Menu"<<endl;
			cout<<"Press 2 to logout"<<endl;
			cout<<"Press 3 to exit"<<endl;
			cout<<"\n**********************************************\n";
			cout<<"Note: 2% Discount on the purchases of Rs. 1000"<<endl;
			cout<<"Note: 5% Discount on the purchases of Rs. 2500"<<endl;
			cout<<"Note: 9% Discount on the purchases of Rs. 4000"<<endl;
			cout<<"\n**********************************************\n";
			cout<<"\nEnter your option: ";
			cin>>ch;
			
			system("CLS");
	
			switch(ch)
			{
		
				case 1:
					
					system("CLS");
					
					while(1)
					
					{
						cout<<"***Place your order***"<<endl;
						
						cout<<"\n\n1.  Milk (Rs. 100 per Liter)"<<endl;
					
						cout<<"2.  Eggs (Rs. 144 per Dozen)"<<endl;
						
						cout<<"3.  Juice (Rs. 30 per Pack)"<<endl;
						
						cout<<"4.  Bread (Rs. 70 per Pack)"<<endl;
						
						cout<<"5.  Biscuits (Rs. 25 per Pack)"<<endl;
						
						cout<<"6.  Snacks (Rs. 20 per Pack)"<<endl;
						
						cout<<"7.  Rice (Rs. 140 per Kg)"<<endl;
						
						cout<<"8.  Ice Cream (Rs. 80 per Pack)"<<endl;
						
						cout<<"9.  Soaps (Rs. 75 per Pack)"<<endl;

						cout<<"10. Shampoo (Rs. 200 per Bottle)"<<endl;
					
						cout<<"11. Show Total Bill"<<endl;
					
						cout<<"12. Exit to Main Menu"<<endl;
						
						cout<<"\n**********************\n";
						cout<<"\nEnter your option: ";
						cin>>opt;
						
						system("CLS");
				
						switch(opt)
						{
					
							case 1:
					
								cout<<"Enter the number of liter of milk you want: ";
								cin>>m;
								p1=p1+(m*100);
								i1=i1+m;
								system("CLS");
								break;
								
							case 2:
								
								cout<<"Enter the number of eggs you want: ";
								cin>>e;
								p2=p2+(e*12);
								i2=i2+e;
								system("CLS");
								break;
								
							case 3:
					
								cout<<"Enter the number of Packs of juice you want: ";
								cin>>j;
								p3=p3+(j*30);
								i3=i3+j;
								system("CLS");
								break;
								
							case 4:
					
								cout<<"Enter the number of packs of bread you want: ";
								cin>>br;
								p4=p4+(br*70);
								i4=i4+br;
								system("CLS");
								break;
								
							case 5:
					
								cout<<"Enter the number of packs of biscuits you want: ";
								cin>>bi;
								p5=p5+(bi*25);
								i5=i5+bi;
								system("CLS");
								break;
								
							case 6:
					
								cout<<"Enter the number of packs of snacks you want: ";
								cin>>sn;
								p6=p6+(sn*20);
								i6=i6+sn;
								system("CLS");
								break;
								
							case 7:
					
								cout<<"Enter the number of Kgs of rice you want: ";
								cin>>r;
								p7=p7+(r*140);
								i7=i7+r;
								system("CLS");
								break;
								
							case 8:
					
								cout<<"Enter the number of packs of ice cream you want: ";
								cin>>i;
								p8=p8+(i*80);
								i8=i8+i;
								system("CLS");
								break;
								
							case 9:
					
								cout<<"Enter the number of packs of soap you want: ";
								cin>>so;
								p9=p9+(so*75);
								i9=i9+so;
								system("CLS");
								break;
								
							case 10:
					
								cout<<"Enter the number of bottles of shampoo you want: ";
								cin>>sh;
								p10=p10+(sh*200);
								i10=i10+sh;
								system("CLS");
								break;
								
							case 11:
								system("CLS");
								total=p1+p2+p3+p4+p5+p6+p7+p8+p9+p10;
								items=i1+i2+i3+i4+i5+i6+i7+i8+i9+i10;
								
								cout<<"\t\t*************************"<<endl;
								cout<<"\n\t\t\tYour Bill\n"<<endl;
								cout<<"\t\t*************************"<<endl;
								cout<<"\t   Items         Quantity        Price"<<endl;
								cout<<"           -----------------------------------"<<endl;
								cout<<"\t   Milk          "<<i1<<"\t         "<<p1<<endl;
								cout<<"\t   Eggs          "<<i2<<"\t         "<<p2<<endl;
								cout<<"\t   Juice         "<<i3<<"\t         "<<p3<<endl;
								cout<<"\t   Bread         "<<i4<<"\t         "<<p4<<endl;
								cout<<"\t   Biscuits      "<<i5<<"\t         "<<p5<<endl;
								cout<<"\t   Snacks        "<<i6<<"\t         "<<p6<<endl;
								cout<<"\t   Rice          "<<i7<<"\t         "<<p7<<endl;
								cout<<"\t   Ice Cream     "<<i8<<"\t         "<<p8<<endl;
								cout<<"\t   Shampoo       "<<i9<<"\t         "<<p9<<endl;
								cout<<"\t   Soaps         "<<i10<<"\t         "<<p10<<endl;
								cout<<"           -----------------------------------"<<endl;
								cout<<"\t   Total         "<<items<<"\t         "<<total<<endl;
								cout<<"           -----------------------------------"<<endl;
								cout<<"\t   Discount                      -"<<Dis_Price(total)<<endl;
								cout<<"           -----------------------------------"<<endl;
								cout<<"\t   Your Bill                     "<<total-Dis_Price(total)<<endl;
								cout<<"           -----------------------------------"<<endl;
								cout<<"\n\t   Please get your receipt from the counter.\n";
								cout<<"\t\t   Thanks For Shopping"<<endl;
								cout<<"           -----------------------------------"<<endl<<endl;
								system("pause");
								system("CLS");
								
								
					
								break;
								
							case 12:
					
								goto menu;
					
								break;
					
							default:
					
								cout<<"\aInvalid Input"<<endl;
					
								break;
					
						}
					}
					
					break;
					
				case 2:
		
					goto start;
		
					break;
		
				case 3:
		
					exit(0);
		
					break;
		
				default:
		
					cout<<"\aInvalid Input"<<endl;
		
					break;
		
			}
		}
	
	}
	
	else if(usrn!=username && pswd!=password)
	
	{
		
		cout<<"\t\t\aInvalid Username and Password";
		
		Sleep(3000);
		
		goto start;
	
	}
	
	else if(usrn!=username)
		
	{
		
		cout<<"\t\t\aInvalid Username. Please try again.";
		
		Sleep(3000);
		
		goto start;
		
	}
		
	else if(pswd!=password)
		
	{
		
		cout<<"\t\t\aInvalid Password. Please try again.";
		
		Sleep(3000);
		
		goto start;
		
	}
	
return 0;

}
