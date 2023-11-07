#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void mainMenu(); // function prototype for calling function multiple times 

class Management  //displaying main menu for user to select options
{
public:
    Management()
    {
        mainMenu();
    }
};

class Details
{
public: //variables of details class 
    static string name, gender;
    int phoneNo;
    int age;
    string address;
    static int customerId;
    char arr[100];

    void information()  //function to take customer's details 
    {
        cout << "\nEnter the customer ID: ";
        cin >> customerId;
        cout << "\nEnter the name: ";
        cin >> name;
        cout << "\nEnter the age: ";
        cin >> age;
        cout << "\nEnter the phone number: ";
        cin >> phoneNo;
        cout << "\n Address :";
        cin >> address;
        cout << "\n Gender :";
        cin >> gender;
        cout << "Your details are saved with us\n"<< endl;
    }
};
//variables need to be used for class registration taking in account from class details 
int Details::customerId; 
string Details::name;
string Details::gender;

class Registration
{
public: //local variables 
    static int outerChoice; //this choice is declared for destinations 
    int innerChoice; //this choice is declared for flights choice for respective destinations 
    int back; //going back to main menu 
    static float charges;

    void flights()
    {
        string flightN[] = {"Dubai", "Canada", "UK", "USA", "Australia", "Europe"}; //an array of flight destinations at TATA Airlines 

        for (int i = 0; i < 6; i++)
        {
            cout << (i + 1) << ".flight to " << flightN[i] << endl; //incrementing to 1 for starting array from first index i.e. Dubai
        }

        cout << "\nWelcome to the Airlines!" << endl;
        cout << "Press the number of the country of which you want to book the flight: ";
        cin >> outerChoice;

        switch (outerChoice)  //Details regarding flights available for respectives choices i.e. outerchoices for destinations 
        {
        case 1:
        {
            cout << "_______________________Welcome to Dubai Emirates____________________\n"<< endl;

            cout << "Your comfort is our priority. Enjoy the journey!" << endl;

            cout << "Following are the flights \n"<< endl;

            cout << "1. DUB - 498" << endl;
            cout << "\t08-01-2022 8:00AM 10hrs Rs. 14000" << endl;
            cout << "2. DUB - 658" << endl;
            cout << "\t09-01-2022 4:00AM 12hrs Rs. 10000" << endl;
            cout << "3. DUB - 508" << endl;
            cout << "\t11-01-2022 11:00AM 11hrs Rs. 9000" << endl;

            cout << "\nSelect the flight you want to book: ";
            cin >> innerChoice;

            if (innerChoice == 1)
            {
                charges = 14000;
                cout << "\nYou have successfully booked the flight DUB - 498" << endl;
                cout << "You can go  back to menu and take the ticket" << endl;
            }

            else if (innerChoice == 2)
            {
                charges = 10000;
                cout << "\nYou have successfully booked the flight DUB - 658" << endl;
                cout << "You can go  back to menu and take the ticket" << endl;
            }
            else if (innerChoice == 3)
            {
                charges = 9000;
                cout << "\nYou have successfully booked the flight DUB - 508" << endl;
                cout << "You can go  back to menu and take the ticket" << endl;
            }
            else
            {
                cout << "Invalid input , shifting to the previous menu" << endl;
                flights(); //calling flight function if user chooses wrong choice
            }

            cout << "Press any key to go back to the main menu: " << endl;
            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }

        case 2:
        {
            cout << "_______________________Welcome to Canadian Airlines____________________\n"<< endl;

            cout << "Your comfort is our priority. Enjoy the journey!" << endl;

            cout << "Following are the flights \n"<< endl;

            cout << "1. CA - 198" << endl;
            cout << "\t09-01-2022 2:00PM 20hrs Rs. 34000" << endl;
            cout << "2. CA - 158" << endl;
            cout << "\t11-01-2022 6:00AM 23hrs Rs. 29000" << endl;
            cout << "3. CA - 208" << endl;
            cout << "\t14-01-2022 12:00AM 21hrs Rs. 40000" << endl;
            cout << "4. CA - 118" << endl;
            cout << "\t15-01-2022 1:00AM 21hrs Rs. 38500" << endl;

            cout << "\nSelect the flight you want to book: ";
            cin >> innerChoice;

            if (innerChoice == 1)
            {
                charges = 34000;
                cout << "\nYou have successfully booked the flight CA - 198" << endl;
                cout << "You can go  back to menu and take the ticket" << endl;
            }

            else if (innerChoice == 2)
            {
                charges = 29000;
                cout << "\nYou have successfully booked the flight CA - 158" << endl;
                cout << "You can go  back to menu and take the ticket" << endl;
            }
            else if (innerChoice == 3)
            {
                charges = 40000;
                cout << "\nYou have successfully booked the flight CA - 208" << endl;
                cout << "You can go  back to menu and take the ticket" << endl;
            } else if (innerChoice == 4)
            {
                charges = 38500;
                cout << "\nYou have successfully booked the flight CA - 118" << endl;
                cout << "You can go  back to menu and take the ticket" << endl;
            }
            
            else
            {
                cout << "Invalid input , shifting to the previous menu" << endl;
                flights(); //calling flight function if user chooses wrong choice
            }

            cout << "Press any key to go back to the main menu: " << endl;
            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }

        case 3:
        {

            cout << "_______________________Welcome to UK Airways____________________\n"<< endl;

            cout << "Your comfort is our priority. Enjoy the journey!" << endl;

            cout << "Following are the flights \n"<< endl;

            cout << "1. UK - 798" << endl;
            cout << "\t12-01-2022 10:00AM 14hrs Rs. 44000" << endl;
            cout << "2. UK - 888" << endl;
            cout << "\t14-01-2022 10:00PM 14hrs Rs. 47000" << endl;

            cout << "\nSelect the flight you want to book: ";
            cin >> innerChoice;

            if (innerChoice == 1)
            {
                charges = 44000;
                cout << "\nYou have successfully booked the flight UK - 798" << endl;
                cout << "You can go  back to menu and take the ticket" << endl;
            } else if (innerChoice == 2)
            {
                charges = 47000;
                cout << "\nYou have successfully booked the flight UK - 888" << endl;
                cout << "You can go  back to menu and take the ticket" << endl;
            }

            else
            {
                cout << "Invalid input , shifting to the previous menu" << endl;
                flights(); //calling flight function if user chooses wrong choice
            }

            cout << "Press any key to go back to the main menu: " << endl;
            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
        case 4:
        {
            cout << "_______________________Welcome to US Airways____________________\n"<< endl;

            cout << "Your comfort is our priority. Enjoy the journey!" << endl;

            cout << "Following are the flights \n"<< endl;

            cout << "1. US - 567" << endl;
            cout << "\t10-01-2022 9:00AM 22hrs Rs. 37000" << endl;
            cout << "2. US - 658" << endl;
            cout << "\t09-01-2022 6:00AM 22hrs Rs. 39000" << endl;
            cout << "3. US - 508" << endl;
            cout << "\t12-01-2022 10:00AM 21hrs Rs. 42000" << endl;

            cout << "\nSelect the flight you want to book: ";
            cin >> innerChoice;

            if (innerChoice == 1)
            {
                charges = 37000;
                cout << "\nYou have successfully booked the flight US - 658" << endl;
                cout << "You can go  back to menu and take the ticket" << endl;
            }

            else if (innerChoice == 2)
            {
                charges = 39000;
                cout << "\nYou have successfully booked the flight DUB - 658" << endl;
                cout << "You can go  back to menu and take the ticket" << endl;
            }
            else if (innerChoice == 3)
            {
                charges = 42000;
                cout << "\nYou have successfully booked the flight DUB - 508" << endl;
                cout << "You can go  back to menu and take the ticket" << endl;
            }
            else
            {
                cout << "Invalid input , shifting to the previous menu" << endl;
                flights(); //calling flight function if user chooses wrong choice
            }

            cout << "Press any key to go back to the main menu: " << endl;
            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
        case 5:
        {
            cout << "_______________________Welcome to Australian Airlines____________________\n"<< endl;

            cout << "Your comfort is our priority. Enjoy the journey!" << endl;

            cout << "Following are the flights \n"<< endl;

            cout << "1. As - 698" << endl;
            cout << "\t018-01-2022 9:00AM 20hrs Rs. 44000" << endl;
            cout << "2. AS - 158" << endl;
            cout << "\t019-01-2022 4:00AM 22hrs Rs. 34000" << endl;
            cout << "3. AS - 708" << endl;
            cout << "\t17-01-2022 10:00AM 21hrs Rs. 42000" << endl;

            cout << "\nSelect the flight you want to book: ";
            cin >> innerChoice;

            if (innerChoice == 1)
            {
                charges = 44000;
                cout << "\nYou have successfully booked the flight DUB - 498" << endl;
                cout << "You can go  back to menu and take the ticket" << endl;
            }

            else if (innerChoice == 2)
            {
                charges = 34000;
                cout << "\nYou have successfully booked the flight DUB - 658" << endl;
                cout << "You can go  back to menu and take the ticket" << endl;
            }
            else if (innerChoice == 3)
            {
                charges = 42000;
                cout << "\nYou have successfully booked the flight DUB - 508" << endl;
                cout << "You can go  back to menu and take the ticket" << endl;
            }
            else
            {
                cout << "Invalid input , shifting to the previous menu" << endl;
                flights();  //calling flight function if user chooses wrong choice
            }

            cout << "Press any key to go back to the main menu: " << endl;
            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
        case 6:
        {
            cout << "_______________________Welcome to European Airlines____________________\n"<< endl;

            cout << "Your comfort is our priority. Enjoy the journey!" << endl;

            cout << "Following are the flights \n"<< endl;

            cout << "1. EU - 898" << endl;
            cout << "\t02-01-2022 2:00AM 18hrs Rs. 36000" << endl;
            cout << "2. EU - 958" << endl;
            cout << "\t03-01-2022 6:00AM 19hrs Rs. 37000" << endl;
            cout << "3. EU - 608" << endl;
            cout << "\t12-01-2022 10:00AM 20hrs Rs. 31000" << endl;

            cout << "\nSelect the flight you want to book: ";
            cin >> innerChoice;

            if (innerChoice == 1)
            {
                charges = 36000;
                cout << "\nYou have successfully booked the flight EU - 898" << endl;
                cout << "You can go  back to menu and take the ticket" << endl;
            }

            else if (innerChoice == 2)
            {
                charges = 37000;
                cout << "\nYou have successfully booked the flight EU - 958" << endl;
                cout << "You can go  back to menu and take the ticket" << endl;
            }
            else if (innerChoice == 3)
            {
                charges = 31000;
                cout << "\nYou have successfully booked the flight EU - 608" << endl;
                cout << "You can go  back to menu and take the ticket" << endl;
            }
            else
            {
                cout << "Invalid input , shifting to the previous menu" << endl;
                flights();  //calling flight function if user chooses wrong choice
            }

            cout << "Press any key to go back to the main menu: " << endl;
            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
        default:
            {
              cout<<"Invalid input, Shifting you to the main menu !"<<endl;
			  mainMenu();
			  break;  
            }
        }
    }
};
//variables need to be used for class ticket taking in account from class registration  
float Registration::charges;
int Registration::outerChoice;

class Ticket : public Registration, Details
{
    public:
        void Bill()
		{
			string destination = "";
			ofstream outf("records.txt");  //creating text file to store details 
			{
				outf<<"_____________TATA Airlines____________"<<endl;
				outf<<"______________Ticket_________________"<<endl;
				outf<<"_____________________________________"<<endl;
				
				outf<<"Customer ID: "<<Details::customerId<<endl;  //required information to display 
				outf<<"Customer Name: "<<Details::name<<endl;
				outf<<"Customer Gender: "<<Details::gender<<endl;
				outf<<"\tDescription"<<endl<<endl;
				//arranging appropriate destinations to respective choices 
				if(Registration::outerChoice == 1)
				{
					destination="Dubai";
				}
				
				else if(Registration::outerChoice == 2)
				{
					destination="Canada";
				}
				else if(Registration::outerChoice == 3)
				{
					destination="UK";
				}
				else if(Registration::outerChoice == 4)
				{
					destination="USA";
				}
				else if(Registration::outerChoice == 5)
				{
					destination="Australia";
				}
				else if(Registration::outerChoice == 6)
				{
					destination="Europe";
				}
				
				outf<<"Destination\t\t"<<destination<<endl;
				outf<<"Flight cost: \t\t"<<Registration::charges<<endl;
				
			}
			outf.close();
			
		}

        void dispBill()
        {
            ifstream ifs("records.txt"); //reading from file 
            {
                if(!ifs)
				{
					cout<<"File error!"<<endl;
				}
				while(!ifs.eof())
				{
					ifs.getline(arr, 100); //displaying all flights available now for that particular location 
					cout<<arr<<endl;
				}
            }
            ifs.close();
        }
};

void mainMenu()
{
    //global variables 
    int lchoice;
    int schoice;
    int goBack;

    cout << "\t               TATA Airlines \n"<< endl;
    cout << "\t______________Main Menu______________" << endl;

    cout << "\t______________________________________" << endl;
    cout << "\t|\t\t\t\t\t\t|" << endl;

    cout << "\t|\t Press 1 to add the Customer Details    \t|" << endl;
    cout << "\t|\t Press 2 for Flight Registration        \t|" << endl;
    cout << "\t|\t Press 3 for Ticket and Charges         \t|" << endl;
    cout << "\t|\t Press 4 to Exit                        \t|" << endl;
    cout << "\t|\t\t\t\t\t\t|" << endl;
    cout << "\t_____________________________________________________" << endl;

    cout << "Enter the choice: ";
    cin >> lchoice;
    //classes used for displaying related functions when user presses the key 
    Details d;
    Registration reg;
    Ticket tk;

    switch (lchoice)
    {
    case 1:
    {
        cout << "__________Customers__________\n"<< endl;
        d.information();
        cout << "Press any key to go back to Main menu ";
        cin >> goBack;

        if (goBack == 1)
        {
            mainMenu();
        }
        else
        {
            mainMenu();
        }
        break;
    }

    case 2:
    {
        cout << "________Book a flight using this system ____________\n"<< endl;
        reg.flights();
        break;
    }

    case 3:
    {
        cout << "_____GET YOUR TICKET____\n"<< endl;
        tk.Bill();

        cout << "Your ticket is printed & you can collect it. \n"<< endl;
        cout << "Press 1 to display your ticket: ";

        cin >> goBack;

        if (goBack == 1)
        {
            tk.dispBill();
            cout << "Press any key to go back to main menu: ";
            cin >> goBack;
            if (goBack == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
        else
        {
            mainMenu();
        }
        break;
    }

    case 4:
    {
        cout << "\n\n\t       Thank you!!!      " << endl;
        break;
    }

    default:
        {
        cout << "Invalid input, Please try again!\n"<< endl;
        mainMenu();
        break;
        }
    }
}

int main()
{
    Management Mobj; //initializing and calling main function 
    return 0;
}