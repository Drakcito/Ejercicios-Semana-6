#include <iostream>
using namespace std;

int main(){
    char noticia;
    int hora;
    char origen;
    short contardep = 0, contarcac = 0, contarentre = 0;
    short madrugada = 0, manhana = 0, tarde = 0, noche = 0;
    short nacional = 0, extranjera = 0;
    do{
        do {
            cout << "\nIngrese tipo de noticia: ";
            cin >> noticia;
            noticia = toupper(noticia);
        } while (noticia != 'D' && noticia != 'A' && noticia != 'E' && noticia != 'X');
        if (noticia != 'X') {
            do {
                cout << "Hora de publicacion: ";
                cin >> hora;
            } while (hora < 0 || hora>23);
            do {
                cout << "Origen: ";
                cin >> origen;
                origen = toupper(origen);
            } while (origen != 'N' && origen != 'E');
            if (noticia == 'D') contardep++;
            if (noticia == 'A') contarcac++;
            if (noticia == 'E') contarentre++;

            if (hora >= 0 && hora <= 5) {
                madrugada++;
            }
            else if (hora >= 6 && hora <= 12) {
                manhana++;
            }
            else if (hora >= 13 && hora <= 17) {
                tarde++;
            }
            else {
                noche++;
            }
            if (origen == 'N') nacional++;
            if (origen == 'E') extranjera++;
        }
    } while (noticia!='X');
    
    cout << "\nLos resultados son: \n";
    cout << "-------------------\n";
    cout << "Noticias de Deporte: " << contardep << endl;
    cout << "Noticias de Actualidad: " << contarcac << endl;
    cout << "Noticias de Entretenimiento: " << contarentre << endl;
    if (madrugada > manhana && madrugada > tarde && madrugada > noche) {
        cout << "En la MADRUGADA se publicaron mas noticias\n";
    }
    else if (manhana > madrugada && manhana > tarde && manhana > noche) {
        cout << "En la MAÑANA se publicaron mas noticias\n";
    }
    else if (tarde > madrugada && tarde > manhana && tarde > noche) {
        cout << "En la TARDE se publicaron mas noticias\n";
    }
    else if (noche > madrugada && noche > manhana && noche > tarde) {
        cout << "En la NOCHE se publicaron mas noticias\n";
    }

    if (nacional > extranjera) {
        cout << "Predominan las noticias Nacionales\n";
    }
    else if(extranjera>nacional) {
        cout << "Predominan las noticias Extranjeras\n";
    }
    else {
        cout << "Igual numero de noticias de Nacionales y Extranjeras\n";
    }

    return 0;
}