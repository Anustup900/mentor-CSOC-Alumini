#include<iostream>
#include<conio.h>
#include"LOGIN.cpp"
#include"DISPLAY.cpp"
#include"FREQUENTLY.cpp"
#include"OPPURTUNITY.cpp"
using namespace std;
int main()
{
    int x{};
 do{ 
 int y=login();
 system("cls");
if(y==3)
{
display();
}
else if(y==4)
{ques();}
else if(y==5)
{opp();}
cout<<"DO you wanna exit app?Press 0 for it or else press 1\n";
cin>>x;
 }while(x==1);
 return 0;
}