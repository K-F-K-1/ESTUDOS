#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void tarefas()
{
    ofstream nason("Crystal-Lake.json");
    cout<< "Deu certo eu acho" ;

}

int main()
{
    string banana;
    int entrada;
    //char entrada ;

   
    ifstream ASCII("Tenacious-Big-Wallet.txt") ;
    cout<<"»»——⍟——««»»——⍟——««»»——⍟——««»»——⍟——««Oʟᴀ́ ᴄᴀᴘɪᴛᴀ̃ᴏ. O ǫᴜᴇ ᴛᴇᴍᴏs ᴘʀᴀ ʜᴏᴊᴇ ?»——⍟——««»»——⍟——««»»——⍟——««»»——⍟——««"<<endl;
    if (ASCII.is_open()) 
    {
        while (getline(ASCII,banana))
        cout << banana<<endl;
    } 
    ASCII.close();
    
    cout<<"»»——⍟——««»»——⍟——««»»——⍟——««»»——⍟——««Oʟᴀ́ ᴄᴀᴘɪᴛᴀ̃ᴏ. O ǫᴜᴇ ᴛᴇᴍᴏs ᴘʀᴀ ʜᴏᴊᴇ ?»——⍟——««»»——⍟——««»»——⍟——««»»——⍟——««"<<endl;
    cout << "----> MENU DO CURURU <-----"<<endl;
    cout << "Adicionar uma tarefa na lagoa ==> add"<<endl;
    cout << "Função 2 "<<endl ; 
    cout << "Função 3"<< endl;
    cout <<" E aí seu banana, qual vai ser ? ==>";
    cin >>  entrada  ;

    switch (entrada) 
    {
        case 1: 
         tarefas();
            


    }



    return 0;

}

