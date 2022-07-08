#include<iostream>
#include<fstream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class student
{
private:
    string name;
    int rollno;
public:
    void add()
    {
       fstream fs;
	   fs.open("C:\\OOP Programs\\Sakshi.txt",ios::app);

        if (!fs)
        {
            cout << "File not created!!!";
        }
        else
        {
            cout << "File created successfully!";
            cout<<"\nEnter name: ";
            cin>>name;
            cout<<"\nEnter Rollno: ";
            cin>>rollno;
            fs<<name<<" ";
            fs<<rollno<<"\n";
            fs.close();
        }
    }

	void display()
	{
	  fstream fs;
	   fs.open("C:\\OOP Programs\\Sakshi.txt", ios::in );

        if (!fs)
        {
            cout << "No such file !!!";
        }
        else
        {
            while(!fs.eof())
            {
                fs>>name;
                fs>>rollno;
                cout<<name<<" ";
                cout<<rollno<<"\n";
            }
            fs.close();
        }
	}
};
int main()
{
    student s;
    fstream fs;
    int ch;
    do
    {
        cout<<"\n* * * * * * * * * *Student Information System * * * * * * * * * * * * * *";
        cout<<"\n      MENU      "<<endl;
        cout<<"1. Add Information "<<endl;
        cout<<"2. Display Information "<<endl;
        cout<<"3. Exit "<<endl;
        cout<<"Enter Choice: ";
        cin>>ch;

        switch(ch)
        {
          case 1:
              s.add();
              break;

          case 2:
              s.display();
              break;


          case 3 :
            exit(0);
        }

    }while(ch!=3);
    return 0;
}
