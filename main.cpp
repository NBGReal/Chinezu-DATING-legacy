#include <iostream>
#include <conio.h>

using std::cout;
using std::cin;

int main()
{
  short account_option;
  const std::string cd_logo = "ChinezuDATING_legacy™";
 
  cout << cd_logo << '\n';
  cout << "Bine ați venit pe ChinezuDATING_legacy™!\n";
  cout << "Cont:\n" << '\n';
  cout << "1) Înregistrare" << '\n' << "2) Autentificare\n";
  
  cin >> account_option;
  if(account_option == 1)
  {
    std::string name;
    short age;
    std::string sex;
    std::string about;
    
    clrscr();
    
    cout << cd_logo << '\n';
    cout << "Creațivă un cont:\n" << '\n';
    
    cout << "Nume: ";
    getline(cin >> std::ws, name);
    
    cout << "Vârstă: ";
    cin >> age;
    
    cout << "Sex: ";
    cin >> sex;
    
    cout << "Despre tine: ";
    getline(cin >> std::ws, about);
    
    clrscr();
    
    cout << cd_logo << '\n';
    cout << "Contul tău:\n" << '\n';
    cout << "Nume: " << name << '\n';
    cout << "Vârstă: " << age << '\n';
    cout << "Sex: " << sex << '\n';
    cout << "Despre tine: " << about << '\n';
    
    cout << "Apasă ENTER pentru a continua";
    cin;
  }
  else if(account_option == 2)
  {
    cout << "Nu există";
    cin;
  }
  else if(account_option < 2 || account_option > 1)
  {
    cout << "Selecție invalidă";
    cin;
  }
}