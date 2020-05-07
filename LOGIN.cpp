#include<iostream>
#include<fstream>
using namespace std;
    int login()
{     int n{};
      fstream in,of;
    string username; 
    string gmail;
 
    cout<<"-----------+---WELCOME TO RANCHO's APP----------------------\n";
    cout<<"1.Login Page\n2.Sign Up Page\n3.See Details of alumni\n4.TO see Frequently Asked questions and Answers\n5.FOR  OPPURTUINTY UPDATES\n";
    cout<<"Enter the Number respectively\n";
    cin>>n;
    if(n==2){
    cout<<"\n\n\n             SIGN UP PAGE\n";
    cout<<"Username -";
    cin>>username;
    in.open("C:\\Users\\pc\\Documents\\login.txt",ios::out|ios::app);
    of.open("C:\\Users\\pc\\Documents\\username.txt",ios::out|ios::app);
    in << username << "\t";
    of<<username<<"\t";
    string password;
    cout << "\nPassword -> ";
    cin >> password;
    in << password <<" \t ";
    cout<<"\n Gmail-> \n";
    cin>>gmail;
    in<<gmail<<"\n";
    of<<gmail<<"\n";    
    }
return n;

}
