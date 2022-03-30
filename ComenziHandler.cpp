#include "ComenziHandler.h"

void ComenziHandler::trimiteComanda(Client client)
{
    ofstream fisier("comenzi.txt");
    if (fisier.is_open())
    {
        std::vector<Produs> cos = client.getCos();
        fisier << "Comanda de la { " << client.getCodClient() << " " 
            << client.getNume() << " " << client.getLocalitate() << " } ---> ";
        for (int i = 0; i < cos.size(); i++)
            fisier << cos[i] << endl;
        fisier.close();
    }
}

void ComenziHandler::vizualizareComenzi()
{
    string line;
    ifstream file("comenzi.txt");
    if (file.is_open())
    {
        while (std::getline(file, line))
        {
            cout << line << '\n';
        }
        file.close();
    }

    else cout << "Unable to open file";
}

void ComenziHandler::raportMagazin()
{
    string line;
    ifstream file("comenzi.txt");
    ofstream file_out("comenzi_magazin.txt");
    if (file.is_open() && file_out.is_open())
    {
        while (std::getline(file, line))
        {
            file_out << line << '\n';
        }
        file.close();
        file_out.close();
    }

    else cout << "Unable to open file";
}
