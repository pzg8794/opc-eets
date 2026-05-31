/*  Lab Experiment #4 : main project file.
		(Cascaded Amplafier)
EET 223
Prof. Fiorillo
Garcia, Piter
Discription: This program will capute the values for Zinput, Zoutput, 
Av, and AVdB of an Amplifier. */

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <math.h> 
using namespace std;

float Ask_For_Resx();
float Ask_For_Resl();
float Ask_For_Voltage_Source();
float Ask_For_Voltage_input();
float Ask_For_Voltage_output();
float Ask_For_Voltage_Noload();

float Zinput(float Vin, float ES, float Rx);
float Zout(float Vnl, float Vl, float Rl);
float Gain_voltage(float Vo, float Vin);
float Gain_voltagedb(float Av);


void main()
{
							//Title:
	cout<<"\n\t \t   EET-223 Lab Experiment #4";
	    cout<<"\n\t\t\tCascade Amplifier";
							//Author:
		cout<<"\n\n\t\t\t\t\t\t Made by Piter Garcia\n\n";


float ES, Vin, Vo, Vnl, Zin, Zo, Rx, Rl, Av, AvdB; 
	
	Rx= Ask_For_Resx();
	Rl= Ask_For_Resl();
    ES=  Ask_For_Voltage_Source();
	Vin= Ask_For_Voltage_input();
	Vo= Ask_For_Voltage_output();
	Vnl= Ask_For_Voltage_Noload();


	cout << "\n\t"<<"Parameters"<<"\t"<<"Magnitud"<<"\t"<<"Units\n\n\t";

    Zin= Zinput(Vin,ES,Rx);
	cout<<"\n\tZinput=\t\t "<<Zin<<"\t Ohms\n ";
	Zo= Zout(Vnl,Vo,Rl);
	cout<<"\n\tZout=\t\t "<<Zo<<"\t Ohms\n ";
	Av= Gain_voltage(Vo,Vin);
	cout<<"\n\tAv= \t\t "<<Av<<"\t\n ";
	AvdB= Gain_voltagedb(Av);
	cout<<"\n\tAvdB= \t\t "<<AvdB<<"\t\t dB\n ";
}
float Ask_For_Resx()
{
	float Rx;
	cout<<"\n Please enter the value for the resistor Rx\n";
	cin>>Rx;
	return (Rx);
}

float Ask_For_Resl()
{
	float Rl;
	cout<<"\n Please enter the value for the resistor Rx\n";
	cin>>Rl;
	return (Rl);
}

float Ask_For_Voltage_Source()
{
	float Es;
	cout<<"\n Please enter the value of the voltage source\n";
	cin>>Es;
	return (Es);
}

float Ask_For_Voltage_input()
{
	float Vin;
	cout<<"\n Please enter the value of the voltage input\n";
	cin>>Vin;
	return(Vin);
}

float Ask_For_Voltage_output()
{
	float Vo;
	cout<<"\n Please enter the value of the voltage output\n";
	cin>>Vo;
	return(Vo);
}

float Ask_For_Voltage_Noload()
{
	float Vnl;
	cout<<"\n Please enter the value of the voltage noload\n";
	cin>>Vnl;
	return(Vnl);
}

float Zinput(float Vin, float ES, float Rx)
{	
	float Zin;
	Zin= (Vin /(ES-Vin))*Rx;
	cout.precision(3);
	return(Zin);
}

float Zout(float Vnl, float Vo, float Rl)

{	float Zo;
	Zo= ((Vnl - Vo)/ Vo)*Rl;
	cout.precision(3);
	return(Zo);
}

float Gain_voltage(float Vo, float Vin)
{	
	float Av;
	Av= Vo/Vin;
	cout.precision(3);
	return(Av);
}

float Gain_voltagedb(float Av)
{
	float AvdB;
	AvdB= 20*log10(Av);
	cout.precision(3);
	return (AvdB);
}