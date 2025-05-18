# Project Notlets
Project Notlets is a **notepad-inspired program** in C++ that exhibits basic
functions of CRUD through rudimentary functions learned in
CS 101.

Notlet is a **temporary storage program** that can store a
limited number of characters within arrays. Users can read,
save, and delete files according to needs with just a few steps.

Notlet is advertised as a lite version of Notepad available in
C++ consoles.

## Navigation Flow
![Navigation Flow](<notepad lite.png>)

## Features 
Notlets currently utilize 28 operating functions and the driver code. Six of those operating functions are essential to the navigation of procedures in Notlets. These are the following essential operations:

**1. Creating Notlets**
```css
void one()
{

cout << "\x1B[2J\x1B[H";
cout<<"\t\t\t\t\t\t\t\tFile 1:\t"<<filename1<<endl;
cout << "\t\t\tPlease enter notlet: (100 char.). To end, press
[.] and [Enter]."<<endl;
cout<<"\t\t\t>> ";
do{

c = getchar();
notlet1[i] = c;
i++;

} while(c !='.');

cout<<"\t\t\t\t\t________________________________________________
____________"<<endl;

cout<< "\n\n\t\t\t\t\t\t[1] "<<filename1<<"\t\t\t\t[2] "
<<filename2<<"\n\t\t\t\t\t\t[3] "<<filename3<<"\t\t\t\t[4] "
<<filename4<<endl;

cout<<"\t\t\t\t\t\tPress [0] to return.";
cout<<"\n\t\t\t\t\t\t\t>>";
cin>>key;
if (key == 0){
main();
}
}
```

**2. Reading Notlets**
```css
void OPone(){
    cout << "\x1B[2J\x1B[H";
    cout<<"\n\n\t\t\t\t\tFile 1:\t"<<filename1<<endl;
    cout<<"\n\t\t\t\t";

    for (x=0; x<100; x++){
        cout<<notlet1[x];
    }

 cout<<"\n\n\t\t\t\t\t[1] Update file\t\t\t\t[3] Delete file \n\t\t\t\t\t[2] Rename file\t\t\t\t[0] Back to Menu"<<endl;
}
```

**3. Updating Notlets**
```css
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
```

**4. Deleting Notlets**
``` css
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
```

**5. Renaming Notlet**
```css
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
```

**6. Security**
```css
void security1(){
            
       for (int x=0; x<100; x++){
                    trans1[x] = notlet1[x];
                    sum1 += trans1[x];
          }
}
```
# Acknowledgement
This program is a pratial fulfillment of academic requirements in CS 111. We want to acknowledge Mr. Jayson Abratique for his guidance and aid throughout the development and production of this program.