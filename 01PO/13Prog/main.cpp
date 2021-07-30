#include <iostream>
#include <cstring> // to recgnize and evaluate 'C' type strings.
#include <cctype> //  to recgnize and evaluate 'C' type characters

using namespace std;

void makeThemCaps(char* fullName)
    {
        // changing teh case to upper
        // strlen(str1) returns a 'size_t' type
        for (size_t i = 0; i < strlen(fullName); i++)
        {
            if(isalpha(fullName[i]))
                    fullName[i] = toupper(fullName[i]);
        }
        cout << "Fullname in caps: " << fullName << endl;

    }

void compareStrings(char* tempName,char* fullName)
    {
        // Comparing two strings with strcmp(str1,str2) which compares each character in both the strings, 
        // returns numerical value telling which string is larger.

        if(strcmp(tempName, fullName)==0)
                cout << "Same!" << endl ;
        else
                cout << "Different!" << endl ;
    }

int main()
    {
        char firstName[15];
        char lastName[20];
        char fullName[50];
        char tempName[50];

        cout << "Enter your First Name: ";
        cin.getline(firstName, 15); 
        // getline function waits till the buffer is filled with 10 characters including spaces and puts the data into provided character variable.
        cout << "Enter Last Name:" ;
        cin.getline(lastName, 20);
        cout << firstName << endl
             << lastName  << endl;

        // Coping Strings
        strcpy(fullName, firstName); // Copies the cone character at a time from firstName to fullName, overwrites the existing contents if any.
        strcat(fullName, " "); // concatinates the string literal or the supplied string-object
        strcat(fullName, lastName );
        cout << "Full Name: " << fullName  << endl;
        strcpy(tempName,fullName);

        compareStrings(tempName,fullName);
        makeThemCaps(fullName) ;
        compareStrings(tempName,fullName);
        
        return 0 ;
    }
