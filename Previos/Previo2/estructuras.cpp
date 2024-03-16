#include<iostream>
#include<cstring>
using namespace std;

struct Books{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;

};
int main(){
struct Books Book1; // declare book1
struct Books Book2;
// book 1 specification
strcpy(Book1.title, "Learn C++ Programming");
strcpy(Book1.author, "chand miyan");
strcpy(Book1.subject, "C++ Programming");
Book1.book_id = 6495407;
// book 2 specification
strcpy(Book2.title, "Learn C++ Programming");
strcpy(Book2.author, "chand miyan");
strcpy(Book2.subject, "C++ Programming");
Book2.book_id = 6495700;

// Print book1 info
cout << "Book 1 title: "<< Book1.title;
cout << "Book 1 author: "<< Book1.author;
cout << "Book 1 subject: "<< Book1.subject;
cout << "Book 1 id: "<< Book1.book_id;
// Print book2 info
cout << "Book 2 title: "<< Book2.title;
cout << "Book 2 author: "<< Book2.author;
cout << "Book 2 subject: "<< Book2.subject;
cout << "Book 2 id: "<< Book2.book_id;
return 0;
}