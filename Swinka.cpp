#include "Swinka.h"


Swinka::Swinka(string nazwa) :Zwierzatko(nazwa) {

}

Swinka& Swinka :: operator=(const Swinka& swinka) {
    if (this == &swinka) {
        return *this;
    }

    this->imie = swinka.imie;
    this->humor = swinka.humor;
    this->wiek = swinka.wiek;
    this->zdrowie = swinka.zdrowie;

    return *this;

}

void Swinka::rysujZwierzatko() {
    cout << "   	   __,---.__               " << endl;
    cout << "      ,-'          `-.__            " << endl;
    cout << "    &/           `._\\ _\\            " << endl;
    cout << "    /               ''._            " << endl;
    cout << "    |   ,             ('')           " << endl;
    cout << "    |__,'`-..--|__|--''             " << endl;
}

void Swinka::dajGlos() {
    cout << " /     \      _n_  ______           " << endl;
    cout << " |Oink!|_   _/o  \\/      \@           " << endl;
    cout << " \_____/ \ O_             )           " << endl;
    cout << "             \\___/\\______/            " << endl;
    cout << "                   ||  ||             " << endl;
}

void Swinka::pobawSieObrazek() {
    cout << "                     _          " << endl;
    cout << "             (,)                 " << endl;
    cout << "             _/                  " << endl;
    cout << "         .--'_'--.               " << endl;
    cout << "       .'   |I|   '.             " << endl;
    cout << "      /     |I|     \\            " << endl;
    cout << "     /      |I|      \\          " << endl;
    cout << "    ;       |I|       ;          " << endl;
    cout << "    |   _   'I'   _   |          " << endl;
    cout << "   /|  |\\\\_,...,_//|  |\\         " << endl;
    cout << "  / |  |-' 0   0 '-|  | \\        " << endl;
    cout << " (//| /             \\\ |\\\\)       " << endl;
    cout << "  ^ \ |    _..._    | / ^        " << endl;
    cout << "     '|  .'     '.  |'           " << endl;
    cout << "      \  | () () |  /            " << endl;
    cout << "     / '.`.     .'.' \\           " << endl;
    cout << "    /' / `\\`''''`/` \\ `\\          " << endl;
    cout << "   (/ /    `''''`    \\ \\)         " << endl;
    cout << "    ^`               `^			   " << endl;
}



void Swinka::dajJesc() {
    okreslHumor();

    cout << "	       ;`.                       ,'/         " << endl;
    cout << "     |`.`-.      _____      ,-;,'|              " << endl;
    cout << "     |  `-.\\__,-'     `-.__//'   |             " << endl;
    cout << "     |     `|               \\ ,  |             " << endl;
    cout << "     `.  ```                 ,  .'              " << endl;
    cout << "       \\_`      .     ,   ,  `_/               " << endl;
    cout << "         \\    ^  `   ,   ^ ` /                 " << endl;
    cout << "          | '  |  ____  | , |                   " << endl;
    cout << "          |     ,'    `.    |                   " << endl;
    cout << "          |    (  O' O  )   |                   " << endl;
    cout << "          `.    \\__,.__/   ,'                  " << endl;
    cout << "            `-._  `--'  _,'                     " << endl;
    cout << "                `------'                        " << endl;
}


string Swinka::getRodzajZwierzatka() {

    return rodzajZwierzatka;
}

void Swinka::specjalnaUmiejetnosc() {
    cout << "Twoja swinka kapie sie w blocie :)" << endl;
    cout << "	 _._._._.,-.  " << endl;
    cout << "XXXX&,-'      ( /oo'.XXXXXX   " << endl;
    cout << "====(   #        _(')=====    " << endl;
    cout << " _.-(#       .  /\\\\-._.--.  " << endl;
    cout << "(###.\\_(-'--'|_(\\#\\#####.' " << endl;
    cout << " `-._###'#_#####.#_'.-''      " << endl;
    cout << "     '.--' `-.-.-'            " << endl;
    humor.setHumor("bardzo dobry");
}