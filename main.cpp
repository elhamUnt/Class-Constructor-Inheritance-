#include <iostream>
using namespace std;

// Klasa bazë
class Personi {
protected:
    string emri;
    int mosha;

public:
    // Konstruktor
    Personi(string e, int m) {
        emri = e;
        mosha = m;
        cout << "Konstruktori i Personit u thirr" << endl;
    }

    void shfaqInfo() {
        cout << "Emri: " << emri << endl;
        cout << "Mosha: " << mosha << endl;
    }
};

// Klasa e trasheguar
class Studenti : public Personi {
private:
    int nota;

public:
    // Konstruktor i Studentit
    Studenti(string e, int m, int n)
        : Personi(e, m)   // thërret konstruktorin e Personit
    {
        nota = n;
        cout << "Konstruktori i Studentit u thirr" << endl;
    }

    void shfaqStudent() {
        shfaqInfo();
        cout << "Nota: " << nota << endl;
    }
};

int main() {
    Studenti s("Ardit", 20, 10);

    Personi p("emri","mbiemri");
    
    cout << endl;

    s.shfaqStudent();

    return 0;
}
