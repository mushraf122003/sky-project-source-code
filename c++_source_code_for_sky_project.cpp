#include<iostream>
#include<conio.h>
#include<string.h>
#include<fstream>

using namespace std;
class files {
	public :
	    void create_file() {
	    	int find;
	    	string userdata ,passworddata, uc,pc;
	    	cout<<"---------------------------------------------------------------------------"<<endl;
     	    cout<<"***************************VERIFICATION***PAGE*****************************"<<endl;
	        cout<<"---------------------------------------------------------------------------"<<endl;
	    	cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	    	cout<<"    enter your username for verification  "<<endl;
	    	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	    	cin>>userdata;
	    	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	    	cout<<"    enter your password for verification  "<<endl;
	    	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	    	cin>>passworddata;
	    	ifstream storefile("database.txt", ios::in);
	    	while(storefile>>uc>>pc){
			    if(uc== userdata && pc == passworddata){
				    find = 1;
			    }
			}
			if(find == 1) {
				system("cls");
				char filename[100];
			cout<<"---------------------------------------------------------------------------"<<endl;
     	    cout<<"***************************VERIFICATION***PAGE*****************************"<<endl;
	        cout<<"---------------------------------------------------------------------------"<<endl;
	        cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	        cout<<"  enter file name to create  "<<endl;
	        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	        cin>>filename;
	        ofstream file(filename, ios::out);
	        if(!file.is_open()) {
		        cout<<"error while opening the file!!!"<<endl;
	        } 
		    else{
		        system("cls");
	            char d[1000000];
	            int num;
	            cout<<"---------------------------------------------------------------------------"<<endl;
	            cout<<"***************************************************************************"<<endl;
	            cout<<"---------------------------------------------------------------------------"<<endl;
	            cout<<"your file with name "<<filename<<" is created succesfully...               "<<endl; 
	            cout<<"hey... i need to know something \ntell me that exactly \nhow many numbers of lines do you want to store in your file : "<<endl;
	            cin>>num;
	            cout<<"write your content below...."<<endl;
	            cout<<"---------------------------------------------------------------------------"<<endl;
	            cout<<"***************************************************************************"<<endl;
	            cout<<"---------------------------------------------------------------------------"<<endl;
	            file<<"your_username"<<"  "<<"your_password"<<endl;
	            file<<userdata<<"  "<<passworddata;
	            for(int i = 0; i<num+1 ; i++) {
	            cin.getline(d,1000000);
	            file<<endl<<d;
		        }
		        file.close();
		        system("cls");
		        cout<<" _____________________________________"<<endl;
		        cout<<"| your file is stored sucessfully!!   |"<<endl;
		        cout<<"|_____________________________________|"<<endl;
		        cout<<"\npress enter to exit..."<<endl;
		        cin.get();
	        }                	
			}
			else {
				system("cls");
				cout<<" ___________________________________"<<endl;
				cout<<"|      error while opening file     |"<<endl;
				cout<<"|___________________________________|"<<endl;
				cout<<"\npress enter key to continue..."<<endl;
				cin.get();
				cin.get();
			}
	        
        }
        void read_file() {
	        int find;
	        string userdata ,passworddata, uc,pc;
	        cout<<"---------------------------------------------------------------------------"<<endl;
            cout<<"***************************VERIFICATION***PAGE*****************************"<<endl;
	        cout<<"---------------------------------------------------------------------------"<<endl;
	        cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	        cout<<"    enter your username for verification  "<<endl;
	        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    	    cin>>userdata;
	        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	        cout<<"     enter your password for verification  "<<endl;
	        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	        cin>>passworddata;
	        system("cls");
	        char filename[100];
	        cout<<"---------------------------------------------------------------------------"<<endl;
            cout<<"***************************VERIFICATION***PAGE*****************************"<<endl;
	        cout<<"---------------------------------------------------------------------------"<<endl;
	        cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	        cout<<" enter your filename to view  "<<endl;
	        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	        cin>>filename;
 	        ifstream file(filename, ios::in);
	        while(file>>uc>>pc) {
		        if(uc == userdata && pc == passworddata) {
			    find = 1;
		        }
	        }
	        file.close();
	        if(find == 1) {
	            system("cls");
                cout<<" ___________________________________________"<<endl;
	            cout<<"|   your file content is printed below...   |"<<endl;
	            cout<<"|___________________________________________|"<<endl;	
	            cout<<"---------------------------------------------------------------------------"<<endl;
	            cout<<"***************************************************************************"<<endl;
	            cout<<"---------------------------------------------------------------------------"<<endl;
	            ifstream readfile(filename, ios::in);
	            string line;
	            while(readfile.good()) {
		            getline(readfile,line);
		            cout<<line<<endl;
	            }
	            readfile.close();
	            cout<<"---------------------------------------------------------------------------"<<endl;
       	        cout<<"***************************************************************************"<<endl;
	            cout<<"---------------------------------------------------------------------------"<<endl;
	            cout<<" ________________________________________________"<<endl;
	            cout<<"|   your file content is printed sucessfully!!   |"<<endl;
	            cout<<"|________________________________________________|"<<endl;
	            cout<<"\npress enter key to exit..."<<endl;
	            cin.get();
	            cin.get();
	        }
	        else {
		        system("cls");
		        cout<<"---------------------------------------------------------------------------"<<endl;
	            cout<<"*********************************FAILED************************************"<<endl;
	            cout<<"---------------------------------------------------------------------------"<<endl;
		        cout<<"\n                     hey...you can't access this file!!!"<<endl;
		        cout<<"\n---------------------------------------------------------------------------"<<endl;
     	        cout<<"***************************************************************************"<<endl;
	            cout<<"---------------------------------------------------------------------------"<<endl;
		        cout<<"press enter key to exit..."<<endl;
		        cin.get();
		        cin.get();
            }
        }
        void append_file() {
	        int find;
	        string userdata ,passworddata, uc,pc;
	        cout<<"---------------------------------------------------------------------------"<<endl;
            cout<<"***************************VERIFICATION***PAGE*****************************"<<endl;
	        cout<<"---------------------------------------------------------------------------"<<endl;
	        cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	        cout<<"    enter your username for verification  "<<endl;
	        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	        cin>>userdata;
	        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	        cout<<"     enter your password for verification  "<<endl;
	        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	        cin>>passworddata;
            system("cls");
	        char name[100];
	        cout<<"---------------------------------------------------------------------------"<<endl;
            cout<<"***************************VERIFICATION***PAGE*****************************"<<endl;
	        cout<<"---------------------------------------------------------------------------"<<endl;
            cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
            cout<<"  enter ur file name  "<<endl;
            cout<<"~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
            cin>>name;
            system("cls");
            ifstream readfile(name, ios::in);
            while(readfile>>uc>>pc) {
		        if(uc == userdata && pc == passworddata) {
			    find = 1;
		        }
	        }
	        readfile.close();
	        if(find == 1) {
	        system("cls");
	        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
            cout<<"\nthe content already present in the file is...."<<endl;
            cout<<"showen below..."<<endl;
            cout<<"---------------------------------------------------------------------------"<<endl;
            cout<<"***************************************************************************"<<endl;
            cout<<"---------------------------------------------------------------------------"<<endl;
            string line;
            ifstream f(name, ios::in);
            while(f.good()) {
	            getline(f,line);
	            cout<<line<<endl;
            }
            f.close();
            cout<<"\n---------------------------------------------------------------------------"<<endl;
            cout<<"***************************END OF THE FILE*********************************"<<endl;
	        cout<<"---------------------------------------------------------------------------"<<endl;
 	        cout<<"\npress enter to continue..."<<endl;
	        cin.get();
	        cin.get();
	        ofstream file(name, ios::out | ios::app);
	        if(!file.is_open()) {
		        cout<<"error while opening the file!!!"<<endl;
	        } 
		    else{
	            char d[1000000];
	            int num;
	            system("cls");
	            cout<<"---------------------------------------------------------------------------"<<endl;
	            cout<<"***************************************************************************"<<endl;
	            cout<<"---------------------------------------------------------------------------"<<endl;
	            cout<<"\nhey... i need to know something \ntell me that exactly \nhow many numbers of lines do you want to append in your existing file : "<<endl;
	            cin>>num;
	            cout<<"write your content below...."<<endl;
	            cout<<"---------------------------------------------------------------------------"<<endl;
	            cout<<"***************************************************************************"<<endl;
	            cout<<"---------------------------------------------------------------------------"<<endl;
	            for(int i = 0; i<num+1 ; i++) {
	                cin.getline(d,1000000);
	                file<<endl<<d;
		        }
		        file.close();
		        system("cls");
		        cout<<" _____________________________________"<<endl;
		        cout<<"| your file is stored sucessfully!!   |"<<endl;
		        cout<<"|_____________________________________|"<<endl;
		        cout<<"\npress enter to exit..."<<endl;
		        cin.get();
	        }
            }
	        else {
		        system("cls");
		        cout<<" _______________________________________ "<<endl;
	            cout<<"|    you can't access this file...      |"<<endl;
	            cout<<"|_______________________________________|"<<endl;
		        cout<<"\npress enter key to continue.."<<endl;
		        cin.get();
		        cin.get();
	        }
    
        }
        void delete_file() {
	        int find;
	        string userdata ,passworddata, uc,pc;
	        cout<<"---------------------------------------------------------------------------"<<endl;
            cout<<"***************************VERIFICATION***PAGE*****************************"<<endl;
	        cout<<"---------------------------------------------------------------------------"<<endl;
	        cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	        cout<<"    enter your username for verification  "<<endl;
	        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	        cin>>userdata;
	        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	        cout<<"     enter your password for verification  "<<endl;
	        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	        cin>>passworddata;
	        system("cls");
	        char filename[100];
	        cout<<"---------------------------------------------------------------------------"<<endl;
            cout<<"***************************VERIFICATION***PAGE*****************************"<<endl;
	        cout<<"---------------------------------------------------------------------------"<<endl;
	        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	        cout<<"enter the file name to delete "<<endl;
	        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	        cin>>filename;
	        ifstream f(filename, ios::in);
            while(f>>uc>>pc) {
		    if(uc == userdata && pc == passworddata) {
			    find = 1;
		    }
	        }
	        f.close();
	        if( find ==1) {
	            remove(filename);
	            system("cls");
	            cout<<"---------------------------------------------------------------------------"<<endl;
                cout<<"******************YOUR**FILE*IS**DELETED**SUCESSFULLY**********************"<<endl;
                cout<<"---------------------------------------------------------------------------"<<endl;
                cout<<"\npress enter key to exit..."<<endl;
                cin.get();
                cin.get();
            }
            else {
	            system("cls");
	            cout<<" _______________________________________"<<endl;
	            cout<<"|    you can't access this file...      |"<<endl;
	            cout<<"|_______________________________________|"<<endl;
	            cout<<"\npress enter key to exit..."<<endl;
                cin.get();
                cin.get();
	        }
}
void file_menu() {
	int get;
	char ch;
	do{
		system("cls");
		cout<<"---------------------------------------------------------------------------"<<endl;
        cout<<"****************************MAIN***MENU************************************"<<endl;
	    cout<<"---------------------------------------------------------------------------"<<endl;
		cout<<"\n1. create a new file"<<endl;
	    cout<<"2. read your existing file"<<endl;
	    cout<<"3. append a file "<<endl;
	    cout<<"4. delete a file "<<endl;
	    cout<<"5. log out          "<<endl;
	    cout<<"\n---------------------------------------------------------------------------"<<endl;
        cout<<"***************************************************************************"<<endl;
	    cout<<"---------------------------------------------------------------------------"<<endl;
	    cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	    cout<<"    enter your choice  "<<endl;
	    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	    cin>>get;
	    switch(get) {
	    	case 1:
	    		{
	    		    system("cls");
	    		    create_file();
	    		    break;
                }
            case 2:
            	{
            		
            		system("cls");
            		read_file();
            		break;
				}
			case 3:
				{
					system("cls");
					append_file();
					break;
				}
			case 4:
				{
					system("cls");
					delete_file();
					break;
				}
			case 5:
				{
					system("cls");
					cout<<" __________________________________ "<<endl;
					cout<<"|   thank you for using this app   |"<<endl;
					cout<<"|           bye....bye             |"<<endl;
					cout<<"|__________________________________|"<<endl;
					cout<<"\npress enter key to continue..."<<endl;
					cin.get();
					cin.get();
					break;
				}
			default :
				{
					system("cls");
					cout<<"---------------------------------------------------------------------------"<<endl;
                   	cout<<"***************************************************************************"<<endl;
	                cout<<"---------------------------------------------------------------------------"<<endl;
				    cout<<"\n                   enter a valid choice..!!                              "<<endl;
				    cout<<"\n---------------------------------------------------------------------------"<<endl;
                   	cout<<"***************************************************************************"<<endl;
	                cout<<"---------------------------------------------------------------------------"<<endl;
	                cout<<"\npress enter to continue...."<<endl;
	                cin.get();
	                cin.get();
	                break;
				}
		}
		cout<<"do you want continue...(y/n)?"<<endl;
		cin>>ch;
	}while(ch== 'y' || ch== 'Y');
	system("cls");
}
};

class sky_main : public files{
	public:
		void login() {                                              //login
			string password,username,u,p;
			int flag = 0;
			cout<<"~~~~~~~~~~LOGIN~~PAGE~~~~~~~~~~~"<<endl;
			cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			cout<<"    Enter username  "<<endl;
			cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			cin>>username;
			cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			cout<<"    Enter password  "<<endl;
			cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			cin>>password;
			cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			ifstream f("database.txt", ios::in);
			while(f>>u>>p){
				if(u== username && p == password){
					flag = 1;
				}
			}
		    if(flag == 1) {
		    	system("cls");
		        cout<<"---------------------------------------------------------------------------"<<endl;
                cout<<"***************************WELCOME***PAGE**********************************"<<endl;
	            cout<<"---------------------------------------------------------------------------"<<endl;
				cout<<"\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-"<<endl;
				cout<<"\n               SKY WELCOMES YOU               "<<endl;
				cout<<"                 MY DEAR FRIEND                 "<<endl;
				cout<<"\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-"<<endl;
				cout<<"\npress enter key to continue..."<<endl;
				cin.get();
				cin.get();
				file_menu();
			}
			else {
				system("cls");
				cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-"<<endl;
		    	cout<<"\nplease check your username and password my dear friend....... "<<endl;
		    	cout<<"\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-"<<endl;
			}
			
		}
		void signin () {
			string username, u;
			string password, p;
			int find = 1;
			cout<<" ____________________________________"<<endl;
			cout<<"| NOTE :                             |"<<endl;
			cout<<"|       SPACE IS NOT ACCEPTED        |"<<endl;
			cout<<"|____________________________________|"<<endl;
			cout<<"\n~~~~~~~~~~~~SIGNIN~~PAGE~~~~~~~~~~~~~"<<endl;
			cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		    cout<<"     create your username  "<<endl;
		    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		    cin>>username;
		    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		    cout<<"     create your password  "<<endl;
		    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		    cin>>password;
		    ifstream f("database.txt", ios::in);
			while(f>>u>>p){                                   
				if(u== username || p == password){
	                if( u== username) {
	                	system("cls");
	                	cout<<"\n _________________________________________"<<endl;
	                	cout<<"|   already someone has this username...  |"<<endl;
	                	cout<<"|    please.. enter a unique username!!   |"<<endl;
	                	cout<<"|_________________________________________|"<<endl;
	                	find = 0;
					}
					else if(p== password) {
						system("cls");
						cout<<"\n _________________________________________"<<endl;
						cout<<"|  already someone has this password...   |"<<endl;
	                	cout<<"|  please.. enter a unique password!!     |"<<endl;
	                	cout<<"|_________________________________________|"<<endl;
	                	find = 0;
					}
                }
		     }
		    if(find == 1) {
		    	system("cls");
		    	ofstream filescan("database.txt", ios::app);
		        filescan<<endl<<username<<"  "<<password<<endl;
			    cout<<"------------------------------------------------------------------"<<endl;
        	    cout<<"******************************************************************"<<endl;
                cout<<"------------------------------------------------------------------"<<endl;
		        cout<<"\n           your account is created sccessfully..!! "<<endl;
		        cout<<"\n------------------------------------------------------------------"<<endl;
        	    cout<<"******************************************************************"<<endl;
                cout<<"------------------------------------------------------------------"<<endl;
                filescan.close();
			}
		}
		void forgot() {
			int wish;
			cout<<"------------------------------------------------------------------"<<endl;
        	cout<<"************************RECOVERY***PAGE***************************"<<endl;
            cout<<"------------------------------------------------------------------"<<endl;
			cout<<"\nhow do you want to find your acount?? "<<endl;
			cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			cout<<"\n       1. serch by username            "<<endl;
			cout<<"       2. serch by password            "<<endl;
			cout<<"       3. go back menu page            "<<endl;
			cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			cin>>wish;
			switch(wish) {
				case 1:
					{
					system("cls");
					cout<<"------------------------------------------------------------------"<<endl;
        	        cout<<"********************PASSWORD***RECOVERY**PAGE*********************"<<endl;
                    cout<<"------------------------------------------------------------------"<<endl;
					cout<<"\nokay... let's serch your account by username"<<endl;
					int found = 0;
					string serchuser, su,sp;
					cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
					cout<<"  enter your username   "<<endl;
					cout<<"~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
					cin>>serchuser;
					ifstream serchpassword("database.txt");
					while(serchpassword>>su>>sp) {
						if(su == serchuser) {
							found = 1;
							break;
						}
					}
					serchpassword.close();
					system("cls");
					if(found ==1) {
						cout<<"------------------------------------------------------------------"<<endl;
                    	cout<<"**********************SUCCESFULLY***RECOVER***********************"<<endl;
                        cout<<"------------------------------------------------------------------"<<endl;
						cout<<"\nhey...i have found your passwor friend... nothing to worry!!"<<endl;
						cout<<"here's your password "<<endl;
						cout<<"\n----------------------"<<endl;
						cout<<"\nusername : "<<su<<endl;
						cout<<"passwor : "<<sp<<endl;
						cout<<"\n----------------------"<<endl;
						cout<<"\nplease... note this password carefully!!! "<<endl;
						cout<<"\n------------------------------------------------------------------"<<endl;
                       	cout<<"******************************************************************"<<endl;
                        cout<<"------------------------------------------------------------------"<<endl;
					}
					else {
						cout<<"------------------------------------------------------------------"<<endl;
                       	cout<<"***********************RECOVERY***FAILED**************************"<<endl;
                        cout<<"------------------------------------------------------------------"<<endl;
						cout<<"\n        hey...i'm soryy!!! i can't found your account          "<<endl;
						cout<<"\n------------------------------------------------------------------"<<endl;
                       	cout<<"******************************************************************"<<endl;
                        cout<<"------------------------------------------------------------------"<<endl;
					}
					break;
				 }
				case 2:
					{
					system("cls");
					cout<<"------------------------------------------------------------------"<<endl;
        	        cout<<"********************USERNAME***RECOVERY**PAGE*********************"<<endl;
                    cout<<"------------------------------------------------------------------"<<endl;
					cout<<"\nokay... let's serch your account by password"<<endl;
					int got = 0;
					string serchpassword, su1,sp1;
					cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
					cout<<"  enter your password  "<<endl;
					cout<<"~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
					cin>>serchpassword;
					ifstream serchuser("database.txt",ios::in);
					while(serchuser>>su1>>sp1) {
						if(sp1 == serchpassword) {
							got = 1;
							break;
						}
					}
					serchuser.close();
					system("cls");
					if(got == 1) {
						cout<<"------------------------------------------------------------------"<<endl;
                    	cout<<"**********************SUCCESFULLY***RECOVER***********************"<<endl;
                        cout<<"------------------------------------------------------------------"<<endl;
						cout<<"\nhey...i have found your username friend... nothing to worry!!"<<endl;
						cout<<"here's your username "<<endl;
						cout<<"\n----------------------"<<endl;
						cout<<"\nusername : "<<su1<<endl;
						cout<<"password : "<<sp1<<endl;
						cout<<"\n----------------------"<<endl;
						cout<<"\nplease... note this username carefully!!!! "<<endl;
						cout<<"\n------------------------------------------------------------------"<<endl;
                       	cout<<"******************************************************************"<<endl;
                        cout<<"------------------------------------------------------------------"<<endl;
					}
					else {
						cout<<"------------------------------------------------------------------"<<endl;
                       	cout<<"***********************RECOVERY***FAILED**************************"<<endl;
                        cout<<"------------------------------------------------------------------"<<endl;
						cout<<"\n          hey...i'm soryy!!! i can't find your accout"<<endl;
						cout<<"\n------------------------------------------------------------------"<<endl;
                       	cout<<"******************************************************************"<<endl;
                        cout<<"------------------------------------------------------------------"<<endl;
					}
					break;
				    }
					case 3:
						{
						system("cls");
						cout<<"------------------------------------------------------------------"<<endl;
                       	cout<<"**************************THANK**YOU******************************"<<endl;
                        cout<<"------------------------------------------------------------------"<<endl;
						cout<<"\ni hope u have found a solution to your problem "<<endl;
						cout<<"\n------------------------------------------------------------------"<<endl;
                       	cout<<"******************************************************************"<<endl;
                        cout<<"------------------------------------------------------------------"<<endl;
						cin.get();
						cout<<"press enter key to go back to menu "<<endl;
						cin.get();
						cout<<"press again to get back"<<endl;
						break;
					}
					default:
						{
							
							system("cls");
							cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
							cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
							cout<<"\n     press valid choice!!!   "<<endl;
							cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
							cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
							cin.get();
							cout<<"\npress enter key to get back to menu "<<endl;
							cin.get();
							system("cls");
							forgot();
							break;
						}
			}
		}
		void firstmenu() {
			int choice;
			char get;
			do{
				system("cls");
				cout<<"-----------------------------------"<<endl;
                cout<<"**************M*E*N*U**************"<<endl;
                cout<<"-----------------------------------"<<endl;
				cout<<"1. login "<<endl;
				cout<<"-----------------------------------"<<endl;
				cout<<"2. create new account "<<endl;
				cout<<"-----------------------------------"<<endl;
				cout<<"3. forgot password ?"<<endl;
				cout<<"-----------------------------------"<<endl;
				cout<<"4. exit "<<endl;
				cout<<"***********************************"<<endl;
				cout<<"       enter your choice   "<<endl;
				cout<<"***********************************"<<endl;
				cin>>choice;
				
				switch(choice) {
					case 1 :
						{
						system("cls");
						login();
						cin.get();
						cout<<"\npress enter key to exit "<<endl;
						cin.get();
						break;
					    }
					case 2 :
						{
						system("cls");
						signin();
						cin.get();
						cout<<"\npress enter key to exit "<<endl;
						cin.get();
						break;
					    }
					case 3:
						{
						system("cls");
						forgot();
						cin.get();
						cout<<"\npress enter key to exit "<<endl;
						cin.get();
						break;
					    }
					case 4 :
						{
						system("cls");
						cout<<"------------------------------------------------------------------"<<endl;
                       	cout<<"**************************THANK**YOU******************************"<<endl;
                        cout<<"------------------------------------------------------------------"<<endl;
					    cout<<"\n _________________________________________________________________ "<<endl;
					    cout<<"| I HOPE THIS APP HELPED FOR YOUR WORK                            |"<<endl;
					    cout<<"| THIS APP WILL BE DEVELOPED SOON WITH MORE FACILITIES            |"<<endl;
					    cout<<"|         ________________________________________                |"<<endl;
					    cout<<"|        |  DEVELOPER : MUSHRAF                   |               |"<<endl;
					    cout<<"|        |  APP NAME : SKY                        |               |"<<endl;
					    cout<<"|        |________________________________________|               |"<<endl;
					    cout<<"|_________________________________________________________________|"<<endl;
					    cout<<"\n------------------------------------------------------------------"<<endl;
                       	cout<<"******************************************************************"<<endl;
                        cout<<"------------------------------------------------------------------"<<endl;
						cout<<"press e to exit "<<endl;
						cin>>get;
						if(get=='e') {
						system("cls");
					    }
						break;
					}
					default :
						{
							system("cls");
							cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
							cout<<"\n   enter a valid choice!!!...   "<<endl;
							cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
							cin.get();
							cout<<"\npress enter key to go back to menu page "<<endl;
							cin.get();
							break;
						}
				}
				
		    }while(get != 'e');
		}
};

int main() {
	sky_main s;
	system("color B0");
	s.firstmenu();
}
