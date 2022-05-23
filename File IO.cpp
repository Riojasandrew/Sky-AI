#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

void mySearch() {
    // This is how to write to a file
    string nm;
    string nm2;
    

    string name;
    fstream f;
    char usr_in;
    cout << " Hello new user what shall I call you?: ";
    cin >> name;
    cout << "Welomce " << name << " I am sky your personal assisitent" << endl;
    cout << " Press r once you wrote down what you wanted me to remember, w to write down for me to remember things" << endl;
    cin >> usr_in;
    if (usr_in == 'r') {
        // ios::in is to read / ios::out is to write
        f.open("myText", ios::in);
        string s;
        while (getline(f, s)) {
            cout << s << endl;
        }
        f.close();
    }
    else {
        f.open("myText", ios::out | ios::in | ios::app);
        cout << "List" << endl;
        cout << "*Screaming* Tell me!!!" << endl;
        cin >> nm;
        nm.append(" ");
        cout << "Anything else?" << endl;
        cin >> nm2;
        nm.append(nm2);
        nm.append("\n");
        cout << "Important ideas: " << nm << endl;
        f << nm;
        f.close();
    }
}

int main()
{
    char rt;
    while (true) {
        mySearch();
        cout << "Still need anything else? (y/n): ";
        cin >> rt;
        if (rt != 'y') {
            cout << "If you forget just let me know";
            break;
        }
    }

}


