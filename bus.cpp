#include<iostream>
using namespace std;

int showPerson(int person) {
    int ticket = 12 * person;
    cout << "*********************\n";
    cout << "Number of person is: " << person << "\n";
    cout << "Amount collected is " << ticket << "$\n";
    cout << "*********************\n";
    return person;
}

int addPerson(){ 
    int nPerson;
    cout << "*********************\n";
    cout << "Enter number of person to be added: \n";
    cin >> nPerson;
    cout << "*********************\n";

    if(nPerson < 0) {
        cout << "*********************\n";
        cout << "Enter a positive number\n";
        cout << "*********************\n";
        return 0;
    } else {
        return nPerson;
    }
}

int removePerson(int person) {
    int nPerson;
    cout << "*********************\n";
    cout << "Enter number of person to be removed: \n";
    cin >> nPerson;
    cout << "*********************\n";

    if(nPerson < 0) {
        cout << "*********************\n";
        cout << "Number of person must be greater than 0\n";
        cout << "*********************\n";
        return 0;
    } else if (nPerson > person) {
        cout << "*********************\n";
        cout << "Number of person to be removed should be greater than current person\n";
        cout << "*********************\n";
        return 0;
    } else {
        return nPerson;
    }
}

int main() {
    int person = 0;
    bool isRunning = true;
    while(isRunning) {
        cout << "*********************\n";
        cout << "   Bus Management    \n";
        cout << "1. Show Person\n";
        cout << "2. Add Person\n";
        cout << "3. Remove Person\n";
        cout << "4. Exit\n";
        cout << "*********************\n";
        cout << "Enter your choice (1-4): \n";
        int n; 
        cin >> n;
        switch(n) {
            case 1:
            showPerson(person);
            break;
            case 2:
            person += addPerson();
            break;
            case 3: 
            person -= removePerson(person);
            break;
            case 4: 
            isRunning = false;
            break;
            default: 
            cout << "*********************\n";
            cout << "Enter a valid choice\n";
            cout << "*********************\n";
            break;
        }
    }    
    cout << "*********************\n";
    cout << "Thank You! Have a nice day!\n";
    cout << "*********************\n";
}