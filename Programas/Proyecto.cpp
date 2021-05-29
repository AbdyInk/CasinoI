#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
using namespace std;

class Jugador
{
private:
    float dinero=100;
    int ficha=0;
    int cFicha;
    int vicio=0;
    void verFichaDinero();
    void calcularFicha();
    void calcularDinero();
public:
    void Entrar();
    void Terminar();
    void Decision1();
    void Decision2();

    void Accion1();
    void Accion2();
    void Accion3();
    void Accion4();

    void Caja1();
    void Caja2();
    void Caja3();
    void Caja4();

    void Casino1();
    void Casino2();
    void Casino3();
    void Casino4();
    void Casino5();

    void Fin();
};

void Jugador::verFichaDinero()
{
    cout<<"\nTu dinero actual es de: $"<<dinero<<endl;
    cout<<"Fichas: "<<ficha;
}

void Jugador::calcularFicha()
{
    if((cFicha/10)>dinero)
        {
            cout<<"No tienes suficiente dinero para esa cantidad de fichas!"<<endl;
            cin.get();
            cin.get();
        }
    else if(cFicha>=10)
        {
            dinero-=cFicha/10;
            ficha+=cFicha;
            cout<<"Compraste "<<cFicha<<" fichas de casino"<<endl;
            vicio+=3;
            cin.get();
            cin.get();
        }
    else
        {
            cout<<"El minimo de fichas a comprar es de 10!"<<endl;
            cin.get();
            cin.get();
        }
}

void Jugador::calcularDinero()
{
    if(cFicha>ficha)
        {
            cout<<"No tienes dicha cantidad de fichas!"<<endl;
            cin.get();
            cin.get();
        }
    else if(cFicha>=10)
        {
            dinero+=cFicha/10;
            ficha-=cFicha;
            cout<<"Vendiste "<<cFicha<<" fichas de casino"<<endl;
            vicio--;
            cin.get();
            cin.get();
        }
    else
        {
            cout<<"El minimo de fichas a vender es de 10!"<<endl;
            cin.get();
            cin.get();
        }
}

void Jugador::Entrar()
{
    system("cls");
    verFichaDinero();
    Decision1();
}

void Jugador::Terminar()
{
    if(vicio>100 && vicio<1000)
    {
        cout<<"\nSi que jugaste mucho..."<<endl;
    }
    else if(vicio>=500 && vicio<1000)
    {
        cout<<"\nTe divertiste?"<<endl;
    }
    else if(vicio>=1000)
    {
        cout<<"\nEstas bien?, jugaste demasiado..."<<endl;
    }

    if(dinero>100 && dinero<1000)
    {
        cout<<"\nRegresaste con mas dinero del que inicaste!\nMuy bien!"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t\tFinal normal";
    }
    else if(dinero<100)
    {
        cout<<"\nRegresaste con menos dinero del que inicaste..."<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t\tFinal malo";
    }
    else if(dinero==0)
    {
        cout<<"\nTe quedaste sin dinero..."<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t\tFinal triste";
    }

    if(dinero>=1000 && dinero<10000)
    {
        cout<<"\nRegresaste con mas de $1000!\nGenial!"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\tFinal bueno";
    }
    else if(dinero>=10000 && dinero<100000)
    {
        cout<<"\nRegresaste con mas de $10000!\nImpresionante!...\nE-Estas bien?"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\tFinal irreal";
    }
    else if(dinero>=100000)
    {
        cout<<"\nQUE?!?!...\nDime que no estuviste media hora aqui...\nDescubriste que en las Cajas misteriosas consigues eso en 10 min verdad?"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\tFinal Legendario";
    }

    cout<<"\n\n\nFin..."<<endl;
    cin.get();
    cin.get();

    if(ficha>0 && ficha<100)
    {
        cout<<"\nTe quedaste con un par de fichas...."<<endl;
    }
    else if(ficha>=100 && ficha<1000)
    {
        cout<<"\nTe quedaste con mas de 100 fichas, se te olvido venderlas?"<<endl;
    }
    else if(ficha>=1000 && ficha<10000)
    {
        cout<<"\nTe quedaste con mas de 1000 fichas, coleccionador de fichas eh?"<<endl;
    }
    else if(ficha>=10000 && ficha<100000)
    {
        cout<<"\nTe quedaste con mas de 10000 fichas, si vuelves no te las cambiaran ya..."<<endl;
    }
    else if(ficha>=100000)
    {
        cout<<"\nTe quedaste con mas de 100000 fichas, QUE?!?!!?"<<endl;
    }
    Fin();
}

void Jugador::Decision1()
{
    int opcion;

    cout<<"\nQue deseas hacer?\n1-Comprar fichas\n2-Vender fichas\n3-Jugar\n4-Terminar"<<endl;
    cin>>opcion;

    switch(opcion)
    {
        case 1:
            Accion1();
            Entrar();
            break;
        case 2:
            Accion2();
            Entrar();
            break;
        case 3:
            Accion3();
            Entrar();
            break;
        case 4:
            Terminar();
            Fin();
            break;
    }
}

void Jugador::Decision2()
{
    system("cls");
    int opcion;

    cout<<"\nBienvenido a los juegos del casino!"<<endl;

    cout<<"\nQue deseas jugar?\n1-Blackjack\n2-MaquinaTragaperras\n3-RuletaDeLaFortuna\n4-CajaMisteriosa\n5-DadoSuertudo\n6-Regresar"<<endl;
    cin>>opcion;

    switch(opcion)
    {
        case 1:
            Casino1();
            vicio++;
            Decision2();
            break;
        case 2:
            Casino2();
            vicio++;
            cin.get();
            Decision2();
            break;
        case 3:
            Casino3();
            vicio++;
            cin.get();
            Decision2();
            break;
        case 4:
            Casino4();
            Decision2();
            break;
        case 5:
            Casino5();
            vicio++;
            Decision2();
            break;
        case 6:
            return;
            Entrar();
            break;
    }
}

void Jugador::Accion1()
{
    if(dinero>0)
        {
            cout<<"\nIngrese la cantidad de fichas a comprar(10 min):\n$1=10 fichas"<<endl;
            cin>>cFicha;

            calcularFicha();
        }
        else
        {
            cout<<"No tienes dinero!"<<endl;
            cin.get();
            cin.get();
        }
}

void Jugador::Accion2()
{
    if(ficha>0)
        {
            cout<<"\nIngrese la cantidad de fichas a vender(10 min):\n10 fichas=$1"<<endl;
            cin>>cFicha;

            calcularDinero();
        }
    else
        {
            cout<<"No tienes fichas!"<<endl;
            cin.get();
            cin.get();
        }
}

void Jugador::Accion3()
{
    if(ficha==0)
        {
            cout<<"Necesitas fichas para poder jugar!"<<endl;
            cin.get();
            cin.get();
        }
    else
        {
            Decision2();
        }

}

void Jugador::Caja1()
{
    srand(time(0));
    int premio;
    if(100>ficha)
        {
            cout<<"No tienes dicha cantidad de fichas!"<<endl;
        }
    else
    {
    vicio++;
    ficha-=100;
    cout<<"Presiona Enter para abrir la caja!"<<endl;
    cin.get();
    cin.get();
    premio=rand()%3+1;
     if(premio==1)
            {
                cFicha=100;
                cout<<"Ganaste "<<cFicha<<" fichas!"<<endl;
                ficha+=cFicha;
            }
    if(premio==2)
            {
                cFicha=10;
                cout<<"Ganaste $"<<cFicha<<endl;
                dinero+=cFicha;
            }
    if(premio==3)
            {
                cFicha=200;
                cout<<"Ganaste "<<cFicha<<" fichas!"<<endl;
                ficha+=cFicha;
            }
    }
}

void Jugador::Caja2()
{
    srand(time(0));
    int premio;
    if(500>ficha)
        {
            cout<<"No tienes dicha cantidad de fichas!"<<endl;
        }
    else
    {
    vicio++;
    ficha-=500;
    cout<<"Presiona Enter para abrir la caja!"<<endl;
    cin.get();
    cin.get();
    premio=rand()%3+1;
     if(premio==1)
            {
                cFicha=300;
                cout<<"Ganaste "<<cFicha<<" fichas!"<<endl;
                ficha+=cFicha;
            }
    if(premio==2)
            {
                cFicha=100;
                cout<<"Ganaste $"<<cFicha<<endl;
                dinero+=cFicha;
            }
    if(premio==3)
            {
                cFicha=800;
                cout<<"Ganaste "<<cFicha<<" fichas!"<<endl;
                ficha+=cFicha;
            }
    }
}

void Jugador::Caja3()
{
    srand(time(0));
    int premio;
    if(1000>ficha)
        {
            cout<<"No tienes dicha cantidad de fichas!"<<endl;
        }
    else
    {
    vicio++;
    ficha-=1000;
    cout<<"Presiona Enter para abrir la caja!"<<endl;
    cin.get();
    cin.get();
    premio=rand()%3+1;
     if(premio==1)
            {
                cFicha=900;
                cout<<"Ganaste "<<cFicha<<" fichas!"<<endl;
                ficha+=cFicha;
            }
    if(premio==2)
            {
                cFicha=250;
                cout<<"Ganaste $"<<cFicha<<endl;
                dinero+=cFicha;
            }
    if(premio==3)
            {
                cFicha=3000;
                cout<<"Ganaste "<<cFicha<<" fichas!"<<endl;
                ficha+=cFicha;
            }
    }
}

void Jugador::Caja4()
{
    srand(time(0));
    int premio;
    if(10000>ficha)
        {
            cout<<"No tienes dicha cantidad de fichas!"<<endl;
        }
    else
    {
    vicio++;
    ficha-=10000;
    cout<<"Presiona Enter para abrir la caja!"<<endl;
    cin.get();
    cin.get();
    premio=rand()%5+1;
     if(premio==1)
            {
                cFicha=7500;
                cout<<"Ganaste "<<cFicha<<" fichas!"<<endl;
                ficha+=cFicha;
            }
    if(premio==2)
            {
                cFicha=3000;
                cout<<"Ganaste $"<<cFicha<<endl;
                dinero+=cFicha;
            }
    if(premio==3)
            {
                cFicha=8000;
                cout<<"Ganaste "<<cFicha<<" fichas!"<<endl;
                ficha+=cFicha;
            }
    if(premio==4)
            {
                cFicha=11000;
                cout<<"Ganaste "<<cFicha<<" fichas!"<<endl;
                ficha+=cFicha;
            }
    if(premio==5)
            {
                cFicha=9500;
                cout<<"Ganaste "<<cFicha<<" fichas!"<<endl;
                ficha+=cFicha;
            }
    }
}

void Jugador::Casino1()
{
    int opcion;
    int ValorP=0,ValorE=0;
    int CartaP,CartaE;
    cout<<"\nBlackjack"<<endl;
    cout<<"\nFichas: "<<ficha;
    cout<<"\nCuantas fichas quieres apostar?"<<endl;
    cin>>cFicha;
    if(cFicha>ficha)
        {
            cout<<"No tienes dicha cantidad de fichas!"<<endl;
        }
    else
        {
//Jugada
            CartaE=rand()%10+1;
            cout<<"El rival saco un: "<<CartaE<<endl;
            ValorE+=CartaE;
    for(int y=0; y<1;)
        {
            cout<<"\nRival: "<<ValorE<<" Tu: "<<ValorP<<"\n\n1-Sacar\n2-Dejar"<<endl;
            cin>>opcion;

            switch(opcion)
            {
                case 1:
                    CartaP=rand()%10+1;
                    cout<<"\nSacaste un: "<<CartaP<<endl;
                    ValorP+=CartaP;
                    if(ValorP==21)
                        {
                            cout<<"\nGanaste!"<<endl;
                            cin.get();
                            cin.get();
                            ficha+=cFicha;
                            y+=1;
                        }
                    else if(ValorP>21)
                        {
                            cout<<"\nPerdiste!"<<endl;
                            cin.get();
                            cin.get();
                            ficha-=cFicha;
                            y+=1;
                        }
                        break;
                case 2:
                        cout<<"\nTe quedas"<<endl;
                        for(int z=0; z<1;)
                            {
                                if(ValorP==ValorE)
                                    {
                                        cout<<"Empate!"<<endl;
                                        cin.get();
                                        cin.get();
                                        z++;
                                    }
                                else if(ValorE>21)
                                    {
                                        cout<<"\nGanaste!"<<endl;
                                        cin.get();
                                        cin.get();
                                        ficha+=cFicha;
                                      z++;
                                    }
                                else if(ValorP<ValorE)
                                    {
                                        cout<<"\nPerdiste!"<<endl;
                                        cin.get();
                                        cin.get();
                                        ficha-=cFicha;
                                        z++;
                                    }
                                else
                                    {
                                        CartaE=rand()%10+1;
                                        cout<<"\nEl rival saco un: "<<CartaE;
                                        ValorE+=CartaE;
                                        cout<<"\nRival: "<<ValorE<<" Tu: "<<ValorP<<endl;
                                        cin.get();
                                    }
                            }
                            y+=1;
                            break;
            }
        }
    }
}

void Jugador::Casino2()
{
    srand(time(0));
    int caja[3];
    cout<<"\nMaquina"<<endl;
    cout<<"\nFichas: "<<ficha;
    cout<<"\nCuantas fichas quieres apostar?"<<endl;
    cin>>cFicha;
    if(cFicha>ficha)
        {
            cout<<"No tienes dicha cantidad de fichas!"<<endl;
        }
    else
        {
            ficha-=cFicha;
            cout<<"Presiona Enter para tirar!"<<endl;
            cin.get();
            cin.get();
            for(int f=0;f<3;f++)
            {
                caja[f]=rand()%6+1;
                switch(caja[f])
                {
                    case 1:
                        cout<<"\nCereza"<<endl;
                        cin.get();
                        break;
                    case 2:
                        cout<<"\nMelon"<<endl;
                        cin.get();
                        break;
                    case 3:
                        cout<<"\nSandia"<<endl;
                        cin.get();
                        break;
                    case 4:
                        cout<<"\nPizza"<<endl;
                        cin.get();
                        break;
                    case 5:
                        cout<<"\nEstrella"<<endl;
                        cin.get();
                        break;
                    case 6:
                        cout<<"\nSiete"<<endl;
                        cin.get();
                        break;
                }
            }
            if(caja[0]==1 && caja[1]==1 && caja[2]==1)
            {
                cFicha*=2;
                cout<<"Ganaste "<<cFicha<<" fichas!"<<endl;
                ficha+=cFicha;
            }
            else if(caja[0]==1 && caja[1]==1 || caja[1]==1 && caja[2]==1 || caja[0]==1 && caja[2]==1)
            {
                cFicha*=1.5;
                cout<<"Ganaste "<<cFicha<<" fichas!"<<endl;
                ficha+=cFicha;
            }
            else if(caja[0]==2 && caja[1]==2 && caja[2]==2)
            {
                cFicha*=2.5;
                cout<<"Ganaste "<<cFicha<<" fichas!"<<endl;
                ficha+=cFicha;
            }
            else if(caja[0]==3 && caja[1]==3 && caja[2]==3)
            {
                cFicha*=3;
                cout<<"Ganaste "<<cFicha<<" fichas!"<<endl;
                ficha+=cFicha;
            }
            else if(caja[0]==4 && caja[1]==4 && caja[2]==4)
            {
                cFicha*=4;
                cout<<"Ganaste "<<cFicha<<" fichas!"<<endl;
                ficha+=cFicha;
            }
            else if(caja[0]==5 && caja[1]==5 && caja[2]==5)
            {
                cFicha*=5;
                cout<<"Ganaste "<<cFicha<<" fichas!"<<endl;
                ficha+=cFicha;
            }
            else if(caja[0]==6 && caja[1]==6 && caja[2]==6)
            {
                cFicha*=7;
                cout<<"Ganaste "<<cFicha<<" fichas!"<<endl;
                ficha+=cFicha;
            }
            else
            {
            cout<<"No ganaste nada\nSuerte para la proxima!"<<endl;
            }
        }
}
void Jugador::Casino3()
{
    srand(time(0));
    int ruleta;
    cout<<"\nRuleta de la fortuna"<<endl;
    cout<<"\nFichas: "<<ficha;
    cout<<"\nCuantas fichas quieres apostar?"<<endl;
    cin>>cFicha;
    if(cFicha>ficha)
        {
            cout<<"No tienes dicha cantidad de fichas!"<<endl;
        }
    else
        {
            ficha-=cFicha;
            cout<<"Presiona Enter para tirar de la ruleta!"<<endl;
            cin.get();
            cin.get();
            ruleta=rand()%10+1;

            if(ruleta==1)
            {
                cFicha*=0;
                cout<<"Ganaste "<<cFicha<<" fichas!"<<endl;
                ficha+=cFicha;
            }
            else if(ruleta==2)
            {
                cFicha*=0.5;
                cout<<"Ganaste "<<cFicha<<" fichas!"<<endl;
                ficha+=cFicha;
            }
            else if(ruleta==3)
            {
                cFicha*=1;
                cout<<"Ganaste "<<cFicha<<" fichas!"<<endl;
                ficha+=cFicha;
            }
            else if(ruleta==4)
            {
                cFicha*=1.5;
                cout<<"Ganaste "<<cFicha<<" fichas!"<<endl;
                ficha+=cFicha;
            }
            else if(ruleta==5)
            {
                cFicha*=1.5;
                cout<<"Ganaste "<<cFicha<<" fichas!"<<endl;
                ficha+=cFicha;
            }
            else if(ruleta==6)
            {
                cFicha*=1.5;
                cout<<"Ganaste "<<cFicha<<" fichas!"<<endl;
                ficha+=cFicha;
            }
            else if(ruleta==7)
            {
                cFicha*=2;
                cout<<"Ganaste "<<cFicha<<" fichas!"<<endl;
                ficha+=cFicha;
            }
            else if(ruleta==8)
            {
                cFicha*=2;
                cout<<"Ganaste "<<cFicha<<" fichas!"<<endl;
                ficha+=cFicha;
            }
            else if(ruleta==9)
            {
                cFicha*=3;
                cout<<"Ganaste "<<cFicha<<" fichas!"<<endl;
                ficha+=cFicha;
            }
            else if(ruleta==10)
            {
                cFicha*=5;
                cout<<"Ganaste "<<cFicha<<" fichas!"<<endl;
                ficha+=cFicha;
            }
        }
}

void Jugador::Casino4()
{
    int opcion;
    system("cls");
    cout<<"\nCajaMisteriosa"<<endl;
    cout<<"\nFichas: "<<ficha;
    cout<<"\nCual caja deseas usar? \n1-CajaDeBronce(100 fichas) \n2-CajaDePlata(500 fichas) \n3-CajaDeOro(1000 fichas) \n4-CajaDeDiamante(10000 fichas) \n5-Regresar"<<endl;
    cin>>opcion;

    switch(opcion)
    {
        case 1:
            Caja1();
            cin.get();
            cin.get();
            Casino4();
            break;
        case 2:
            Caja2();
            cin.get();
            cin.get();
            Casino4();
            break;
        case 3:
            Caja3();
            cin.get();
            cin.get();
            Casino4();
            break;
        case 4:
           Caja4();
           cin.get();
           cin.get();
           Casino4();
            break;
        case 5:
            return;
            Decision2();
            break;
    }
}

void Jugador::Casino5()
{
    int dado1,dado2,dado3;
    srand(time(0));
    cout<<"\nDadoSuertudo"<<endl;
    cout<<"\nFichas: "<<ficha;
    cout<<"\nCuantas fichas quieres apostar?"<<endl;
    cin>>cFicha;

    if(cFicha>ficha)
        {
            cout<<"No tienes dicha cantidad de fichas!"<<endl;
        }
    else
        {
    ficha-=cFicha;
    cout<<"Presiona \"Enter\" para lanzar los dados\n";
    cin.get();
    cin.get();

    dado1 = rand()%6 + 1;
    cout<<"\nEl valor del primer dado es: "<<dado1;
    cin.get();

    dado2 = rand()%6 + 1;
    cout<<"\nEl valor del segundo dado es: "<<dado2;
    cin.get();

    dado3 = rand()%6 + 1;
    cout<<"\nEl valor del tercer dado es: "<<dado3 <<"\n";

    if(dado1==6 && dado2==6 && dado3==6)
    {
        cout<<"\n  -------\nExcelente!\n  -------\n"<<endl;
        cFicha*=3;
        cout<<"Ganaste "<<cFicha<<" fichas!"<<endl;
        ficha+=cFicha;
    }
    else if(dado1==6 && dado2==6 || dado1==6 && dado3==6 || dado2==6 && dado3==6)
    {
        cout<<"\n   ~~~~\nMuy bien!\n   ~~~~\n"<<endl;
        cFicha*=2;
        cout<<"Ganaste "<<cFicha<<" fichas!"<<endl;
        ficha+=cFicha;
    }
    else if(dado1==6 || dado2==6 || dado3==6)
    {
        cout<<"\n~Regular~\n"<<endl;
        cFicha*=1;
        cout<<"Ganaste "<<cFicha<<" fichas!"<<endl;
        ficha+=cFicha;
    }
    else
    {
        cout<<"\nPesimo"<<endl;
        cFicha*=0.5;
        cout<<"Ganaste "<<cFicha<<" fichas!"<<endl;
        ficha+=cFicha;
    }
    cin.get();
    cin.get();
        }
}

void Jugador::Fin()
{
    return;
}

int main()
{
    system("color f0");

    Jugador play;

    cout<<"\tBienvenido al casino \"I\""<<endl;

    play.Entrar();

    getch();
    return 0;
}
