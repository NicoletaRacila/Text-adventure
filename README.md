Denumirea proiectului:

Text adventure game

Ce reprezintă proiectul:

Un text adventure game (sau joc de aventură text-based) este un tip de joc video 
în care interacțiunea se face în principal prin introducerea de text. Aceste jocuri sunt adesea bazate pe poveste 
și se centrează pe explorarea, rezolvarea de puzzle-uri și luarea de decizii care influențează progresul jocului


Functia fisierelor: Game.cpp, Room.cpp, Player.cpp, Main.cpp Makefile.cmd si .gitignore

1. Fișierele .cpp
main.cpp: Acesta este punctul de intrare al programului. Conține funcția main() care inițiază execuția aplicației.

Player.cpp: Acest fișier ar conține implementarea clasei Player, inclusiv metodele pentru gestionarea inventarului și a numelui jucătorului.

Room.cpp: Aici se implementează clasa Room, care gestionează descrierea camerelor și opțiunile disponibile pentru jucător.

Game.cpp: Acest fișier ar conține logica principală a jocului, inclusiv gestionarea stării jocului, a camerelor și a interacțiunilor jucătorului.


3. Fișierul Makefile.cmd

Makefile.cmd este un fișier de script folosit pentru a compila un proiect C++ pe Windows. Acesta conține o serie de comenzi care sunt executate pentru a construi proiectul. De obicei, include setările pentru compilator, fișierele sursă, și regulile de construcție. Iată câteva aspecte cheie:


3. Fișierul .gitignore
   
Fișierul .gitignore este folosit pentru a specifica fișierele și directoarele pe care Git ar trebui să le ignore. Acest lucru este util pentru a evita adăugarea fișierelor temporare, de configurare sau de compilare în sistemul de versionare. Iată ce ar trebui să conțină un fișier .gitignore pentru proiectul tău:

Fișiere obiect: Ignoră toate fișierele cu extensia .o, care sunt generate în timpul compilării.

Fișiere executabile: Ignoră fișierele executabile generate, cum ar fi game.exe (pe Windows) sau game (pe Linux/Mac).

Fișiere temporare: Poate include și alte fișiere temporare generate de editori sau medii de dezvoltare.
