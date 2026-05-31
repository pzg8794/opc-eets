// STAGE-1.cpp : Cascade Amplifier.

/*  Lab Experiment #4 : main project file.
		(Cascaded Amplafier - Stage#1)
EET 223
Prof. Fiorillo
Garcia, Piter
Discription: This program will capute the values for Zinput, Zoutput, 
Av, and AVdB of an Amplifier. */

#include "stdafx.h"
#include <conio.h>
#include <iostream>
#include <math.h> 
#include <iomanip> 


using namespace std;

void main()

{
	// Imputs
	float ES, Vin, Vo, Vnl, Rx, Rl; 				

	cout<< "\n EET-222-Laboratory"<<"\t\t\t\t\t\t     "<<"Cascaded Amplifier\n";
	cout<< "\n Dr. J. Fiorillo"<<"\t\t\t\t\t\t  "<<"Piter Garcia\n";
	cout<< "\n Date: 11/5/2009"<<"\t\t\t\t\t\t"<<"Experiment # 4\n";
	cout<< "\n -----------------------------------------------------------------------------";
 	
	cout<< "\n Enter measured values of the following imputs Es, Vin, Vout, Vnoload\n along with the Rx and Rl values\n";


	cout<<"\n Please enter a value for the resistor Rx in ohms\n  ";
	cin>>Rx;

	cout<<"\n Please enter a value for the resistor RL in ohms\n  ";
	cin>>Rl;

	cout<<"\n Please enter a value of the Voltage Source\n  ";
	cin>>ES;
	
	cout<<"\n Please enter a value for the Input Voltage\n  ";
	cin>>Vin;
	
	cout<<"\n Please enter a value for the Output Voltage\n  ";
	cin>>Vo;
	
	cout<<"\n Please enter a value for the noload voltage\n  ";
	cin>>Vnl;
	
	// Outputs Formulas

	float Av;
	Av= Vo/Vin;
	cout.precision(3);	
		
	float AvdB;
	AvdB= 20*log10(Av);
	cout.precision(3);

	float Zin;
	Zin= (Vin /(ES-Vin))*Rx;
	cout.precision(3);
	
	float Zo;
	Zo= ((Vnl - Vo)/ Vo)*Rl;
	cout.precision(3);
		
	// Table Setting

	cout << "\n\n\n\t		Cascaded Amplifier Characteristics";
	cout <<"\n\t	   --------------------------------------------";
	
	cout << setw(24) << "\n\t\t       Parameter" << setw(6) << "\t" << "Magnitude" << setw(6)<< "\t" << "Units";
	cout << setw(24) << "\n\t\t       ---------" << setw(6) << "\t" << "---------" << setw(6)<< "\t" << "-----";

	cout << setw(24) << "\n\t\t\tRx" << setw(6) <<"\t\t" << setprecision(1) <<Rx<< setw(1) << "\t" << "ohms" << endl;

	cout << setw(24) << "\n\t\t\tRL" << setw(6) <<"\t\t" << setprecision(1) <<Rl<< setw(1) << "\t" << "ohms" << endl;

	cout << setw(24) <<"\n\t\t\tEs" << setw(6) <<"\t\t" << setprecision(4) <<ES<< setw(6) << "\t" << "volts" << endl;

	cout << setw(24) <<"\n\t\t\tVin\t" << setw(6) <<"\t" << setprecision(4) <<Vin<< setw(6) << "\t" << "volts" << endl;

	cout << setw(24) << "\n\t\t\tVout\t" << setw(6) <<"\t" << setprecision(4) <<Vo<< setw(6) << "\t" << "volts" << endl;

	cout << setw(24) << "\n\t\t\tVnoload\t" << setw(6) <<"\t" << setprecision(4) <<Vnl<< setw(6) << "\t" << "volts" << endl;
	
	cout << setw(24) <<"\n\t\t\tAv" << setw(6) <<"\t\t" << setprecision(4) <<Av<< setw(6) << "\t" << "---" << endl;

	cout << setw(24) << "\n\t\t\tAvdb\t" << setw(6) <<"\t" << setprecision(4) <<AvdB<< setw(6) << "\t" << "dB" << endl;

	cout << setw(24) << "\n\t\t\tZin\t" << setw(6) <<"\t" << setprecision(4) <<Zin<< setw(6) << "\t" << "ohms" << endl;

	cout << setw(24) << "\n\t\t\tZout\t" << setw(6) <<"\t" << setprecision(4) <<Zo<< setw(6) << "\t" << "ohms" << endl;
}