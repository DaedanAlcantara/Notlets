
//Project Notlets

#include <iostream>
#include <cmath>
#include <cstring>
#include <conio.h>
#include <stdlib.h>
#include <cstdio>
using namespace std;



//Directory
void menu();
void open();
void info();
void file();

//Input
void one();
void two();
void three();
void four();

//Read
void OPone();
void OPtwo();
void OPthree();
void OPfour();

//Update
void UPone();
void UPtwo();
void UPthree();
void UPfour();

//Rename
void RNone();
void RNtwo();
void RNthree();
void RNfour();

//Delete
void DELone();
void DELtwo();
void DELthree();
void DELfour();

//security
void security1();
void security2();
void security3();
void security4();

//Storage
char notlet1[100];
char notlet2[100];
char notlet3[100];
char notlet4[100];
char temp[100];
int trans1[100] = { 0 };
int trans2[100] = { 0 };
int trans3[100] = { 0 };
int trans4[100] = { 0 };

//Keys
char filename[10];
int  i=0;
int slot;
int key, OPkey, UPkey, DELkey;
int x;
char c, d;
int sum1=0;
int sum2=0;
int sum3=0;
int sum4=0;
int TOTsum;
char buffer;

//Names
string filename1 = "***";
string filename2 = "***";
string filename3 = "***";
string filename4 = "***";
string tempname;

int main() {
	bool runtime = true;
	while (runtime) {
	    	cout << "\x1B[2J\x1B[H";
		cin.clear();
		menu();
	if (key==1) {
	    //new file
	    	cout<< "\n\n\t\t\t\t\t\t[1] "<<filename1<<"\t\t\t\t[2] "<<filename2<<"\n\t\t\t\t\t\t[3] "<<filename3<<"\t\t\t\t[4] "<<filename4<<endl;
	        cout<<"\t\t\t\t\t\t\t[0] Back to Menu";
	    	cout<<"\n\t\t\t\t\tChoose slot (1-4).\t\t>>";
			cin>>slot;
			if (slot==1) {
			    security1();
                if (sum1 == 0){
                    cout<<"\n\n\t\t\t\t\tName of File 1:\t";
				    cout<<"\n\t\t\t\t\t\t\t>>";
				    cin>>filename1;
				    one();
				    break;
                } else {
                    cout<<"\t\t\t\t\t\t\t\tThis is an existing notlet. Press any key to continue.";
                    cout<<"\n\t\t\t\t\t\t\t>>";
				    cin>>buffer;
                    main();

                }

			} else if (slot==2){
			    security2();
			    if (sum2 == 0){
			        cout<<"\n\n\t\t\t\t\tName of File 2:\t";
				    cout<<"\n\t\t\t\t\t\t\t>>";
				    cin>>filename2;
				    two();
				    break;
			    } else {
			        cout<<"\t\t\t\t\t\t\t\tThis is an existing notlet. Press any key to continue.";
                    cout<<"\n\t\t\t\t\t\t\t>>";
				    cin>>buffer;
                    main();
			    }

			} else if (slot==3){
			    security3();
			    if (sum3 == 0){
			        cout<<"\n\n\t\t\t\t\tName of File 3:\t";
				    cout<<"\n\t\t\t\t\t\t\t>>";
				    cin>>filename3;
				    three();
				    break;
			    } else {
			        cout<<"\t\t\t\t\t\t\t\tThis is an existing notlet. Press any key to continue.";
                    cout<<"\n\t\t\t\t\t\t\t>>";
				    cin>>buffer;
                    main();
			    }
			    

			} else if (slot==4){
			    security4();
			    if (sum4==0){
			        cout<<"\n\n\t\t\t\t\tName of File 4:\t";
				    cout<<"\n\t\t\t\t\t\t\t>>";
				    cin>>filename4;
				    four();
				    break;			        
			    } else {
			        cout<<"\t\t\t\t\t\t\t\tThis is an existing notlet. Press any key to continue.";
                    cout<<"\n\t\t\t\t\t\t\t>>";
				    cin>>buffer;
                    main();			        
			    }

			} else {
			    cout<<"\n\t\t\t\t\t\t\tInvalid Input. Press any key to continue.";
                cout<<"\n\t\t\t\t\t\t\t>>";
				cin>>buffer;
                    main();
			    
			}

	}
	else if (key==2) {
	    //open file
            security1();
            security2();
            security3();
            security4();
           TOTsum = sum1+sum2+sum3+sum4 ;
            if (TOTsum==0){
                cout<<"\n\t\t\t\t\t\t\t\tEmpty Notlets"<<endl;
	            cout<<"\t\t\t\t\t\t\t\t   ***"<<endl;
	            cout<<endl;
	            cout<<"\t\t\t\t\t\tThere are no notlets made yet. Press any key to continue.";
	            cout<<"\n\t\t\t\t\t\t\t>>";
	            	cin>>buffer;
                    main();
                
            } else {
                open();
		cout<<"\n\t\t\t\t\t\t\t>>";
		cin>>OPkey;
		switch (OPkey){
		    case 1:
		    OPone();
		    cout<<"\t\t\t\t\t\t\t>>";
	        cin>>UPkey;
	        if (UPkey==1){
	            security1();
	            if (sum1==0){
	                cout<<"\t\t\t\t\t\t\t\tThis is an empty notlet. Press any key to continue.";
                    cout<<"\n\t\t\t\t\t\t\t>>";
				    cin>>buffer;
                    main();
	            } else {
	            UPone();
	            }
	        } else if (UPkey==2){
	            RNone();
	        } else if (UPkey==3){
	            DELone();
	        } else {
	            main();
	        }
	        
		    break;
		    case 2:
		    OPtwo();
		    cout<<"\t\t\t\t\t\t\t>>";
		    cin>>UPkey;
	        if (UPkey==1){
	            security2();
	            if (sum2==0){
	                cout<<"\t\t\t\t\t\t\t\tThis is an empty notlet. Press any key to continue.";
                    cout<<"\n\t\t\t\t\t\t\t>>";
				    cin>>buffer;
                    main();
	            } else {
	            UPtwo();
	            }
	        } else if (UPkey==2){
	            RNtwo();
	        } else if (UPkey==3){
	            DELtwo();
	        } else {
	            main();
	        }

		    break;
		    case 3:
		    OPthree();
		    cout<<"\t\t\t\t\t\t\t>>";
	        cin>>UPkey;
	        if (UPkey==1){
	            security3();
	            if (sum3==0){
	                cout<<"\t\t\t\t\t\t\t\tThis is an empty notlet. Press any key to continue.";
                    cout<<"\n\t\t\t\t\t\t\t>>";
				    cin>>buffer;
                    main();
	            } else {
	            UPthree();
	            }
	        } else if (UPkey==2){
	            RNthree();
	        } else if (UPkey==3){
	            DELthree();
	        } else {
	            main();
	        }
	        
		    break;
		    case 4:
		    OPfour();
		    cout<<"\t\t\t\t\t\t\t>>";
	        cin>>UPkey;
	        if (UPkey==1){
	            security4();
	            if (sum4==0){
	                cout<<"\t\t\t\t\t\t\t\tThis is an empty notlet. Press any key to continue.";
                    cout<<"\n\t\t\t\t\t\t\t>>";
				    cin>>buffer;
                    main();
	            } else {
	            UPfour();
	            }
	        } else if (UPkey==2){
	            RNfour();
	        } else if (UPkey==3){
	            DELfour();
	        } else {
	            main();
	        }
		    break;
		}
            }
		
		    
	}
	else if (key==3) {
	    //info
		info();
		cout<<"\n\t\t\tPress any key to continue.";
		cout<<"\n\t\t\t\t\t\t\t>>";
        cin>>buffer;
        	cout << "\x1B[2J\x1B[H";
                    main();

		

	}
	else {
		runtime = false;
		cout<<"\n\t\t\t\t\t\t\tEnding Program...";
	}
	}
	

return 0;
}


//Functions
///////////
void file()
{
	cout << "\x1B[2J\x1B[H";
	cout<<"\t\t\t\t\t\t\t\tFile:\t"<<filename;
}
//////////
void menu()
{
	cout<<endl;
	cout<<"\t\t\t\t\t\t\t\tNotlet.C++"<<endl;
	cout<<"\t\t\t\t\t\t\t\t   ***"<<endl;
	cout<<endl;
	cout<<"\t\t\t\t\t\tWelcome to Notlets. Your friendly C++ notepad.\n\t\t\t\t\t\t\t What is your next action?";
	cout<< "\n\n\t\t\t\t\t[1] New file\t\t\t\t[3] Info\n\t\t\t\t\t[2] Open file\t\t\t\t[0] End Program"<<endl;
	cout<<"\t\t\t\t\t\t\t>>";
	cin>>key;

	cout << "\x1B[2J\x1B[H";
}
//////////
void open()
{
	cout<<"\n\n\t\t\t\t\t\t\t\tInventory";
	cout<< "\n\n\t\t\t\t\t\t[1] "<<filename1<<"\t\t\t\t[2] "<<filename2<<"\n\t\t\t\t\t\t[3] "<<filename3<<"\t\t\t\t[4] "<<filename4<<endl;
	cout<<"\t\t\t\t\t\t\t[0] Back to Menu";
}
//////////
void info()
{
	cout<<endl;
	cout<<"\t\t\t\t\t\t\t\tNotlet.C++"<<endl;
	cout<<"\t\t\t\t\t\t\t\t   ***"<<endl;
	cout<<"\n\n\t\t\t\t\tThis is an academic project done by Daedan Ryu Alcantara \n\t\t\t\t of Batangas State University, Bachelor of Science in Computer Science.\n\n";
	cout<<"\t\t\t\tNotlet is submitted in partial completion of academic responsibilities for \n\t\t\t\t\tCS111 - Computer Programming to Mr. Jayson Abratique.";
}
//////////
void one()
{
    
	cout << "\x1B[2J\x1B[H";
	cout<<"\t\t\t\t\t\t\t\tFile 1:\t"<<filename1<<endl;
	cout << "\t\t\tPlease enter notlet: (100 char.). To end, press [.] and [Enter]."<<endl;
	cout<<"\t\t\t>>  ";
    do{
        c = getchar();
        notlet1[i] = c;
        i++;
    } while(c !='.');
    
    cout<<"\t\t\t\t\t____________________________________________________________"<<endl;
    cout<< "\n\n\t\t\t\t\t\t[1] "<<filename1<<"\t\t\t\t[2] "<<filename2<<"\n\t\t\t\t\t\t[3] "<<filename3<<"\t\t\t\t[4] "<<filename4<<endl;
    cout<<"\t\t\t\t\t\tPress [0] to return.";
    cout<<"\n\t\t\t\t\t\t\t>>";
		cin>>key;
		if (key == 0){
		    main();
		} 
}
//////////
void two()
{
    
	cout << "\x1B[2J\x1B[H";
	cout<<"\t\t\t\t\t\t\t\tFile 2:\t"<<filename2<<endl;
	cout << "\t\t\tPlease enter notlet: (100 char.). To end, press [.] and [Enter]."<<endl;
	cout<<"\t\t\t>>  ";
    do{
        c = getchar();
        notlet2[i] = c;
        i++;
    } while(c !='.');
    
    cout<<"\t\t\t\t\t____________________________________________________________"<<endl;
    cout<< "\n\n\t\t\t\t\t\t[1] "<<filename1<<"\t\t\t\t[2] "<<filename2<<"\n\t\t\t\t\t\t[3] "<<filename3<<"\t\t\t\t[4] "<<filename4<<endl;
    cout<<"\t\t\t\t\t\tPress [0] to return.";
    cout<<"\n\t\t\t\t\t\t\t>>";
		cin>>key;
		if (key == 0){
		    main();
		} 
}
//////////
void three()
{
    
	cout << "\x1B[2J\x1B[H";
	cout<<"\t\t\t\t\t\t\t\tFile 3:\t"<<filename3<<endl;
	cout << "\t\t\tPlease enter notlet: (100 char.). To end, press [.] and [Enter]."<<endl;
	cout<<"\t\t\t>>  ";
    do{
        c = getchar();
        notlet3[i] = c;
        i++;
    } while(c !='.');
    
    cout<<"\t\t\t\t\t____________________________________________________________"<<endl;
    cout<< "\n\n\t\t\t\t\t\t[1] "<<filename1<<"\t\t\t\t[2] "<<filename2<<"\n\t\t\t\t\t\t[3] "<<filename3<<"\t\t\t\t[4] "<<filename4<<endl;
    cout<<"\t\t\t\t\t\tPress [0] to return.";
    cout<<"\n\t\t\t\t\t\t\t>>";
		cin>>key;
		if (key == 0){
		    main();
		} 
}
//////////
void four()
{
    
	cout << "\x1B[2J\x1B[H";
	cout<<"\t\t\t\t\t\t\t\tFile 4:\t"<<filename4<<endl;
	cout << "\t\t\tPlease enter notlet: (100 char.). To end, press [.] and [Enter]."<<endl;
	cout<<"\t\t\t>>  ";
    do{
        c = getchar();
        notlet4[i] = c;
        i++;
    } while(c !='.');
    
    cout<<"\t\t\t\t\t____________________________________________________________"<<endl;
    cout<< "\n\n\t\t\t\t\t\t[1] "<<filename1<<"\t\t\t\t[2] "<<filename2<<"\n\t\t\t\t\t\t[3] "<<filename3<<"\t\t\t\t[4] "<<filename4<<endl;
    cout<<"\t\t\t\t\t\tPress [0] to return.";
    cout<<"\n\t\t\t\t\t\t\t>>";
		cin>>key;
		if (key == 0){
		    main();
		} 
}
void OPone(){
    cout << "\x1B[2J\x1B[H";
    cout<<"\n\n\t\t\t\t\tFile 1:\t"<<filename1<<endl;
    cout<<"\n\t\t\t\t";

    for (x=0; x<100; x++){
        cout<<notlet1[x];
    }

	cout<<"\n\n\t\t\t\t\t[1] Update file\t\t\t\t[3] Delete file \n\t\t\t\t\t[2] Rename file\t\t\t\t[0] Back to Menu"<<endl;
}
void OPtwo(){
    cout << "\x1B[2J\x1B[H";
    cout<<"\n\n\t\t\t\t\tFile 2:\t"<<filename2<<endl;
    cout<<"\n\t\t\t\t";
    for (x=0; x<100; x++){
        cout<<notlet2[x];
    }
	cout<<"\n\n\t\t\t\t\t[1] Update file\t\t\t\t[3] Delete file \n\t\t\t\t\t[2] Rename file\t\t\t\t[0] Back to Menu"<<endl;

}
void OPthree(){
    cout << "\x1B[2J\x1B[H";
    cout<<"\n\n\t\t\t\t\tFile 3:\t"<<filename3<<endl;
    cout<<"\n\t\t\t\t";
    for (x=0; x<100; x++){
        cout<<notlet3[x];
    }
	cout<<"\n\n\t\t\t\t\t[1] Update file\t\t\t\t[3] Delete file \n\t\t\t\t\t[2] Rename file\t\t\t\t[0] Back to Menu"<<endl;

}
void OPfour(){
    cout << "\x1B[2J\x1B[H";
    cout<<"\n\n\t\t\t\t\tFile 4:\t"<<filename4<<endl;
    cout<<"\n\t\t\t\t";
    for (x=0; x<100; x++){
        cout<<notlet4[x];
    }
	cout<<"\n\n\t\t\t\t\t[1] Update file\t\t\t\t[3] Delete file \n\t\t\t\t\t[2] Rename file\t\t\t\t[0] Back to Menu"<<endl;

}
//////
void UPone(){
    cout << "\x1B[2J\x1B[H";
    cout<<"\n\n\t\t\t\t\tFile 1:\t"<<filename1<<endl;
    cout<<"\n\t\t\t\t Current notlet:"<<"\t\t\t\t"<<endl;
    cout<<"\t\t\t\t"<<notlet1;
    cout << "\t\t\tUpdate notlet: (100 char.). To end, press [.] and [Enter]."<<endl;
    cout<<"\t\t\t\t";
    i=0;
    do{
        d = getchar();
        temp[i] = d;
        i++;
    } while(d !='.');
    
    for (x=0; x<100; x++){
        notlet1[x] = temp[x];
        }

        cout<<"\t\t\t\t\t____________________________________________________________"<<endl;
    cout<< "\n\n\t\t\t\t\t\t[1] "<<filename1<<"(updated) \t\t\t\t[2] "<<filename2<<"\n\t\t\t\t\t\t[3] "<<filename3<<"\t\t\t\t[4] "<<filename4<<endl;
    cout<<"\t\t\t\t\t\tPress [0] to return.";
    cout<<"\n\t\t\t\t\t\t\t>>";
		cin>>key;
		if (key == 0){
		    main();
		} 
    
}
void UPtwo(){
        cout << "\x1B[2J\x1B[H";
    cout<<"\n\n\t\t\t\t\tFile 2:\t"<<filename2<<endl;
    cout<<"\n\t\t\t\t Current notlet:"<<"\t\t\t\t"<<endl;
    cout<<"\t\t\t\t"<<notlet2;
    cout << "\t\t\tUpdate notlet: (100 char.). To end, press [.] and [Enter]."<<endl;
    cout<<"\t\t\t\t";
    i=0;
    do{
        d = getchar();
        temp[i] = d;
        i++;
    } while(d !='.');
    
    for (x=0; x<100; x++){
        notlet2[x] = temp[x];
        }

        cout<<"\t\t\t\t\t____________________________________________________________"<<endl;
    cout<< "\n\n\t\t\t\t\t\t[1] "<<filename1<<" \t\t\t\t[2] "<<filename2<<"(updated)\n\t\t\t\t\t\t[3] "<<filename3<<"\t\t\t\t[4] "<<filename4<<endl;
    cout<<"\t\t\t\t\t\tPress [0] to return.";
    cout<<"\n\t\t\t\t\t\t\t>>";
		cin>>key;
		if (key == 0){
		    main();
		} 
}
void UPthree(){
        cout << "\x1B[2J\x1B[H";
    cout<<"\n\n\t\t\t\t\tFile 3:\t"<<filename3<<endl;
    cout<<"\n\t\t\t\t Current notlet:"<<"\t\t\t\t"<<endl;
    cout<<"\t\t\t\t"<<notlet3;
    cout << "\t\t\tUpdate notlet: (100 char.). To end, press [.] and [Enter]."<<endl;
    cout<<"\t\t\t\t";
    i=0;
    do{
        d = getchar();
        temp[i] = d;
        i++;
    } while(d !='.');
    
    for (x=0; x<100; x++){
        notlet3[x] = temp[x];
        }

        cout<<"\t\t\t\t\t____________________________________________________________"<<endl;
    cout<< "\n\n\t\t\t\t\t\t[1] "<<filename1<<" \t\t\t\t[2] "<<filename2<<"\n\t\t\t\t\t\t[3] "<<filename3<<"(updated)\t\t\t\t[4] "<<filename4<<endl;
    cout<<"\t\t\t\t\t\tPress [0] to return.";
    cout<<"\n\t\t\t\t\t\t\t>>";
		cin>>key;
		if (key == 0){
		    main();
		} 
}
void UPfour(){
    cout << "\x1B[2J\x1B[H";
    cout<<"\n\n\t\t\t\t\tFile 4:\t"<<filename4<<endl;
    cout<<"\n\t\t\t\t Current notlet:"<<"\t\t\t\t"<<endl;
    cout<<"\t\t\t\t"<<notlet4;
    cout << "\t\t\tUpdate notlet: (100 char.). To end, press [.] and [Enter]."<<endl;
    cout<<"\t\t\t\t";
    i=0;
    do{
        d = getchar();
        temp[i] = d;
        i++;
    } while(d !='.');
    
    for (x=0; x<100; x++){
        notlet4[x] = temp[x];
        }

        cout<<"\t\t\t\t\t____________________________________________________________"<<endl;
    cout<< "\n\n\t\t\t\t\t\t[1] "<<filename1<<" \t\t\t\t[2] "<<filename2<<"\n\t\t\t\t\t\t[3] "<<filename3<<"\t\t\t\t[4] "<<filename4<<"(updated)"<<endl;
    cout<<"\t\t\t\t\t\tPress [0] to return.";
    cout<<"\n\t\t\t\t\t\t\t>>";
		cin>>key;
		if (key == 0){
		    main();
		} 
}

void RNone(){
    cout << "\x1B[2J\x1B[H";
    cout<<"\n\n\t\t\t\t\tRename File 1:\t";
    cin>>tempname;
    
    filename1 = tempname;
            cout<<"\t\t\t\t\t____________________________________________________________"<<endl;
    cout<< "\n\n\t\t\t\t\t\t[1] "<<filename1<<"(updated) \t\t\t\t[2] "<<filename2<<"\n\t\t\t\t\t\t[3] "<<filename3<<"\t\t\t\t[4] "<<filename4<<endl;
    cout<<"\t\t\t\t\t\tPress [0] to return.";
    cout<<"\n\t\t\t\t\t\t\t>>";
		cin>>key;
		if (key == 0){
		    main();
		} 
    
}
void RNtwo(){
            cout << "\x1B[2J\x1B[H";
    cout<<"\n\n\t\t\t\t\tRename File 2:\t";
    cin>>tempname;
    
    filename2 = tempname;
    
            cout<<"\t\t\t\t\t____________________________________________________________"<<endl;
    cout<< "\n\n\t\t\t\t\t\t[1] "<<filename1<<" \t\t\t\t[2] "<<filename2<<"(updated)\n\t\t\t\t\t\t[3] "<<filename3<<"\t\t\t\t[4] "<<filename4<<endl;
    cout<<"\t\t\t\t\t\tPress [0] to return.";
    cout<<"\n\t\t\t\t\t\t\t>>";
		cin>>key;
		if (key == 0){
		    main();
		} 
}
void RNthree(){
            cout << "\x1B[2J\x1B[H";
    cout<<"\n\n\t\t\t\t\tRename File 3:\t";
    cin>>tempname;
    
    filename3 = tempname;
    
        cout<<"\t\t\t\t\t____________________________________________________________"<<endl;
    cout<< "\n\n\t\t\t\t\t\t[1] "<<filename1<<" \t\t\t\t[2] "<<filename2<<"\n\t\t\t\t\t\t[3] "<<filename3<<"(updated)\t\t\t\t[4] "<<filename4<<endl;
    cout<<"\t\t\t\t\t\tPress [0] to return.";
    cout<<"\n\t\t\t\t\t\t\t>>";
		cin>>key;
		if (key == 0){
		    main();
		} 
}
void RNfour(){
        cout << "\x1B[2J\x1B[H";
    cout<<"\n\n\t\t\t\t\tRename File 4:\t";
    cin>>tempname;
    
    filename4 = tempname;
    
            cout<<"\t\t\t\t\t____________________________________________________________"<<endl;
    cout<< "\n\n\t\t\t\t\t\t[1] "<<filename1<<" \t\t\t\t[2] "<<filename2<<"\n\t\t\t\t\t\t[3] "<<filename3<<"\t\t\t\t[4] "<<filename4<<"(updated)"<<endl;
    cout<<"\t\t\t\t\t\tPress [0] to return.";
    cout<<"\n\t\t\t\t\t\t\t>>";
		cin>>key;
		if (key == 0){
		    main();
		} 
}

/////////////////////

void DELone(){
    cout << "\x1B[2J\x1B[H";
    cout<<"\t\t\t\t\t\t\t\tConfirm deletion?\t"<<endl;
	cout<<"\t\t\t\t\t\t\t\tAre you sure to delete \""<<filename1<<"\"? Deletion will permanently clear the notlet and cannot be undone."<<endl;
	cout<<"\t\t\t\t\t\t\t\t[1] Yes \t [0] No"<<endl;
	cout<<"\n\t\t\t\t\t\t\t>>";
	cin>>DELkey;
	if (DELkey == 1){
	    for (x=0; x<100; x++){
        notlet1[x] = ' ';
        }
	} else {
	    OPone();
	}
	
	filename1 = "***";
            cout<<"\t\t\t\t\t____________________________________________________________"<<endl;
    cout<< "\n\n\t\t\t\t\t\t[1] "<<filename1<<" \t\t\t\t[2] "<<filename2<<"\n\t\t\t\t\t\t[3] "<<filename3<<"\t\t\t\t[4] "<<filename4<<endl;
    cout<<"\t\t\t\t\t\tPress [0] to return.";
    cout<<"\n\t\t\t\t\t\t\t>>";
		cin>>key;
		if (key == 0){
		    main();
		} 
}
void DELtwo(){
            cout << "\x1B[2J\x1B[H";
    cout<<"\t\t\t\t\t\t\t\tConfirm deletion?\t"<<endl;
	cout<<"\t\t\t\t\t\t\t\tAre you sure to delete \""<<filename2<<"\"? Deletion will permanently clear the notlet and cannot be undone."<<endl;
	cout<<"\t\t\t\t\t\t\t\t[1] Yes \t [0] No"<<endl;
	cout<<"\n\t\t\t\t\t\t\t>>";
	cin>>DELkey;
		if (DELkey == 1){
	    for (x=0; x<100; x++){
        notlet2[x] = ' ';
        }
	} else {
	    OPtwo();
	}
	
	filename2 = "***";
            cout<<"\t\t\t\t\t____________________________________________________________"<<endl;
    cout<< "\n\n\t\t\t\t\t\t[1] "<<filename1<<" \t\t\t\t[2] "<<filename2<<"\n\t\t\t\t\t\t[3] "<<filename3<<"\t\t\t\t[4] "<<filename4<<endl;
    cout<<"\t\t\t\t\t\tPress [0] to return.";
    cout<<"\n\t\t\t\t\t\t\t>>";
		cin>>key;
		if (key == 0){
		    main();
		} 
}
void DELthree(){
            cout << "\x1B[2J\x1B[H";
    cout<<"\t\t\t\t\t\t\t\tConfirm deletion?\t"<<endl;
	cout<<"\t\t\t\t\t\t\t\tAre you sure to delete \""<<filename3<<"\"? Deletion will permanently clear the notlet and cannot be undone."<<endl;
	cout<<"\t\t\t\t\t\t\t\t[1] Yes \t [0] No"<<endl;
	cout<<"\n\t\t\t\t\t\t\t>>";
	cin>>DELkey;
			if (DELkey == 1){
	    for (x=0; x<100; x++){
        notlet3[x] = ' ';
        }
	} else {
	    OPthree();
	}
	
	filename3 = "***";
            cout<<"\t\t\t\t\t____________________________________________________________"<<endl;
    cout<< "\n\n\t\t\t\t\t\t[1] "<<filename1<<" \t\t\t\t[2] "<<filename2<<"\n\t\t\t\t\t\t[3] "<<filename3<<"\t\t\t\t[4] "<<filename4<<endl;
    cout<<"\t\t\t\t\t\tPress [0] to return.";
    cout<<"\n\t\t\t\t\t\t\t>>";
		cin>>key;
		if (key == 0){
		    main();
		} 
}
void DELfour(){
            cout << "\x1B[2J\x1B[H";
    cout<<"\t\t\t\t\t\t\t\tConfirm deletion?\t"<<endl;
	cout<<"\t\t\t\t\t\t\t\tAre you sure to delete \""<<filename4<<"\"? Deletion will permanently clear the notlet and cannot be undone."<<endl;
	cout<<"\t\t\t\t\t\t\t\t[1] Yes \t [0] No"<<endl;
	cout<<"\n\t\t\t\t\t\t\t>>";
	cin>>DELkey;
			if (DELkey == 1){
	    for (x=0; x<100; x++){
        notlet4[x] = ' ';
        }
	} else {
	    OPfour();
	}
	
	filename4 = "***";
            cout<<"\t\t\t\t\t____________________________________________________________"<<endl;
    cout<< "\n\n\t\t\t\t\t\t[1] "<<filename1<<" \t\t\t\t[2] "<<filename2<<"\n\t\t\t\t\t\t[3] "<<filename3<<"\t\t\t\t[4] "<<filename4<<endl;
    cout<<"\t\t\t\t\t\tPress [0] to return.";
    cout<<"\n\t\t\t\t\t\t\t>>";
		cin>>key;
		if (key == 0){
		    main();
		} 
}

void security1(){
            
			    for (int x=0; x<100; x++){
                    trans1[x] = notlet1[x];
                    sum1 += trans1[x];
		        }
}
void security2(){
            
			    for (int x=0; x<100; x++){
                    trans2[x] = notlet2[x];
                    sum2 += trans2[x];
		        }
}
void security3(){
            
			    for (int x=0; x<100; x++){
                    trans3[x] = notlet3[x];
                    sum3 += trans3[x];
		        }
}
void security4(){
            
			    for (int x=0; x<100; x++){
                    trans4[x] = notlet4[x];
                    sum4 += trans4[x];
		        }
}