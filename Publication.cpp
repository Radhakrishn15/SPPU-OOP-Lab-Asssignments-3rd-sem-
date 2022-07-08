#include <iostream>
#include<stdlib.h>
using namespace std;
class publication
{
private:
    string title;
    float price;
public:
    void add()
    {
        cout<<"\n Enter Publication Information:";
        cout << "\nEnter Title of Publication:";
        cin.ignore();
        getline (cin, title);
        cout << "Enter Price of Publication:";
        cin >> price;
    }
    void display ( )
    {
        cout << "\n---------------------------------";
        cout << "\nTitle of Publication     :"<< title;
        cout << "\nPublication Price        :"<< price;
    }
};

class book : public publication
{
private:
        int page_count;
public:
        void add_book()
        {
            try
            {
                add();
                cout << "Enter Page count of Book (no)   :";
                cin >> page_count;
                if (page_count <= 0)
                throw page_count;

            } catch (...)//all type of exceptions catch
                {
                    cout << "Invalid page count....";
                    page_count = 0;
                }

            }

void display_book()
    {
        display ();
        cout << "\nPage count               :" << page_count;
        cout << "\n--------------------------------";
    }
};

class tape : public publication
{
private:
    float play_time;
public:
    void add_tape()
    {
        try
        {
            add();
            cout << "Enter Play Duration of Tape(min) : ";
            cin >> play_time;
            if (play_time <= 0)
            throw play_time;
        }
        catch (...)
        {
            cout << "Invalid play time.....";
            play_time =0;
        }
    }

    void display_tape()
    {
        display();
        cout << "\nPlay Time               :" << play_time << "min";
        cout << "\n--------------------------------------";
    }
};

int main()
{
    book b1[10];
    tape t1[10];
    int ch=0,b_count=0, t_count=0;
        do
        {
            cout<<"\n*** Publication Information System * * *";
            cout<<"\n** Menu ***";
            cout<<"\n 1. Add Information to Books";
            cout<<"\n 2. Add Information to Tapes ";
            cout<<"\n 3. Display Information of Books";
            cout<<"\n 4. Display Information of Tapes";
            cout<<"\n 5. Exit ";
            cout<<"\n Enter Choice : ";
            cin>>ch;

            switch (ch)
            {
            case 1:// Add the info
                b1[b_count].add_book();
                b_count++;
                break;

            case 2:// Display Info
                t1[t_count].add_tape();
                t_count++;
                break;

            case 3:
                cout<<"\n** * Publication Information System ( BOOKS) * * *";
                for (int j=0; j<b_count; j++)
                {
                    b1[j].display_book();
                }
                break;

            case 4:
                cout<<"\n** * Publication Information System ( TAPES) * * *";
                for ( int j=0; j<t_count; j++)
                {
                     t1[j].display_tape();
                }
                break;

            case 5:
                exit(0);

            }
        }while ( ch != 5);

        return 0;
    }



