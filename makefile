bmi:bmi_class.o bmi.o
	g++ -o bmi bmi.o bmi_class.o

bmi_class.o:bmi_class.cpp bmi_class.h
	g++ -c bmi_class.cpp

bmi.o:bmi.cpp bmi_class.h
	g++ -c bmi.cpp
