#include<iostream>
#include<string>
#include<cstdlib>
#include"bmi_class.h"
using namespace std;

float BMI::value(float a,float b)
	{
		float c;
		c=b/((a/100)*(a/100));
		return c;
	}
string BMI::category(float c)
	{
	    string str;
		if(c<15)str="Very severely underweight";
		if(c<16.0&&c>=15.0)str="Severely underweight";
		if(c<18.5&&c>=16.0)str="Underweight";
		if(c<25&&c>=18.5)str="Normal";
		if(c<30&&c>=25)str="Overweight";
		if(c<35&&c>=30)str="Obese Class 1(Moderately obese)";
		if(c<40&&c>=35)str="Obese Class 2(Severely obese)";
		if(c>=40)str="Obese Class 3(Very severely obese)";	
		return str;
	}
