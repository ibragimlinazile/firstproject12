// ConsoleApplication6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
    int n;
metka: cout << "vvedite n:";
   cin >> n;
   switch (n)
    {
    case 1: { cout << " /n Monday" << endl; break; } 
    case 2: { cout << " /n tuesday" << endl; break; } 
    case 3: { cout << " /n wednesday" << endl; break; } 
    case 4: { cout << " /n thursday" << endl; break; } 
    case 5: { cout << " /n friday" << endl; break; } 
    case 6: { cout << " /n saturday" << endl; break; } 
    case 7: { cout << " /n sunday" << endl; break; } 

    default: { cout << " /n net takogo dnya nedeli , novoye znachenye"; goto metka; }
   
    }

   
    
}

