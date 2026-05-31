// EEET222,Lab4.cpp : main project file.
// Adner Ramos
// EET-222-Lab
// Lab #4
// 11/5/2009

#include "stdafx.h"
#include <iostream>	// used for I/O
#include <iomanip> //needed to use setw
#include <cmath> 

using namespace std;  

void main()
{
	const float Rl= 10000;
	const float Rx= 10000;

    float Es, Vin, Vout, Vnl, Av, Zin, Zout, Avdb;

	cout<< "\n EET-222-Laboratory" << "\t\t\t\t\t\t" << " Experiment #4\n";
	cout<< "\n Dr. J. Fiorillo" << "\t\t\t\t\t" <<  "    Cascaded Amplifier\n";
	cout<< "\n 11/5/2009" << "\t\t\t\t\t\t\t" << "   Adner Ramos\n";
	cout<< "\n -------------------------------------------------------------------------------";
 	
	cout<< "\n Enter the value of Es, Vin, Vout, Vnoload at the prompt below \n";
	
	cout<< "\n Please enter the value of Es in V p-p\n";
	cin>>Es;
	cout<< "\n Please enter the value of Vin in V p-p\n";
	cin>>Vin;
	cout<< "\n Please enter the value of Vout in V p-p\n";
	cin>>Vout;
	cout<< "\n Please enter the value of Vnoload in V p-p\n";
	cin>>Vnl;

	
	Av=(Vout/Vin);

	Avdb= (20*log10(Av));
	
	Zin=(Vin/(Es-Vin))*Rx;
	
	Zout=((Vnl-Vout)/Vout)*Rl;

	
	cout << "\n\n\n		Cascaded Amplifier Characteristics";
	cout <<"\n     --------------------------------------------------";
	
	cout << setw(24) << "\n     Parameter" << setw(6) << "\t" << "Magnitude" << setw(6)<< "\t" << "Units";
	cout << setw(24) << "\n     ---------" << setw(6) << "\t" << "---------" << setw(6)<< "\t" << "-----";

	cout << setw(24) << "\n     Rl\t" << setw(6) <<"\t\t" << setprecision(5) << Rl << setw(6) << "\t" << "ohms" << endl;

	cout << setw(24) << "\n     Rx\t" << setw(6) <<"\t\t" << setprecision(5) << Rx << setw(6) << "\t" << "ohms" << endl;

	cout << setw(24) <<"\n     Es\t" << setw(6) <<"\t\t" << setprecision(4) << Es << setw(6) << "\t" << "volts" << endl;

	cout << setw(24) <<"\n     Vin\t" << setw(6) <<"\t" << setprecision(4) << Vin << setw(6) << "\t" << "volts" << endl;

	cout << setw(24) << "\n     Vout\t" << setw(6) <<"\t" << setprecision(5) << Vout << setw(6) << "\t" << "volts" << endl;

	cout << setw(24) << "\n     Vnoload\t" << setw(6) <<"\t" << setprecision(5) << Vnl << setw(6) << "\t" << "volts" << endl;
	
	cout << setw(24) <<"\n     Av\t" << setw(6) <<"\t\t" << setprecision(4) << Av << setw(6) << "\t" << "----" << endl;

	cout << setw(24) << "\n     Avdb\t" << setw(6) <<"\t" << setprecision(5) << Avdb << setw(6) << "\t" << "db" << endl;

	cout << setw(24) << "\n     Zin\t" << setw(6) <<"\t" << setprecision(4) << Zin << setw(6) << "\t" << "ohms" << endl;

	cout << setw(24) << "\n     Zout\t" << setw(6) <<"\t" << setprecision(5) << Zout << setw(6) << "\t" << "ohms" << endl;

	
    return;
}
