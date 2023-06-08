#include <iostream>
#include <string>

using namespace std;

const int MAX_EMAILS = 20;
const string EMOJI_LAUGH = "\U0001F600";
const string EMOJI_MAIL = "\U0001F4E7";
const string EMOJI_RECEIVE = "\U0001F4E5";
const string EMOJI_SHOW = "\U0001F4E4";
const string EMOJI_DANGER = "\U000026A0";

struct Email {
    string from;
    string to;
    string subject;
    string body;
    string tag;
};

void promptAndSaveEmail(Email* emails, int& numEmails) {
    Email email;
    cout << "\n\n*************write your email" << EMOJI_RECEIVE << "*************\n";
    cin.ignore();
  
    cout << "Subject: ";
    getline(cin, email.subject);
  
    cout << "From: ";
    getline(cin, email.from);

    cout << "To: ";
    getline(cin, email.to);

    cout << "Body: ";
    getline(cin, email.body);

    cout << "Tag: ";
    getline(cin, email.tag);

    emails[numEmails] = email;
    numEmails++;
    cout << "\n*************your email saved successfully" << EMOJI_RECEIVE << "*************\n\n";
}

void chooseEmail(Email* emails, int numEmails){
    int emailIndex;
    while (true) {
        cout << "\n\nEnter the index of the email you want to view: " << EMOJI_SHOW;
        cin >> emailIndex;
        if (emailIndex >= 0 && emailIndex < numEmails) {
            Email email = emails[emailIndex];
            cout << "From: " << email.from << endl;
            cout << "To: " << email.to << endl;
            cout << "Subject: " << email.subject << endl;
            cout << "Body: " << email.body << endl;
            cout << "Tag: " << email.tag << endl;
            cout << "\n**********************" << EMOJI_SHOW << "**********************\n";
          
            break;
        } else {
            cout << "Invalid email index. Please try again." << endl;
        }
    }
}

void displayEmailList(Email* emails, int numEmails) {
    cout << endl << "List of emails:" << endl;
    for (int i = 0; i < numEmails; i++) {
        cout << i << " - " << emails[i].subject << endl;
    }

    char wantOpen;
    cout << "\n\nDo you want to open any email? 'y' for yes : \n";
    cin >> wantOpen;
    if (wantOpen == 'y'){
      chooseEmail(emails, numEmails);
    } else{
      cout << "\n********************************************\n";
    }
}

void showMenu(){
      cout << "menu: \n";
      cout << "\t-\t If you want to send an email please input: 'e'" << endl;
      cout << "\t-\t If you want to view all emails please input: 'v'" << endl;
      cout << "\t-\t If you want to exit please input something else:" << endl;
}

int main() {
    Email emails[MAX_EMAILS];
    int numEmails = 0;
    char answer ;
    cout << "\n********************************************\n";
    cout << "Hello, welcome to the email manager app " << EMOJI_LAUGH;
    cout << "\n********************************************\n\n";

    while (numEmails < MAX_EMAILS) {
      showMenu();
      cin >> answer;

      if (answer == 'e') {
          promptAndSaveEmail(emails, numEmails);
      } else if (answer == 'v'){
        displayEmailList(emails, numEmails);
      } else {
        char sure = 'n' ;
        cout << EMOJI_DANGER << " All your data will be deleted,\nif you are sure 'y' to close :";
        cin >> sure ;
        if (sure == 'y'){
            cout << "Goodbye dear user :)" << endl;
            return 0;
        }
      }
    }

    cout << "Maximum limit of " << MAX_EMAILS << " emails reached. Exiting the app." << endl;

    return 0;
}