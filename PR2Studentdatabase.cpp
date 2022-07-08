#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
class Student
{
private:
    string name,DoB,blood_grp,addr,year_class,mob;
    int *rollno;//declaration of pointer for allocating dynamic memory
    int div;
public:

    //Default Constructor
    Student()
    {
        rollno = new int;//reserve single location for rollno
        *rollno,div=-1;
        this -> name,DoB,blood_grp,addr,year_class,mob="";
    }

    ~Student()
    {
        delete rollno;//deallocation of rollno
    }
    //function to add information in student database
    void add_data()
    {
      cout<<"\n***********STUDENT DATABASE***************";

      cout<<"\nEnter name: ";
      cin.ignore();
      getline(cin,name);
      cout<<"Enter Roll No.: ";
      cin>>*rollno;
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
        cout<<"\nRoll No           :"<<*rollno;
        cout<<"\nYear(FE/SE/TE)    :"<<year_class;
        cout<<"\nDiv(1/2/3/4/5)    :"<<div;
        cout<<"\nDoB               :"<<DoB;
        cout<<"\nBlood group       :"<<blood_grp;
        cout<<"\nMobile no         :"<<mob;
        cout<<"\nAddress           :"<<addr;
    }

    //static member function
    static void header()
    {
        cout<<"\n ************student information system****************";
    }
};

class Faculty
{
   private:
       int id;
       //default constructor
    public:
       Faculty()
       {
           id=000;
       }
       //copy constructor
       Faculty(const Faculty &f1)
       {
           id=f1.id;
       }
};

int main()
{
    Student st[5];
    Faculty f;
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
                 Student::header();//static call
                 st[j].display();
              }
              break;


          case 3 :
            exit(0);
        }

    }while(ch!=3);
    return 0;
}

