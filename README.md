Denumirea proiectului:

Text adventure game

Ce reprezintă proiectul:

Un text adventure game (sau joc de aventură text-based) este un tip de joc video 
în care interacțiunea se face în principal prin introducerea de text. Aceste jocuri sunt adesea bazate pe poveste 
și se centrează pe explorarea, rezolvarea de puzzle-uri și luarea de decizii care influențează progresul jocului


Functia fisierelor: Game.hpp, Room.hpp, Player.hpp si Main.hpp 

Game.hpp
Game: Este clasa principală care controlează tot jocul. Se ocupă de logica principală, cum ar fi afișarea camerelor și gestionarea opțiunilor pe care le poate lua jucătorul.

std::vector<Room> rooms: Un vector care stochează toate camerele din joc. Fiecare cameră are o descriere și opțiuni pentru următoarele acțiuni.

Player player: Un obiect al clasei Player care reprezintă jucătorul. Acesta va conține numele și inventarul jucătorului.
int currentRoom: Un index care indică camera în care se află jucătorul în momentul respectiv.

Game(): Constructorul care inițializează camerele și jucătorul.

void start(): Aceasta este metoda care începe jocul. Când este apelată, gestionează logica de bază, cum ar fi trecerea prin camere și efectuarea de acțiuni.

void displayCurrentRoom(): Afișează descrierea camerei curente și opțiunile disponibile pentru jucător.

void chooseOption(): Permite jucătorului să aleagă o opțiune bazată pe ce poate face în camera curentă (ex. mutarea în altă cameră).

Room.hpp

Room: Reprezintă o cameră individuală din joc. Fiecare cameră are o descriere și o serie de opțiuni pe care jucătorul le poate alege (de exemplu, să meargă într-o altă cameră).

std::string description: Reprezintă descrierea camerei (ce vede jucătorul când intră în cameră).

std::vector<std::pair<std::string, int>> options: Acesta este un vector de perechi care conține textul opțiunii și indexul camerei în care te duce acea opțiune. De exemplu, o opțiune ar putea fi „Mergeți spre nord”, iar nextRoom ar fi indexul camerei în care se ajunge.

Room(const std::string& description): Constructor care inițializează descrierea camerei.

void addOption(const std::string& optionText, int nextRoom): Metodă care adaugă o opțiune (text și camera următoare) în lista de opțiuni a camerei.

std::string getDescription() const: Returnează descrierea camerei curente.

std::vector<std::pair<std::string, int>> getOptions() const: Returnează opțiunile pe care le poate alege jucătorul.

Player.hpp
Player: Reprezintă jucătorul în joc. Jucătorul are un nume și poate deține obiecte în inventarul său.

std::string name: Numele jucătorului, ales de utilizator la începutul jocului.

std::vector<std::string> inventory: O listă cu obiectele pe care jucătorul le-a colectat în timpul jocului.

Player(const std::string& name): Constructorul care setează numele jucătorului la începutul jocului.

std::string getName() const: Returnează numele jucătorului.

void addItem(const std::string& item): Adaugă un obiect în inventarul jucătorului.

void showInventory() const: Afișează toate obiectele din inventar.

Main.hpp
main(): Este funcția principală din care pornește execuția programului. În hpp este doar declarată.
