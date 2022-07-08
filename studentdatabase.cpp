#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
class Student
{
private:
    string name,DoB,blood_grp,addr,year_class,mob;
    int rollno,div;
public:
    //Default Constructor
    Student()
    {
        rollno,div=-1;
        name,DoB,blood_grp,addr,year_class,mob="";
    }
    //function to add information in student database
    void add_data()
    {
      cout<<"\n***********STUDENT DATABASE***************";

      cout<<"\nEnter name: ";
      cin.ignore();
      getline(cin,name);
      cout<<"Enter Roll No.: ";
      cin>>rollno;
      cout<<"Enter Year(FE/SE/TE): ";
      cin>>year_class;
      cout<<"Enter Division(1/2/3/4/5): ";
      cin>>div;
      cout<<"Enter Date of Birth: ";
      cin>>DoB;
      cout<<"Enter Blood group: ";
      cin>>blood_grp;
      cout<<"Enter Mobile No.: ";
      cin>>mob;
      cout<<"Enter Address: ";
      cin>>addr;
    }
    //function to display student info
    void display()
    {

        cout<<"\n----------------Student Information-------------------";
        cout<<"\nName              :"<<name;
        cout<<"\nRoll No           :"<<rollno;
        cout<<"\nYear(FE/SE/TE)    :"<<year_class;
        cout<<"\nDiv(1/2/3/4/5)    :"<<div;
        cout<<"\nDoB               :"<<DoB;
        cout<<"\nBlood group       :"<<blood_grp;
        cout<<"\nMobile no         :"<<mob;
        cout<<"\nAddress           :"<<addr;
    }
};

int main()
{
    Student st[5];
    int ch=0,count=0;
    do
    {
        cout<<"\n* * * * * * * * * * * * * * * * * * * * * * * *";
        cout<<"\n      MENU      "<<endl;
        cout<<"1. Add Information "<<endl;
        cout<<"2. Display Information "<<endl;
        cout<<"3. Exit "<<endl;
        cout<<"Enter Choice: ";
        cin>>ch;

        switch(ch)
        {
          case 1:
              st[count].add_data();
              count ++;
              break;

          case 2:
              for(int j=0;j<count;j++)
              {
                 st[j].display();
              }
              break;
          case 3:
            exit(0);
        }

    }while(ch!=3);
    return 0;
}
