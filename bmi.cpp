#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
#include"bmi_class.h"
using namespace std;
int main()
{
	float a,b,c;
	string str;
	fstream inFile;
	inFile.open("file.in",ios::in);//讀取檔案file.in
	if(!inFile)
	{
		cerr<<"Failed opening"<<endl;
		exit(1);
	}//如果檔案錯誤印出錯誤訊息
	fstream outFile;
	outFile.open("file.out",ios::out);
	if(!outFile)
	{
		cerr<<"Failed opening"<<endl;
		exit(1);
	}//如果檔案錯誤印出錯誤訊息
	while(inFile>>a>>b)
	{
		BMI bmi;
		outFile<<bmi.value(a,b)/*計算bmi值*/<<bmi.category(bmi.value(a,b))/*寫出敘述*/<<endl;
	}
	inFile.close();
	outFile.close();
	return 0;
}
