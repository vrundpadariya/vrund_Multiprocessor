#include <iostream>
using namespace std;

class Message {
private:
    string _message;

public:
    Message(const string& msg = "Default Message") : _message(msg) {}

    void print() const {
     cout << _message << endl;
    }

    void print(const string& additional_msg) const {
       cout << _message << " " << additional_msg << endl;
    }
};

int main() {

    Message defaultMsg;
    Message customMsg("Custom Message");


    defaultMsg.print();
    defaultMsg.print("Additional Info");

    customMsg.print();
    customMsg.print("Extra Details");

    return 0;
}

