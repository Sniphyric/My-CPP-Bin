#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <clocale>
#include <conio.h>
using namespace std;

// Transforma qualquer texto que use o "animaTexto" em um texto com efeito de digitação.
void animaTexto(string message, int speed)
    {
        for(char a : message)
        {
            cout << a << flush;
            this_thread::sleep_for(chrono::milliseconds(speed));
        }
    };

int main()
{
    
    // Permite que o texto fique com os acentos comuns da língua brasileira.
    setlocale(LC_ALL, "pt_BR.UTF-8");

    string usuario_cadastrado;
    string senha_cadastrada;
    
    string usuario;
    string senha;
    
    animaTexto("--ACCOUNT--\n\n", 50);
    
    animaTexto("Create a name for your user: ", 50);
        cin >> usuario_cadastrado;
    animaTexto("Create a password: ", 50);
        cin >> senha_cadastrada;

    system("cls");
    animaTexto("To confirm your new account, please log in again.", 50);
    animaTexto("\n\nPress 'Enter' to continue.", 50);
    cin.ignore(1000, '\n');
    cin.get();
    system("cls");

    animaTexto("--LOGIN--\n\n", 50);

    animaTexto("User: ", 50);
        cin >> usuario;
    animaTexto("Password: ", 50);
        cin >> senha;
    system("cls");
    
    while(usuario != usuario_cadastrado || senha != senha_cadastrada){
        system("cls");
        animaTexto("Incorrect password or user. Try again.\n\n", 50);

        animaTexto("User: ", 50);
            cin >> usuario;
        animaTexto("Password: ", 50);
            cin >> senha;
    }

    system("cls");
    animaTexto("Logged in successfully. Press 'Enter' to continue.", 50);
    cin.ignore(1000, '\n');
    cin.get();
    system("cls");
    
    int renda{};
    bool rendaValida = false;

    while(!rendaValida){
        animaTexto("To take out a loan, You must type the following information:\n", 50);
        animaTexto("Your salary income, (Ex: 1000, 1500, etc...): $", 50);
        cin >> renda;

        if(cin.fail()){
            cin.clear();
            
            animaTexto("\nInexistent loan for such value. Try again.", 50);
            cin.ignore(1000, '\n');
            cin.get();
            system("cls");
        }
        else{
            if(renda >= 1000 && renda <= 500000){
                rendaValida = true;
                system("cls");
            
                if(renda >= 1000 && renda <= 2000){
                    animaTexto("You have the right to $4.000 of loan.", 50);
                }
                else if(renda >= 2001 && renda <= 6000){
                    animaTexto("You have the right to $8.000 of loan.", 50);
                }
                else if(renda >= 6001 && renda <= 8000){
                    animaTexto("You have the right to $16.000 of loan.", 50); 
                }
                else if(renda >= 8001 && renda <= 16000){
                    animaTexto("You have the right to $32.000 of loan.", 50);
                }
                else if(renda >= 16001 && renda <= 32000){
                    animaTexto("You have the right to $64.000 of loan.", 50);
                }
                else if(renda >= 32001 && renda <= 64000){
                    animaTexto("You have the right to $128.000 of loan.", 50);
                }
                else if(renda >= 64001 && renda <= 128000){
                    animaTexto("You have the right to $500.000 of loan.", 50);
                }
                else if(renda >= 128001 && renda <= 500000){
                    animaTexto("You have the right to $1.000.000 of loan.", 50);
                }
            }
            else{
                animaTexto("\nInexistent loan for such value. Try again.", 50);
                cin.ignore(1000, '\n');
                cin.get();
                system("cls");
            }
        }
    }
    
    animaTexto("\n\nPress 'Enter' to continue.", 50);
    cin.ignore(1000, '\n');
    cin.get();
    system("cls");
    
    int parcelas{};
    bool parcelaValida = false;

    while(!parcelaValida){
        animaTexto("Select the quantity of installments you will pay:\n\n", 50);
        cout << "1 - 20x\n2 - 30x\n3 - 40x\n4 - 50x\n5 - 60x\n\n";
        animaTexto("Select: ", 50);
        cin >> parcelas;
        cout << '\n';

        if(cin.fail()){
            cin.clear();
            
            animaTexto("Wrong number selected. Try again.", 50);
            cin.ignore(1000, '\n');
            cin.get();
            system("cls");
        }
        else{
            if(parcelas >= 1 && parcelas <= 5){
                parcelaValida = true;
                system("cls");
        
                if(parcelas == 1){
                    animaTexto("You've selected: 20x.\n", 50);
                    animaTexto("And will have a fee of: 2.5%", 50);
                }
                else if(parcelas == 2){
                    animaTexto("You've selected: 30x.\n", 50);
                    animaTexto("And will have a fee of: 3.5%", 50);
                }
                else if(parcelas == 3){
                    animaTexto ("You've selected: 40x.\n", 50);
                    animaTexto("And will have a fee of: 4.5%", 50);
                }
                else if(parcelas == 4){
                    animaTexto("You've selected: 50x.\n", 50);
                    animaTexto("And will have a fee of: 5.5%", 50);
                }
                else if(parcelas == 5){
                    animaTexto("You've selected: 60x.\n", 50);
                    animaTexto("And will have a fee of: 6.5%", 50);
                }
            }
            else{
                animaTexto("Wrong number selected. Try again.", 50);
                cin.ignore(1000, '\n');
                cin.get();
                system("cls");
            }
        }
    }
    
    animaTexto("\n\nPress 'Enter' to continue.", 50);
    cin.ignore(1000, '\n');
    cin.get();
    system("cls");

    int opcao = 0;
    const char* bancos[] = {"Bank of America", "Wells Fargo", "Citigroup"};

    while (true) {
    system("cls");
    
    cout << "Select your bank:\n\n";
        for (int i = 0; i < 3; i++){
            if (i == opcao){
            cout << "> " << bancos[i] << '\n'; }
            else{
            cout << "  " << bancos[i] << '\n'; }
        }
    
        int tecla = _getch();
    
        if (tecla == 224){
            tecla = _getch();

            if (tecla == 72){ opcao--; } // ↑
            if (tecla == 80){ opcao++; } // ↓
        }
    
        if (tecla == 13) break; // ENTER
    
        if (opcao < 0) opcao = 2;
        if (opcao > 2) opcao = 0;
    }

    system("cls");
    animaTexto("You've selected: ", 50);
    animaTexto(bancos[opcao], 50);
    animaTexto(".", 50);
    animaTexto("\n\nPress 'Enter' to continue.", 50);
    cin.get();
    system("cls");
    return 0;

}