#include <iostream>
#include "SchoolBoy.h"
#include "SchoolGirl.h"
#include "Teacher.h"
#include "Admin.h"

using namespace std;

int main() {
    // === UCZNIOWIE ===
    SchoolBoy sb("Jan Kowalski", 15, "1A");
    sb.setNote(POLSKI, 4.0);
    sb.setNote(MATEMATYKA, 5.0);
    sb.setNote(INFORMATYKA, 3.5);
    sb.printPupil();

    cout << "\n" << endl;

    SchoolBoy sj("Andrzej Krzysztofik", 16, "2A");
    sj.setNote(POLSKI, 4.0);
    sj.setNote(MATEMATYKA, 3.0);
    sj.setNote(INFORMATYKA, 2.5);
    sj.printPupil();

    cout << "\n" << endl;

    SchoolGirl sg("Anna Nowak", 14, "1A");
    sg.setNote(POLSKI, 5.0);
    sg.setNote(CHEMIA, 4.5);
    sg.setNote(ANGIELSKI, 4.0);
    sg.printPupil();

    cout << "\n=============================================================================================================\n" << endl;

    // === NAUCZYCIEL ===
    Teacher t("Maria Lis", 40, 4200, 22, true, "MATEMATYKA", "1A");
    t.PrintWorker();

    cout << "\n=============================================================================================================\n" << endl;

    // === PRACOWNIK ADMINISTRACJI ===
    Admin a("Zbigniew Malinowski", 50, 5000, 25, specjalista);
    a.PrintWorker();

    cout << "\n=============================================================================================================\n" << endl;

    return 0;
}
