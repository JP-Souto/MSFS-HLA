#include <iostream>
#include <Windows.h>
#include "SimConnect.h"
#include <string>

using namespace std;


HANDLE hSimConnect = NULL;

enum DATA_DEFINE_ID {
    DEFINITION_ID_AP,
};

enum DATA_REQUEST_ID {
    REQUEST_AP_SETTINGS,
};


enum EVENT_ID {
    EVENT_SET_AP_ALTITUDE,
};


struct DataRefs {
    double altitude;
    double knots;
};
/*
int main() {
    HRESULT hr;                  
    SIMCONNECT_RECV* pData = NULL; 
    DWORD cbData = 0;          
    bool bRequestProcessed = false; 
    int SelectedAltitude = 0;  

    // Tentar abrir uma conexão com o Flight Simulator
    hr = SimConnect_Open(&hSimConnect, "Client Event", NULL, 0, 0, 0);
    if (SUCCEEDED(hr)) {
        cout << "Conectado ao MSFS\n" << endl;

        // Fechar a conexão ao final
        hr = SimConnect_Close(hSimConnect);
        if (SUCCEEDED(hr)) {
            cout << "Conexao encerrada com MSFS." << endl;
        }
        else {
            cout << "Erro ao encerrar a conexão com MSFS." << endl;
        }
    }
    else {
        cerr << "Impossivel conectar ao MSFS." << endl;
    }

    return 0;
}
*/