#include <iostream>
#include <vector>
#include <string>
#include <sstream>
int main() {
    using namespace std;
int selects;
int bookCode;
string Referrence;
const string correctReferrence="UA202020";
	
 const std::string correctUsername = "jeffery";
    const std::string correctPassword = "mylove";
    int maxAttempts = 3;
    int attempts = 0;
    cout<<"university of energy and natural resources"<<endl;
	cout<<"1.login"<<endl;
	cout<<"2.sign up"<<endl;
        cin>>selects;
if (selects==1){

    while (attempts < maxAttempts) {
        string username, password;

        cout << "Enter username: ";
        cin >> username;

        cout << "Enter password: ";
        cin >> password;

        if (username == correctUsername && password == correctPassword) {
class Book {
public:
    string title;
    string author;
    int id;
};

class Borrower {
public:
    string name;
    int borrowerId;
};

class Transaction {
public:
    Book book;
    Borrower borrower;
    string date;
};

class Library {
private:
   vector<Book> books;
   vector<Borrower> borrowers;
   vector<Transaction> transactions;

public:
    void addBook(const std::string& title, const std::string& author, int id) {
        Book newBook;
        newBook.title = title;
        newBook.author = author;
        newBook.id = id;
        books.push_back(newBook);
    }

    void addBorrower(const std::string& name, int borrowerId) {
        Borrower newBorrower;
        newBorrower.name = name;
        newBorrower.borrowerId = borrowerId;
        borrowers.push_back(newBorrower);
    }

    void checkoutBook(Book book, Borrower borrower, const std::string& date) {
        Transaction transaction;
        transaction.book = book;
        transaction.borrower = borrower;
        transaction.date = date;
        transactions.push_back(transaction);
    }

   

};

  

    while (true) {
        cout << "\nOptions:\n1. Display Books\n";
        int choice;
        cout << "select your choice: ";
        cin >> choice;
        cout<<"BOOKS AVAILABLE "<<endl;
    cout<<"Select your type"<<endl;
	cout<<"1.Acadamic Books"<<endl;
	cout<<"2.mathenmaticsBooks"<<endl;
	cout<<"3.frenchBooks"<<endl;
	cout<<"4.africanStudiesBooks"<<endl;
    cout << "5.exit"<<endl;
        std::cin>>selects;
 if(selects==1){
	cout<<"enter Referrence"<<endl;
	cin>> Referrence;
	attempts++;
	if (Referrence!=correctReferrence){
		cout<<"wrongcode.retry"<<endl;}
	else if (Referrence==correctReferrence){
	cout<<"Enter the bookCode(100-103):"<<endl;
	cin>>bookCode;
	switch (bookCode){
		case 100:
			cout<<"Comp1"<<endl;
			break;
			case 101:
				cout<<"Comp2"<<endl;
				break;
				case 102:
					cout<<"Comp3"<<endl;
					break;
					case 103:
						cout<<"Comp4"<<endl;
						break;
						
	}
	
	
}
}
if(selects==2){
	cout<<"enter Referrence"<<endl;
	cin>> Referrence;
	attempts++;
	if (Referrence!=correctReferrence){
		cout<<"wrongcode.retry"<<endl;}
	else if (Referrence==correctReferrence){
	cout<<"Enter the bookCode(200-203):"<<endl;
	cin>>bookCode;
	switch (bookCode){
		case 200:
			cout<<"General Maths 1"<<endl;
			break;
			case 201:
				cout<<"General Maths 2"<<endl;
				break;
				case 202:
					cout<<"General Maths 3"<<endl;
					break;
					case 203:
						cout<<"General Maths 4"<<endl;
						break;
						
	}
	
	
}
}
if(selects==3){
	cout<<"enter Referrence"<<endl;
	cin>> Referrence;
	attempts++;
	if (Referrence!=correctReferrence){
		cout<<"wrongcode.retry"<<endl;}
	else if (Referrence==correctReferrence){
	cout<<"Enter the bookCode(300-303):"<<endl;
	cin>>bookCode;
	switch (bookCode){
		case 300:
			cout<<"French Book1"<<endl;
			break;
			case 301:
				cout<<"French Book2"<<endl;
				break;
				case 302:
					cout<<"French Book3"<<endl;
					break;
					case 303:
						cout<<"French Book4"<<endl;
						break;
						
	}
	
	
}
}

if(selects==4){
	cout<<"enter Referrence"<<endl;
	cin>> Referrence;
	attempts++;
	if (Referrence!=correctReferrence){
		cout<<"wrongcode.retry"<<endl;}
	else if (Referrence==correctReferrence){
	cout<<"Enter the bookCode(400-403):"<<endl;
	cin>>bookCode;
	switch (bookCode){
		case 400:
			cout<<"Comp100"<<endl;
			break;
			case 401:
				cout<<"Comp101"<<endl;
				break;
				case 402:
					cout<<"AfricanStudies 4"<<endl;
					break;
					case 403:
						cout<<"AfricanStudies 4"<<endl;
						break;
						
	}
	
	
}
}


      
}
}
 else {
            attempts++;
            cout << "Invalid credentials. Remaining attempts: " << maxAttempts - attempts << endl;
        }
    }

    if (attempts == maxAttempts) {
        cout << "Maximum attempts reached. Login failed." << endl;
    }
}

 else if (selects == 2) {
            string username, password;
           cout << "Enter username: ";
            cin >> username;
           cout << "Enter password: ";
            cin >> password;
                std::cout << "created successful.\n";
    return 0;
	}
}