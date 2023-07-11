#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int vector[6], renglon = 0;
    string line, nombreperso, lectura_per;

    /*CREAR Y ABIR EL ARCHIVO .txt*/
    /*ofstream Myfile("GameData.txt");

    if (Myfile.is_open())
    {
        Myfile << "Hola Platzi" << endl;

        for (int i = 0; i < 6; i++)
        {
            vector[i] = i;
            Myfile << vector[i];
        }
        Myfile<<endl;
        cout << "Digita un nombre" << endl;
        getline(cin, nombreperso);

        cout<<nombreperso<<endl;
        Myfile<<nombreperso;
        cout << endl;
    }
    Myfile.close();*/

    /*LEER EL ARCHIVO*/

    ifstream MyfileRead("GameData.txt");

    if (MyfileRead.is_open())
    {
        while (getline(MyfileRead, line))
        {
            renglon = renglon + 1;

            if (renglon == 3)
            {
                lectura_per = line;
                cout << lectura_per << endl;
            }
        }
    }
    else
    {
        cout << "Error al abrir el archivo" << endl;
    }
    return 0;
}