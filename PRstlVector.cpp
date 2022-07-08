#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stdlib.h>
using namespace std;
class student
{
public:
    int rollno;
    string name;
    char mob[20];

    bool operator==(const student &s1)
    {
        if(rollno==s1.rollno)
            return 1;
        return 0;

    }
};
void insert()
{
    student k;
    cout<<"\nEnter Roll No: ";
    cin>>k.rollno;
    cout<<"\nEnter Name: ";
    cin>>k.name;
    cout<<"\nEnter Mob: ";
    cin>>k.mob;
}

vector<student> read()
{
    int n;
    student k;
    vector<student> j;
    cout<<"\nEnter total no of students: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>k;
        j.push_back(k);
    }
    return j;
}

void print(const vector<student> &j)
{
    cout<<"\n\t\tRoll No\t\tName\t\tMobile no";
    for_each(j.begin(),j.end(),printfunction);
}

void search(vector<student> &j)
{
    student k;
    cout<<"Enter Roll no to be search: ";
    cin>>k.rollno;
    cout<<"\n\t\tRoll No\t\tName\t\tMobile no";
    vector<student>::iterator p;
    p=find(j.begin(),j.end(),k);
    if(p!=j.end())
        cout<<*p;
    else
        cout<<"\n Not found";
}


int main()
{
    vector<student> s;
    int ch;
    do
    {
        cout<<"\n* * * * * * * * * * * * * * * * * * * * * * * *";
        cout<<"\n     Personal Record Database    ";
        cout<<"\n* * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
        cout<<"1. Create Record"<<endl;
        cout<<"2. Display Record "<<endl;
        cout<<"3. Search Record"<<endl;
        cout<<"4. Exit "<<endl;
        cout<<"Enter your Choice: ";
        cin>>ch;

        switch(ch)
        {
          case 1:
              s=read();
              break;

          case 2:
              print(s);
              break;

          case 3:
              search(s);
              break;


          case 4:
            exit(0);
        }

    }while(ch!=4);
    return 0;


}

