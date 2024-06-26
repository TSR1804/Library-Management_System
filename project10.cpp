	/*Write a menu driven program that depicts the working of a library. The menu options
should be:
a) Add book information
b) Display book information
c) List all books of given author
d) List the title of specified book
e) List the count of books in the library
f) List the books in the order of accession number
g) Exit
Create a structure called library to hold accession number, title of the book, author
name, price of the book, and flag indicating whether book is issued or not.
*/

#include <string>
#include <iostream>
using namespace std;
void counts();
void idnoo();
void bookname();
void authorname();
void addbook();
void bookinfo();
struct library
{
    int idno;
    string bookname;
    string authorname;
    int price;
    string flag;

}l[100];
int cont;


int main()
{
    cout <<"library management System"<<endl;
       while(true)
       {
         cout<<"============================================"<<endl;
         cout<<"Press 1 for Add book information:\n";
         cout<<"Press 2 for Display book information:\n";
         cout<<"Press 3 for List all books of given author:\n";
         cout<<"Press 4 for List the count of books in the library:\n";
         cout<<"Press 5 for List the title of specified book:\n";
         cout<<"Press 6 for List the books for books id's:\n";
         cout<<"Press 7 for Exit:\n";
         int a;
         cin>>a;
         switch(a)
         {
         case 1:
            addbook();
             break;
         case 2:
            bookinfo();
             break;
         case 3:
           authorname();
             break;
         case 4:
           counts();
             break;
         case 5:
              bookname();
             break;
         case 6:
             idnoo();
             break;
         case 7:
            exit(0);
             break;
         default:
             cout<<"Invalid Entry.";

         }

       }

    return 0;
}
void addbook()
{

    cout<<"Enter book name"<<endl;
    cin>>l[cont].bookname;
    cout <<"Enter author name"<<endl;
    cin>> l[cont].authorname;
    cout <<"Enter book id.no"<<endl;
    cin>> l[cont].idno;
    cout <<"Enter the price of that particular book"<<endl;
    cin>>l[cont].price;
    cout <<"book issued (yes or no): " <<endl;
    cin>>l[cont].flag;
    cin.ignore();
    cont++;

}
void bookinfo()
{
    cout << "Display book information"<<endl;
    for(int i=0; i<cont; i++)
    {
         cout<<"\nid Number of book is: "<<l[i].idno<<endl;
         cout<<"\nTitle of book is: "<<l[i].bookname<<endl;
         cout<<"\nName of Author is: "<<l[i].authorname<<endl;
         cout<<"\nPrice of book is: "<<l[i].price<<endl;
         cout<<"\nBook Issued (yes or not): "<<l[i].flag<<endl;
    }

}
void authorname()
{
     string a;
     cout <<"Enter authors name"<<endl;
     cin>>a;
     cin.ignore();
     for(int i=0; i<cont; i++)
        {
            if(a==(l[i].authorname))
            {
                 cout<<"\n id Number of book is: "<<l[i].idno<<endl;
         cout<<"\nTitle of book is: "<<l[i].bookname<<endl;
         cout<<"\nName of Author is: "<<l[i].authorname<<endl;
         cout<<"\nPrice of book is: "<<l[i].price<<endl;
         cout<<"\nBook Issued (yes or not): "<<l[i].flag<<endl;
            }
        }
}
void bookname()
{
     string a;
     cout <<"Enter product name"<<endl;
     cin>>a;
     cin.ignore();
     for(int i=0; i<cont; i++)
        {
            if(a==(l[i].bookname))
            {
                 cout<<"\n id Number of book is: "<<l[i].idno<<endl;
         cout<<"\nTitle of book is: "<<l[i].bookname<<endl;
         cout<<"\nName of Author is: "<<l[i].authorname<<endl;
         cout<<"\nPrice of book is: "<<l[i].price<<endl;
         cout<<"\nBook Issued (yes or not): "<<l[i].flag<<endl;
            }
        }
}
void counts()
{
    cout <<"Total no of available Books are: ";
    cout << cont;
}
void idnoo()
{
     int a;
     cout <<"Enter id no. name"<<endl;
     cin>>a;
     cin.ignore();
     for(int i=0; i<cont; i++)
        {
            if(a == (l[i].idno))
            {
         cout<<"\n id Number of book is: "<<l[i].idno<<endl;
         cout<<"\nTitle of book is: "<<l[i].bookname<<endl;
         cout<<"\nName of Author is: "<<l[i].authorname<<endl;
         cout<<"\nPrice of book is: "<<l[i].price<<endl;
         cout<<"\nBook Issued (yes or not): "<<l[i].flag<<endl;
            }
        }
}