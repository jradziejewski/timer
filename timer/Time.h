#pragma once
class Time
{
private: 
	int seconds = 0, hours = 0, minutes = 0;
public: 
	//Setters
	void setSeconds(int number);
	void setMinutes(int number);
	void setHours(int number);
	
	//Getters
	int getSeconds();
	int getMinutes();
	int getHours();


	//Methods
	void printTime();
	void refactorTime();
	void convertToSeconds();

	//Operator overloading
	Time operator + (Time& _newTime);
	Time operator += (int _newSeconds);

	//Relational operators
	bool operator == (Time& _time);
	bool operator != (Time& _time);
	bool operator < (Time& _time);
	bool operator > (Time& _time);
	bool operator >= (Time& _time);
	bool operator <= (Time& _time);
};


