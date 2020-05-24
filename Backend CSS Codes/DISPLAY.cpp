#include<iostream>
#include<fstream>
using namespace std;
int display(){
        fstream of;
        of.open("C:\\Users\\pc\\Documents\\username.txt",ios::in|ios::app);
while(!of.eof())
{
string str;
getline(of,str);
cout<<str<<"\n";    

}
return 0;
}
