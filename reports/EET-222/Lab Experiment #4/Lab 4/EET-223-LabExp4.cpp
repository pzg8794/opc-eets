/*  Lab Experiment #4 : main project file.
		(Cascaded Amplafier)
EET 223
Prof. Fiorillo
Garcia, Piter
Discription: This program will capute the values for Zinput, Zoutput, 
Av, and AVdB of an Amplifier. */

#include <conio.h>
#include <iostream>
#include <math.h> 
#include <iomanip.h> 

using namespace std;


void main()
{
	float ES, Vin, Vo, Vnl, Rx, Rl; 				

	
	cout<< "\n EET-222-Laboratory" << "\t\t\t\t\t\t" << " Cascaded Amplifier\n";
	cout<< "\n Dr. J. Fiorillo" << "\t\t\t\t\t" <<  "    Piter Garcia\n";
	cout<< "\n 11/5/2009" << "\t\t\t\t\t\t\t" << "   Experiment #4\n";
	cout<< "\n -------------------------------------------------------------------------------";
 	
	cout<< "\n Enter the value of Es, Vin, Vout, Vnoload at the prompt below \n";

	cout<<"\n Please enter the value for the resistor Rx in ohms\n  ";
	cin>>Rx;
	return (Rx);

	cout<<"\n Please enter the value for the resistor RL in ohms\n  ";
	cin>>Rl;
	return (Rl);

	cout<<"\n Please enter the value of the Voltage Source p-p\n  ";
	cin>>Es;
	return (Es);

	cout<<"\n Please enter the value for the Input Voltage p-p\n  ";
	cin>>Vin;
	return(Vin);

	cout<<"\n Please enter the value for the Output Voltage\n  ";
	cin>>Vo;
	return(Vo);

	cout<<"\n Please enter the value for the noload voltage\n  ";
	cin>>Vnl;
	return(Vnl);

	float Zin;
	Zin= (Vin /(ES-Vin))*Rx;
	cout.precision(3);
	return(Zin);
	
	float Zo;
	Zo= ((Vnl - Vo)/ Vo)*Rl;
	cout.precision(3);
	return(Zo);

	float Av;
	Av= Vo/Vin;
	cout.precision(3);
	return(Av);
	
	
	float AvdB;
	AvdB= 20*log10(Av);
	cout.precision(3);
	return (AvdB);
	Av=(Vout/Vin);

	
	
	cout << "\n\n\n		Cascaded Amplifier Characteristics";
	cout <<"\n     --------------------------------------------------";
	
	cout << setw(24) << "\n     Parameter" << setw(6) << "\t" << "Magnitude" << setw(6)<< "\t" << "Units";
	cout << setw(24) << "\n     ---------" << setw(6) << "\t" << "---------" << setw(6)<< "\t" << "-----";

	cout << setw(24) << "\n     Rl\t" << setw(6) <<"\t\t" << setprecision(5) << Rl << setw(6) << "\t" << "ohms" << endl;

	cout << setw(24) << "\n     Rx\t" << setw(6) <<"\t\t" << setprecision(5) << Rx << setw(6) << "\t" << "ohms" << endl;

	cout << setw(24) <<"\n     Es\t" << setw(6) <<"\t\t" << setprecision(4) << Es << setw(6) << "\t" << "volts" << endl;

	cout << setw(24) <<"\n     Vin\t" << setw(6) <<"\t" << setprecision(4) << Vin << setw(6) << "\t" << "volts" << endl;

	cout << setw(24) << "\n     Vout\t" << setw(6) <<"\t" << setprecision(5) << Vo << setw(6) << "\t" << "volts" << endl;

	cout << setw(24) << "\n     Vnoload\t" << setw(6) <<"\t" << setprecision(5) << Vnl << setw(6) << "\t" << "volts" << endl;
	
	cout << setw(24) <<"\n     Av\t" << setw(6) <<"\t\t" << setprecision(4) << Av << setw(6) << "\t" << "----" << endl;

	cout << setw(24) << "\n     Avdb\t" << setw(6) <<"\t" << setprecision(5) << AvdB << setw(6) << "\t" << "db" << endl;

	cout << setw(24) << "\n     Zin\t" << setw(6) <<"\t" << setprecision(4) << Zin << setw(6) << "\t" << "ohms" << endl;

	cout << setw(24) << "\n     Zout\t" << setw(6) <<"\t" << setprecision(5) << Zout << setw(6) << "\t" << "ohms" << endl;