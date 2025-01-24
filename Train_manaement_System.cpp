#include<iostream>
#include<string>
#include <ctime>
#include <cstdlib>
#include<iomanip>

using namespace std;

class menu{
	public:
	menu()
	{
		
	}
	show_Menu()
	{
		cout<<"[1] Show Train Schedule"<<endl;
		cout<<"[2] Book Tickets"<<endl;
		cout<<"[3] Cancel Ticket"<<endl;
		cout<<"[4] Feedback"<<endl;
		cout<<"_________________________________________"<<endl;
	}
};
class time{
	public:
		time()
		{
			
		}
		string tim;
		string format;
	
};
class train:public time{
	public:
		train()
		{
			
		}
		string name;
    	string departure;
    	string arrival;
    	double price;
};
class ticket:public train{
	public:
		ticket()
		{
			
		}
		string passengerName;
		double cnic;
		double cell_Number;
		print_Ticket(ticket tic, string pDepart, string pArrival,int pPrice)
		{
		    cout<<"________________________________________________"<<endl;
			cout<<"________________________________________________"<<endl;
			cout<<"Ticket Slip"<<endl;
			cout<<"Name : "<<tic.passengerName<<endl;
			cout<<"Departure : "<<pDepart<<endl;
			cout<<"Arrival: "<<pArrival<<endl;
			cout<<"Ticket price is : "<<pPrice<<endl;
			
		}
		
};
int main()
{
	cout<<"\t\t\t\t    Welcome to Bunny Train Ticketing  System"<<endl;
	cout<<"\t\t\t\t___________________________________________________"<<endl;
	
	int choice;
	string depart,arrival,loop;
	string feedback;
	menu m1;
	ticket tic;
	train t[10];
	
	// Setting values to the array object of train
	
	t[0].name = "RTX Express" ;t[0].departure = "Islamabad"; t[0].arrival= "Lahore"; t[0].price = 2500 ;t[0].tim = "8:00 "; t[0].format= "AM";
	t[1].name = "Nvidia Express" ;t[1].departure = "Lahore"; t[1].arrival= "Islamabad";t[1].price = 2500 ;t[1].tim = "8:15 "; t[1].format= "AM";
	t[2].name = "Sailab Express" ;t[2].departure = "Karachi"; t[2].arrival= "Lahore"; t[2].price = 2500 ;t[2].tim = "9:00 "; t[2].format= "AM";
	t[3].name = "AMD Express" ;t[3].departure = "Lahore"; t[3].arrival= "Karachi"; t[3].price = 2500 ;t[3].tim = "10:00 "; t[3].format= "AM";
	t[4].name = "Intel Express" ;t[4].departure = "Islamabad"; t[4].arrival= "Karachi"; t[4].price = 2500 ;t[4].tim = "10:30 "; t[4].format= "AM";
	t[5].name = "Ryzen Express" ;t[5].departure = "Islamabad"; t[5].arrival= "Bahawalpur"; t[5].price = 2500 ;t[5].tim = "11:00 "; t[5].format= "AM";
	t[6].name = "Izlu Express" ;t[6].departure = "Islamabad"; t[6].arrival= "Multan"; t[6].price = 2500 ;t[6].tim = "12:00 "; t[6].format= "PM";
	t[7].name = "Bhola Express" ;t[7].departure = "Multan"; t[7].arrival= "Lahore"; t[7].price = 2500 ;t[7].tim = "2:00 "; t[7].format= "PM";
	t[8].name = "Shola Express" ;t[8].departure = "Lahore"; t[8].arrival= "Multan"; t[8].price = 2500 ;t[8].tim = "4:00 "; t[8].format= "PM";
	t[9].name = "Toofan Express" ;t[9].departure = "Karachi"; t[9].arrival= "Multan"; t[9].price = 2500 ;t[9].tim = "6:00 "; t[9].format= "PM";


	lebel:
	m1.show_Menu();
	cout<<"_________________________________________"<<endl;
	cin>>choice;
	if(choice>4)
	{
		cout<<"invalid choice!!!"<<endl;
		cout<<"Enter your choice again"<<endl;
		goto lebel;
	}
	cout<<endl<<"_________________________________________"<<endl;
	
	// Switch statement here is for menu driven program so the user can choose between 
	//different options.
	
	switch(choice){
		case 1:
			{
				cout<<"Name\t\t\t"<<"Departure\t\t"<<"Arrival\t\t"<<"Price\t\t"<<"Time"<<endl;
				cout<<endl<<"__________________________________________________________________________________"<<endl;
				//Loop is commented for now
				for (int u = 0; u<10; u++)
				{
					cout<<t[u].name<<"\t\t"<<setw(8)<<t[u].departure<<"\t\t"<<t[u].arrival<<"\t\t"<<setw(5)<<t[u].price<<"\t\t"<<t[u].tim<<t[u].format<<endl;
				}
				 cout<<"want to go to main menu?"<<endl;
				  cout<<"[y] Yes [n] No"<<endl;
				  cin>>loop;
				 if(loop=="y")
				 {
				 	cout<<"________________________________________________"<<endl;
			 	   goto lebel;
				    }
				  else{
			  	 return 0;
				   }
			
				break;
			}
		case 2:
			{
				cout<<"Plz Start Your Destination and Arrival with capital letter Like 'Lahore'"<<endl;
				cout<<"------------------------------------------------------------------------"<<endl;
				cout<<"Enter Your Departure Location"<<endl;
				cin>>depart;
				cout<<"Enter Your Arrival Location"<<endl;
				cin>>arrival;
				
				for(int u=0; u<10; u++)
			    {
			 	   if(t[u].departure==depart)
			 	   {
			    	 if(t[u].arrival==arrival)
			    	   {
		 	   	    	    cout<<"Enter Your Name : "<<endl;
			 	   	    	cin>>tic.passengerName;
			 	   	    	cout<<"Enter your CNIC : "<<endl;
			 	   	    	cin>>tic.cnic;
			 	   	    	cout<<"Enter Your Mobile Number : "<<endl;
			 	   	    	cin>>tic.cell_Number;
		    	            int seats;
		    	            cout<<"Enter number of seats you want : "<<endl;
		    	            cin>>seats;
		    	            int fare = t[u].price*seats;
		    	            srand(time(0));  // Initialize random number generator.
		    	            tic.print_Ticket(tic,depart, arrival,fare);
							cout<<"Your seat numbers are :";
							for(int i=0;i<seats;i++)
							
						    cout<< 1+(rand() % 8) + 1<<" ";
						    cout<<endl;
						    cout<<"________________________________________________"<<endl;
						    cout<<"want to go to main menu?"<<endl;
						    cout<<"[y] Yes [n] No"<<endl;
						    cin>>loop;
						    if(loop=="y")
						    {
						   	 cout<<"___________________________________________"<<endl;
						   	 goto lebel;
						    }
						    else
						    {
						   	 return 0;
						    }
					    }
					}	
			    }
		
				break;
			}
		case 3:
			{
				cout<<"Enter Your Recipit code to cancel Ticket "<<endl;
				int cancel;
				cin>>cancel;
				if(cancel==123)
			 {
				
				cout<<"Your Ticket is cancelled on your request"<<endl;
				cout<<"Thank you!"<<endl;
			    cout<<"________________________________________________"<<endl;
			    cout<<"want to go to main menu?"<<endl;
				cout<<"[y] Yes [n] No"<<endl;
				cin>>loop;
				if(loop=="y")
				{
				  cout<<"___________________________________________"<<endl;
				  goto lebel;
				}
				else{
					return 0;
					}
				break;
			 }
			}
		case 4:
			{
				cout<<"Enter your Feedback Here"<<endl;
				cin>>feedback;
				cout<<"Thank you for you feedback.This means a lot to us."<<endl;
				cout<<"________________________________________________"<<endl;
			    cout<<"want to go to main menu?"<<endl;
				cout<<"[y] Yes [n] No"<<endl;
				cin>>loop;
				if(loop=="y")
				{
				  cout<<"___________________________________________"<<endl;
				  goto lebel;
				}
				else{
					return 0;
					}
				break;
			}
		default:
		    {
		    	cout<<"Invalid choice!!!"<<endl;
		    	cout<<"Enter your choice again"<<endl;
		    	goto lebel;
		    	
			}	
	}
	return 0;
}
