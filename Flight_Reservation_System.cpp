//OOPS Project
#include <iostream>
#include<fstream>
#include<string.h>
using namespace std;

int global1=0, global=0;

class domestic_booking
{
    protected:
    int PNR;
    char d_airline[15], d_arrival[10], d_departure[10]; 
    long int d_date;
    int choice, source, destination;
    
    public:
    void d_PNR()
    {
        global++;
        PNR=global;
    }
    int d_details()
    {
        cout<<"\n\t\tEnter Date of Journey (DDMMYY format): ";
        cin>>d_date;
        cout<<"\n\t\t[1] Mumbai (BOM)\t[2] Delhi (DEL)\t[3] Bangalore (BLR)\t[4] Goa (GOI)\n\n";
        cout<<"\n\t\tEnter Starting City: ";
        cin>>source;
        cout<<"\n\t\tEnter Destination: ";
        cin>>destination;
        if((source==1 && destination==2) || (source==2 && destination==1))
        {
            cout<<"\n\t\t 3 Flights Found: "<<endl<<endl;
            cout << "\t\tAirline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\t\t[1]Air Asia\t12:15\t02:55\t2744\t\tNon-refundable\n";
            cout << "\t\t[2]Go Air\t15:20\t20:05\t3165\t\tNon-refundable\n";
            cout << "\t\t[3]IndiGo\t15:25\t20:40\t3745\t\tPartially-refundable\n";

        }
        else if((source==1 && destination==3) || (source==3 && destination==1))
        {
            cout<<"\t\t 3 Flights Found: "<<endl<<endl;
            cout << "\t\tAirline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\t\t[1]Air Asia\t12:15\t02:55\t2744\t\tNon-refundable\n";
            cout << "\t\t[2]Go Air\t15:20\t20:05\t3165\t\tNon-refundable\n";
            cout << "\t\t[3]IndiGo\t15:25\t20:40\t3745\t\tPartially-refundable\n";
        }

        else if((source==1 && destination==4) || (source==4 && destination==1))
        {
            cout<<"\t\t 3 Flights Found: "<<endl<<endl;
            cout << "\t\tAirline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\t\t[1]Air Asia\t12:15\t02:55\t2744\t\tNon-refundable\n";
            cout << "\t\t[2]Go Air\t15:20\t20:05\t3165\t\tNon-refundable\n";
            cout << "\t\t[3]IndiGo\t15:25\t20:40\t3745\t\tPartially-refundable\n";
        }

        else if((source==2 && destination==3) || (source==3 && destination==2))
        {
            cout<<"\t\t 3 Flights Found: "<<endl<<endl;
            cout << "\t\tAirline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\t\t[1]Air Asia\t12:15\t02:55\t2744\t\tNon-refundable\n";
            cout << "\t\t[2]Go Air\t15:20\t20:05\t3165\t\tNon-refundable\n";
            cout << "\t\t[3]IndiGo\t15:25\t20:40\t3745\t\tPartially-refundable\n";

        }

        else if((source==2 && destination==4) || (source==4 && destination==2))//condition
        {
            cout<<"\t\t 3 Flights Found: "<<endl<<endl;
            cout << "\t\tAirline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\t\t[1]Air Asia\t12:15\t02:55\t2744\t\tNon-refundable\n";
            cout << "\t\t[2]Go Air\t15:20\t20:05\t3165\t\tNon-refundable\n";
            cout << "\t\t[3]IndiGo\t15:25\t20:40\t3745\t\tPartially-refundable\n";

        }
        else if((source==3 && destination==4) || (source==4 && destination==3))//condition
         {
            cout<<"\t\t 3 Flights Found: "<<endl<<endl;
            cout << "\t\tAirline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\t\t[1]Air Asia\t12:15\t02:55\t2744\t\tNon-refundable\n";
            cout << "\t\t[2]Go Air\t15:20\t20:05\t3165\t\tNon-refundable\n";
            cout << "\t\t[3]IndiGo\t15:25\t20:40\t3745\t\tPartially-refundable\n";
        }
        else if(source==destination)
        {
            cout << "\n\t\tSource and destination cannot be same.\n\t\tTry again\n\n\n" << endl;
            return d_details();
        }
        else
        {
            cout <<"\n\t\tWrong input \n\t\tTry again\n\n\n" << endl;
            return d_details();
        }

    }
    
    int select_flight()
    {
        cout<<"\n\t\tEnter choosen flight no: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout << "\n\t\tFlight selected:\t";
                cout << "Air Asia"<<endl;
                strcpy(d_airline,"Air Asia");
                cout << "\t\tDeparture Time :\t12:15 hrs"<<endl;
                cout<<"\t\tArrival Time:\t02:55 hrs"<<endl;
                strcpy(d_departure,"12:15"); 
                strcpy(d_arrival,"02:55");
                break;
            
            case 2:
                cout << "\n\t\tFlight selected:\t"<<endl;
                cout << "Go Air"<<endl;
                strcpy(d_airline,"Go Air");
                cout << "\t\tDeparture Time :\t15:20 hrs"<<endl;
                cout<<"\t\tArrival Time:\t20:05 hrs"<<endl;
                strcpy(d_departure,"15:20"); 
                strcpy(d_arrival,"20:05");
                break;
                
            case 3:
                cout << "\n\t\tFlight selected:\t"<<endl;
                cout << "IndiGo"<<endl;
                strcpy(d_airline,"IndiGo");
                cout << "\t\tDeparture Time :\t15:25 hrs"<<endl;
                cout<<"\t\tArrival Time:\t20:40 hrs"<<endl;
                strcpy(d_departure,"15:25"); 
                strcpy(d_arrival,"20:40");
                break;
            
            default:
                cout<<"\n\n\t\tWrong input.\n\tTry Again.\n"<<endl;
                return select_flight();
        }
    }
};

class international_booking
{
    protected:
    int iPNR;
    char i_airline[20], i_arrival[10], i_departure[10];
    long int i_date;
    int i_source, i_destination, i_choice;
    
    public:
    void i_PNR()
    {
        global1++;
        iPNR=global1;
    }
    
    int i_details()
    {
        cout<<"\n\t\tEnter Date of Journey (DDMMYY format):\t ";
        cin>>i_date;
        cout<<"\n\t\t[1] London, United Kingdom (LON)\n\t\t[2] New York, United States (NYC)\n\t\t[3] Paris, France (PAR)\n\t\t[4] Delhi, India (DEL)\n\n\n";
        cout<<"\n\t\tEnter Home City:\t";
        cin>>i_source;
        cout<<"\n\t\tEnter Destination:\t";
        cin>>i_destination;
        if((i_source==1 && i_destination==2) || (i_source==2 && i_destination==1))
        {
            cout<<"\n\t\t 3 Flights Found: "<<endl<<endl;
            cout << "\t\tAirline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\t\t[1]British Airways\t12:15\t22:55\t67544\t\tNon-refundable\n";
            cout << "\t\t[2]United Airlines\t15:20\t02:05\t71026\t\tNon-refundable\n";
            cout << "\t\t[3]Air India\t09:25\t16:10\t77425\t\tPartially-refundable\n";
        }
        else if((i_source==1 && i_destination==3) || (i_source==3 && i_destination==1))//condition
        {
            cout<<"\n\t\t3 Flights Found: "<<endl<<endl;
            cout << "\t\tAirline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\t\t[1]British Airways\t12:15\t22:55\t67544\t\tNon-refundable\n";
            cout << "\t\t[2]United Airlines\t15:20\t02:05\t71026\t\tNon-refundable\n";
            cout << "\t\t[3]Air India\t09:25\t16:10\t77425\t\tPartially-refundable\n";
        }

        else if((i_source==1 && i_destination==4) || (i_source==4 && i_destination==1))//condition
        {
            cout<<"\n\t\t3 Flights Found: "<<endl<<endl;
            cout << "\t\tAirline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\t\t[1]British Airways\t12:15\t22:55\t67544\t\tNon-refundable\n";
            cout << "\t\t[2]United Airlines\t15:20\t02:05\t71026\t\tNon-refundable\n";
            cout << "\t\t[3]Air India\t09:25\t16:10\t77425\t\tPartially-refundable\n";
        }

        else if((i_source==2 && i_destination==3) || (i_source==3 && i_destination==2))//condition
        {
            cout<<"\n\t\t3 Flights Found: "<<endl<<endl;
            cout << "\t\tAirline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\t\t[1]British Airways\t12:15\t22:55\t67544\t\tNon-refundable\n";
            cout << "\t\t[2]United Airlines\t15:20\t02:05\t71026\t\tNon-refundable\n";
            cout << "\t\t[3]Air India\t09:25\t16:10\t77425\t\tPartially-refundable\n";

        }

        else if((i_source==2 && i_destination==4) || (i_source==4 && i_destination==2))//condition
        {
            cout<<"\n\t\t3 Flights Found: "<<endl<<endl;
            cout << "\t\tAirline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\t\t[1]British Airways\t12:15\t22:55\t67544\t\tNon-refundable\n";
            cout << "\t\t[2]United Airlines\t15:20\t02:05\t71026\t\tNon-refundable\n";
            cout << "\t\t[3]Air India\t09:25\t16:10\t77425\t\tPartially-refundable\n";

        }
        else if((i_source==3 && i_destination==4) || (i_source==4 && i_destination==3))//condition
         {
            cout<<"\n\t\t3 Flights Found: "<<endl<<endl;
            cout << "\t\tAirline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\t\t[1]British Airways\t12:15\t22:55\t67544\t\tNon-refundable\n";
            cout << "\t\t[2]United Airlines\t15:20\t02:05\t71026\t\tNon-refundable\n";
            cout << "\t\t[3]Air India\t09:25\t16:10\t77425\t\tPartially-refundable\n";
        }
        else if(i_source==i_destination)
        {
            cout << "\n\t\tSource and destination cannot be same.\n\t\tTry Again.\n\n\n" << endl;
            return i_details();
        }
        else
        {
            cout <<"\n\t\tWrong Input. \n\t\tTry Again.\n\n\n" << endl;
            return i_details();
        }

    }
    
    int i_select_flight()
    {
        cout<<"\n\t\tEnter choosen flight no: \t";
        cin>>i_choice;
        switch(i_choice)
        {
            case 1:
                cout << "\n\t\tFlight selected:\t";
                cout << "British Airways"<<endl;
                strcpy(i_airline,"British Airways");
                cout << "\t\tDeparture Time :\t12:15 hrs"<<endl;
                cout<<"\t\tArrival Time:\t22:55 hrs"<<endl;
                strcpy(i_departure,"12:15"); 
                strcpy(i_arrival,"22:55");
                break;
            
            case 2:
                cout << "\n\t\tFlight selected:\t"<<endl;
                cout << "United Airlines"<<endl;
                strcpy(i_airline,"Unites Airlines");
                cout << "\t\tDeparture Time :\t15:20 hrs"<<endl;
                cout<<"\t\tArrival Time:\t02:05 hrs"<<endl;
                strcpy(i_departure,"15:20"); 
                strcpy(i_arrival,"02:05");
                break;
                
            case 3:
                cout << "\n\t\tFlight selected:\t"<<endl;
                cout << "Air India"<<endl;
                strcpy(i_airline,"Air India");
                cout << "\t\tDeparture Time :\t09:25 hrs"<<endl;
                cout<<"\t\tArrival Time:\t16:10 hrs"<<endl;
                strcpy(i_departure,"09:25"); 
                strcpy(i_arrival,"16:10");
                break;
            
            default:
                cout<<"\t\tWrong Input.\n\t\tTry Again."<<endl;
                return i_select_flight();
        }
    }
};

class passenger: public domestic_booking, public international_booking
{
  protected:
  char first_name[20], last_name[25], email[50];
  int age, gender;
  long int phone;
  
  public:
  void p_details(int x)
  {
      if(x==1)
      {
          d_details();
          select_flight();
      }
      else
      {
          i_details();
          i_select_flight();
      }
      cout<<"\n\n\n\t\tPasseger Details"<<endl;
      cout<<"\t\tFirst Name: ";
      cin>>first_name;
      cout<<"\t\tLast Name: ";
      cin>>last_name;
  }
  
  int gender_check()
  {
      cout<<endl<<"\t\t[0] Male \t[1] Female\n\t\tGender: ";
      cin>>gender;
      if (gender>2 or gender<0)
      {
          cout<<"\n\n\t\tWrong Input.\n\t\tTry again.\n\n\n";
          return gender_check();
      }
  }
  
  void more_info()
  {
      cout<<"\n\t\tAge: ";
      cin>>age;
      cout<<"\n\t\tEnail Id: ";
      cin>>email;
      cout<<"\n\t\tMobile No: ";
      cin>>phone;
  }
  
  void display_info()
  {
        cout << "\n\n\t\tDetails Entered:\n";
        cout << "\n\t\tName:\t" << first_name << " " << last_name << endl;
        cout << "\n\t\tGender:\t" << gender << endl;    
        cout << "\n\t\tAge:\t" << age << endl;
        cout << "\n\t\tEmail id:\t" << email << endl;
        cout << "\n\t\tContact No.:\t" << phone << endl;
  }
  
  int getPNR()
  { return PNR; }
  
  int getiPNR()
  { return iPNR; }
  
  void display_flight_info()
  {
        cout<<"\n\t\tPNR:\t" << PNR << endl;
        cout<<"\n\t\tFlight:\t" << d_airline << endl;
        cout<<"\n\t\tName:\t" << first_name << " " << last_name << endl;
        cout<<"\n\t\tDate of Journey:\t" << d_date << endl;
        cout<<"\n\t\tDeparture Time:\t" << d_departure << endl;
        cout<<"\n\t\tArrival Time:\t" << d_arrival<<endl;
  }
  
  void i_display_flight_info()
  {
         cout<<"\n\t\tPNR:\t" << iPNR << endl;
         cout<<"\n\t\tFlight:\t" << i_airline << endl;
         cout<<"\n\t\tName:\t" << first_name << " " << last_name << endl;
         cout<<"\n\t\tDate of Journey:\t" << i_date << endl;
         cout<<"\n\t\tDeparture Time:\t" << i_departure << endl;
         cout<<"\n\t\tArrival Time:\t" << i_arrival<<endl;
  }
};

void createfile(passenger p)
{  ofstream fin("domestic.txt",ios::binary|ios::app);
   fin.write((char*)&p,sizeof(p));
   fin.close();
}


void check_ticket(int x)
{
    passenger p;
    int f=0;
    ifstream fout("domestic.txt",ios::binary);
    fout.read((char *)&p,sizeof(p));
    while (fout)
    {
        if (p.getPNR()==x)
        {
            cout<<"\n\t\tTicket Found"<<endl;
            p.display_flight_info();
            f++;
            break;
        }
        fout.read((char *)&p, sizeof(p));
    }
    fout.close();
    if (f==0)
    cout<<"\n\t\tTicket Not Found.\n\t\tPlease check PNR entered."<<endl;
}

void i_create_file(passenger p)
{
    ofstream fin("international.txt",ios::binary|ios::app);
    fin.write((char *)&p, sizeof(p));
    fin.close();
}

void checkticketi(int x)
{  
    passenger p;
    int f=0;
    ifstream fout("international.txt",ios::binary);
    fout.read((char *)&p,sizeof(p));
    while(fout)
    {
        if (p.getiPNR()==x)
        {
            p.i_display_flight_info();
            cout<<"\n\t\tYour ticket"<<endl;
            f++;
            break;
        }
    fout.read((char *)&p,sizeof(p));
   }
   fout.close();
   if (f==0)
   cout<<"\n\t\tTicket not found.\n\t\tPlease check PNR entered."<<endl;

}

void check_in()
{
    cout<<"\n\t\tWEB CHECK IN \n\n";
    cout<<"\t\tPlease select any available seat to proceed further"<<endl;
    
    
cout<<"                                    /|"<<endl;
cout<<"                                   / |"<<endl;
cout<<"                                  /  |"<<endl;
cout<<"                                 /   |"<<endl;
cout<<"                                /    |                          /|"<<endl;
cout<<"                               /     |                         / |"<<endl;
cout<<"                              /      |                        /  |"<<endl;
cout<<"           __________________/_______|_______________________/___|_______"<<endl;
cout<<"          /    $|    X|    $|  4F| 5F|   X|   X|   X|   X| 10F| 11F|    |"<<endl;
cout<<"         /     $|   2E|   3E|   X| 5E|  6E|  7E|  8E|  9E| 10E|   X|    |"<<endl;    
cout<<"        /      $|    X|   3D|  4D| 5D|   X|  7D|  8D|  9D| 10D| 11D|    |"<<endl;   
cout<<"       <                                                                |"<<endl;
cout<<"        \\     $|   2C|   3C|  4C|  5C| 6C|  7C|  8C|  9C| 10C|   X|     |"<<endl;          
cout<<"         \\    $|   2B|   3B|   X|  5B| 6B|  7B|  8B|  9B| 10B| 11B|     |"<<endl;          
cout<<"          \\___$|____X|____X|___$|___$|_6A|___X|__8A|__9A|_10A|_11A|_____|"<<endl;
cout<<"                             \\      |                       \\  |"<<endl;
cout<<"                              \\     |                        \\ |"<<endl;
cout<<"                               \\    |                         \\|"<<endl;
cout<<"                                \\   |                          "<<endl;
cout<<"                                 \\  |"<<endl;
cout<<"                                  \\ |"<<endl;
cout<<"                                   \\|"<<endl;

cout<<"\t\tSeats denoted by \n\t\t$ - Paid Seats (Rs 500)\n\t\tX - Booked Seats\n\t\tAll other seats are available";
cout<<"\n\n\t\tEnter selection: \t";
string seat;
cin>>seat;
cout<<"\n\t\tSelected Seat is \t"<<seat<<endl;
}

int main()
{
    class domestic_booking d1;
    class international_booking i1;
    class passenger p1;
    int ch, ch1, n;
    char input;
    do
    {
       cout<<"\n\n\t\tFlight Reservation System"<<endl<<endl;
       cout<<"\n\n\t\t[1] New Booking\n\t\t[2] Verify Ticket\n\t\t[3] Web Check In\n\t\t[4] Exit"<<endl;
       cout<<"\n\t\tPlease enter your choice: ";
       cin>>ch;
       cout<<"\n\n\t\tMade by Vittesha Gupta"<<endl<<endl;
       switch(ch)
       {
           case 1:
           cout<<"\n\n\t\t[1] Domestic Flight\n\t\t[2] International Flight"<<endl;
           cout<<"\t\tChoose one option: \t";
           cin>>ch1;
           switch(ch1)
           {
               case 1:
               p1.d_PNR();
               p1.p_details(1);
               p1.gender_check();
               p1.more_info();
               p1.display_flight_info();
               createfile(p1);
               break;
               
               case 2:
               p1.i_PNR();
               p1.p_details(0);
               p1.gender_check();
               p1.more_info();
               p1.i_display_flight_info();
               i_create_file(p1);
               break;
               
               default:
               cout<<"\n\t\tWrong Input.\n\t\tTry Again.\n\n\n"<<endl;
               return main();
           }
           break;
           
           case 2:
                  cout << "\t\t[1] Domestic Fights \n\t\t[2] International Flights" << endl;
                  cout << "\n\t\tChoose one option: ";
                  cin >> ch1;
                  if(ch1==1)
                  {
                    cout << "\t\tPlease enter PNR: ";
                    cin>>n;
                    check_ticket(n);
                  }
                  
                  else if(ch1==2)
                  {  
                    cout << "\t\tPlease enter PNR: \t";
                    cin>>n;
                    checkticketi(n);
                  }
                  
                   else
                  {
                   cout << "\n\t\tWrong Input.\n\t\tTry Again.\n\n\n";
                   return main();
                  } 
                  
               break;
               
            case 3:
                cout<<"\t\tPlease enter PNR:\t";
                cin>>n;
                cout<<"\t\tFlight PNR "<<n<<endl<<endl;
                check_in();
                break;
                
            case 4:
                cout<<"\n\t\tThank you for using this reservation system"<<endl;
                return 0;
                
            default:
                cout<<"\n\t\tWrong Input.\n\t\tTry Again.\n\n\n";
                return main();
                
       }
       cout<<"\n\n\t\tContinue? (y/n)"<<endl;
       cin>>input;
    }
    while(input=='y'||input=='Y');


    return 0;
}
