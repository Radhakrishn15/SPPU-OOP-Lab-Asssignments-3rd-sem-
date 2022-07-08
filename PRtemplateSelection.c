#include<iostream>
#include<stdlib.h>
using namespace std;

template<typename T>
void sort(T a[],int n)
{
    T temp;
    int min,i;
    for(i=0; i<n-1; i++)
    {
         min = i;
         for(int j=i+1; j<n; j++)
          {
               if(a[min] > a[j])
               {
                   min = j;
               }
          }
          if(min != i)
          {
              temp = a[i];
              a[i] = a[min];
              a[min] = temp;
          }
    }

     cout<<"\n Sorted elements are:\n";
     for(i=0; i<n; i++)
    {
        cout<<a[i]<<"\n";
    }
}


int main()
{

    int n,i,ch;
    int a[10];
    float b[10];
    do
    {
        cout<<"\n* * * * * * * * * * * * * * * * * * * * * * * *";
        cout<<"\n     SELECTION SORT USING FUNCTION TEMPLATE     ";
        cout<<"\n* * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
        cout<<"1. Sort Integer Numbers "<<endl;
        cout<<"2. Sort Float Numbers "<<endl;
        cout<<"3. Exit "<<endl;
        cout<<"Enter your Choice: ";
        cin>>ch;

        switch(ch)
        {
          case 1:
              cout<<"\nSorting Integer Numbers "<<endl;
              cout<<"Enter how many numbers you wanted to sort: "<<endl;
              cin>>n;
              for(i=0; i<n; i++)
              {
                  cin>>a[i];
              }
              sort<int>(a,n);
              break;

          case 2:
              cout<<"Sorting Float Numbers "<<endl;
              cout<<"Enter how many numbers you wanted to sort: "<<endl;
              cin>>n;
              for(i=0; i<n; i++)
              {
                  cin>>b[i];
              }
              sort<float>(b,n);
              break;


          case 3 :
            exit(0);
        }

    }while(ch!=3);
    return 0;


}



