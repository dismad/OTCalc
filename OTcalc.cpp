#include <iostream>
#include <stdlib.h> 
using namespace std;

int main ()
{

	float wage;
	float otWage;
	float weeklyHours;
	float otHours;
	float numChecks;
	float currentGross;
	char selection;
	bool run = true;
	const float OTMULTIPLIER = 1.5;
	
	while(run == true)
	{
		cout << endl << "                         	OTcalc.exe                               " << endl;
		     
		while(!(selection >= '1' && selection <= '8'))
		{
			cout << endl;
		cout <<"__________________________________________________________________" << endl << endl
				 << "1.) Calculate weekly wages: " << endl
			 	 << "2.) Calculate biweekly wages: " << endl
			 	 << "3.) Calculate monthly wages: " << endl
			 	 << "4.) Calculate annual wages: " << endl
			 	 << "5.) Calculate annual wages (advanced): " << endl 
			 	 << "6.) Annual raise simulation: " << endl
			 	 << "7.) Effective daily wage calculation: " << endl
			 	 << "8.) Wage Finder: " << endl
			 	 << "9.) Exit" << endl
			 << "__________________________________________________________________" << endl << endl;
			 	
			 	
			cout << "Type a number: ";
			cin >> selection;
			system("clear");
		}
	
		if(selection == '1')
		{
			cout << "Please enter your hourly wage: ";
	    	cin >> wage;
	    	
	    	cout << "Now enter the amount of hours you work weekly: ";
			cin >> weeklyHours;
	    	
			if(weeklyHours > 40)
			{
				otHours = weeklyHours - 40;
				otWage = wage*OTMULTIPLIER;
				
				cout << "At $"<< wage << "/hr, you will earn $" << wage*(weeklyHours-otHours) << " in normal wages plus " << endl
				     << "$" << otHours*otWage << " in overtime for a total of $" << (otHours*otWage)+(wage*(weeklyHours-otHours))
				     << " every week :)" << endl;
			}
			else
			{
				cout << "At $"<< wage << "/hr, you will earn $" << wage*weeklyHours << " every week :)" << endl;
			}
		}
		else if(selection == '2')
		{
			cout << "Please enter your hourly wage: ";
	    	cin >> wage;
	    	
	    	cout << "Now enter the amount of hours you work weekly: ";
			cin >> weeklyHours;
	    	
			if(weeklyHours > 40)
			{
				otHours = weeklyHours - 40;
				otWage = wage*OTMULTIPLIER;
				
				cout << "At $"<< wage << "/hr, you will earn $" << wage*2*(weeklyHours-otHours) << " in normal wages plus " << endl
				     << "$" << 2*otHours*otWage << " in overtime for a total of $" << 2*((otHours*otWage)+(wage*(weeklyHours-otHours)))
				     << " every 2 weeks :)" << endl;
			}
			else
			{
			cout << "At $"<< wage << "/hr, you will earn $" << wage*2*weeklyHours << " every 2 weeks :)" << endl;
			}
		}
		else if(selection == '3')
		{
			cout << "Please enter your hourly wage: ";
	    	cin >> wage;
	    	
	    	cout << "Now enter the amount of hours you work weekly: ";
			cin >> weeklyHours;
	    	
			if(weeklyHours > 40)
			{
				otHours = weeklyHours - 40;
				otWage = wage*OTMULTIPLIER;
				
				cout << "At $"<< wage << "/hr, you will earn $" << (wage*26*2*(weeklyHours-otHours))/12 << " in normal wages plus " << endl
				     << "$" << (26*2*otHours*otWage)/12 << " in overtime for a total of $" << (26*2*((otHours*otWage)+(wage*(weeklyHours-otHours))))/12
				     << " every month :)" << endl;
			}
			else
			{
				cout << "At $"<< wage << "/hr, you will earn $" << (wage*26*2*weeklyHours)/12 << " every month :)" << endl;
			}
		}
		else if(selection == '4')
		{
		
		    
			cout << "Please enter your hourly wage: ";
	    	cin >> wage;
	    	
	    	cout << "Now enter the amount of hours you work weekly: ";
			cin >> weeklyHours;
			
			numChecks = 0;
				
			if(weeklyHours > 40)
			{
				otHours = weeklyHours - 40;
				otWage = wage*OTMULTIPLIER;
				
				cout << endl << "At $"<< wage << "/hr, you will earn $" << (wage*(26-numChecks)*2*(weeklyHours-otHours)) << " in normal wages plus " << endl
				     << "$" << (26-numChecks)*2*otHours*otWage << " in overtime for a total of $" << ((26-numChecks)*2*((otHours*otWage)+(wage*(weeklyHours-otHours))))
				     << "." << endl;
			}
			else
			{
				cout << endl << "At $"<< wage << "/hr, you will earn $" << (wage*(26-numChecks)*weeklyHours*2) << "." << endl;
			}
		}
		else if(selection == '5')
		{
			cout << "How much money have you already made? ";
		    cin >> currentGross;
		    
			cout << "Please enter your hourly wage: ";
	    	cin >> wage;
	    	
	    	cout << "Now enter the amount of hours you work weekly: ";
			cin >> weeklyHours;
			
				
		    cout << "How many checks have you recieved this year? ";
		    cin >> numChecks;
		    
		    
	    	
			if(weeklyHours > 40)
			{
				otHours = weeklyHours - 40;
				otWage = wage*OTMULTIPLIER;
				
				cout << endl << "From this point forward, at $"<< wage << "/hr, you will earn $" << (wage*(26-numChecks)*2*(weeklyHours-otHours)) << " in normal wages plus " << endl
				     << "$" << (26-numChecks)*2*otHours*otWage << " in overtime for a total of $" << ((26-numChecks)*2*((otHours*otWage)+(wage*(weeklyHours-otHours))))
				     << "." << endl << "Including what you already made, $" << currentGross << ", your gross annual income is $" << ((26-numChecks)*2*((otHours*otWage)+(wage*(weeklyHours-otHours))))+currentGross << " :)" << endl;
			}
			else
			{
				cout << endl << "From this point forward, at $"<< wage << "/hr, you will earn $" << (wage*(26-numChecks)*weeklyHours*2) << "." << endl << "Including what you already made, $" << currentGross << ", your gross annual income is $" << (wage*(26-numChecks)*weeklyHours*2)+currentGross << " :)" << endl;
			}
		}
		else if(selection == '6')
		{
			cout << "Please enter your hourly wage: ";
	    	cin >> wage;
	    	
			float raise;
			int years;
			
			cout << "Enter your estimated annual raise percentage: ";
			cin >> raise;
			
			cout << "Enter the number of years you estimate to work: ";
			cin >> years;
			
			system("clear");
			raise = raise/100;
			
			for(int i=0; years>i; i++)
			{
				cout << "Year " << i << " wage: " << wage << endl;
				wage = wage + wage*raise;
			}
		}
		else if(selection == '7')
		{
			float income;
			float hours;
			
			cout << "Enter the amount of money you made today: $";
			cin >> income;
			
			cout << "Enter the amount of hours you worked today: ";
			cin >> hours;
			
			cout << "." << endl << "." << endl << "." << endl << "Today your effective hourly wage was $" << income/hours << "/hr." << endl;
		}
		else if(selection == '8')
		{
			float hours;
			float othours;
			float income;
			float runningSum = 0.0;
			
			
			cout << "Enter the amount of money you need per week: $";
			cin >> income;
			
			cout << "Enter the amount of hours you're able to work per week: ";
			cin >> hours;
			
			if(hours > 40)
			{
				othours = hours - 40;
			
				float findRate = 1.0;
				float stepsize = 0.01;
				//int count = 0;
			
				while(runningSum <= income)
				{                                         
					runningSum = (40*findRate) + (othours*OTMULTIPLIER*findRate);
					findRate = findRate + stepsize;
					//cout << "runningSum =" << (40*findRate) << " + " << (othours*OTMULTIPLIER*findRate) << " which equals " << runningSum << " findRate = " << findRate <<  " count = " << count << endl;
					//count++;				
				}
			cout << "In order to earn $" << income << "/wk (" << (40*findRate) << " + " << (othours*OTMULTIPLIER*findRate) << " in overtime)," << endl << "your wage should be $" << findRate << "/hr or higher :)" << endl;
			}
			else
			{
				cout << "In order to earn $" << income << "/wk, your wage should be $" << income/hours << "/hr or higher :)" << endl;
			}
		}
		else
		{
			run = false;
		}
		selection = 0;
	}
	return 0;
}


