#include <iostream>
#include <vector>
using namespace std;

class Book{
string title;
string author;
string ISBN;
public:
Book(string t,string a,string i){
title=t;
author=a;
ISBN=i;
}
string getTitle(){return title;}
string getAuthor(){return author;}
string getISBN(){return ISBN;}
};

class Library{
vector<Book> books;
public:
void addBook(Book b){
books.push_back(b);
}
void removeBook(string isbn){
for(int i=0;i<books.size();i++){
if(books[i].getISBN()==isbn){
books.erase(books.begin()+i);
break;
}
}
}
void searchBook(string title){
for(int i=0;i<books.size();i++){
if(books[i].getTitle()==title){
cout<<books[i].getTitle()<<" "<<books[i].getAuthor()<<" "<<books[i].getISBN()<<endl;
}
}
}
};

int main(){
Book b1("C++","Bjarne","123");
Library l;
l.addBook(b1);
l.searchBook("C++");
return 0;
}