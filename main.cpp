#include <QCoreApplication>
#include <stdio.h>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    // Intro to sprintf
    char    myoutput[60];
    int     stringlength,
            x=4,
            y=10;

    stringlength = sprintf(myoutput, "%d plus %d equals %d", x, y, x+y);
    printf("[%s] is a string that is %d characters long.\n", myoutput, stringlength);

    printf("Hello, World, From Classic C\n");
    cout<< "Hello, World, From Modern C++" << endl;

    // Intro to putc() function of C
    char     c1='A',
            c2='B',
            c3='C',
            nl='\n';
    putc(c1, stdout);
    putc(c2, stdout);
    putc(c3, stdout);
    putc(nl, stdout);

    // Intro to user inputs
    string username;
    cout << "Enter your username:";
    //cin >> username; This should not be used because, cin stops reading when it finds a ' '
    getline(cin, username); // getstr can also be used from classic C language
    cout << endl << "Hello " << username << ", What's your nickname? :";
    string nickname;
    getline(cin, nickname);
    cout << endl << "Hello " << username << ", I like calling you " << nickname;
    cout << endl;


    return a.exec();
}
