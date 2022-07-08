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
        cout<<"4. Sort Record "<<endl;
        cout<<"5. Exit "<<endl;
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
              sort(s);
              print(s);
              break;


          case 5:
            exit(0);
        }

    }while(ch!=5);
    return 0;


}
