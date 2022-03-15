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
};

