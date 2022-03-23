#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int Menu();
void ShowT();
void AddT();
void DelT();

int main()
{
    int decide;
    decide = 0;
    while (decide != 4)
    {
        Menu();
        cin >> decide;
        switch (decide)
        {
        case 1:
            ShowT();
            break;
        case 2:
            AddT();
            break;
        case 3:
            DelT();
            break;
        }
    } 
}

int Menu()
{
    cout << endl;
    cout << "=====================" << endl;
    cout << "|  Choose  Action:  |" << endl;
    cout << "|  (1) Show tasks.  |" << endl;
    cout << "|  (2) Add  tasks.  |" << endl;
    cout << "|  (3) Del  tasks.  |" << endl;
    cout << "|  (4) Save'n Exit. |" << endl;
    cout << "=====================" << endl;
    cout << endl;
    return 0;
}

void ShowT()
{
    ifstream file("tasks.txt");
    string s;
    while (getline(file, s))
    {
        cout << ' ' << s << endl;
    }
    cout << endl;
    cout << endl;
    cout << endl;
}

void AddT()
{
    ofstream file("tasks.txt", ios::app);
    string s2;
    cout << "Write a task." << endl;
    getline(cin >> ws, s2);
    file.write(s2.data(), s2.size());
    file << "\n";
    
}

void DelT()
{
    ofstream file("tasks.txt", ios::trunc);
    cout << "Data cleared." << endl;
}
