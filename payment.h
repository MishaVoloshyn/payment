#pragma once
#include <iostream>
#include <string>
using namespace std;
class payment 
{
private:
	string name;
	string surname;
	string fatherName;
	int staj;
	int monthWorkedDay;
	double salaryDobavka;
	double nalogSalary;
	double salaryPerDay;
	double fromSalaryMinus;
	int monthDay;
public:
	payment();
	payment(string name_, string surname_, string fatherName_, double oklad_, int staj_, double salaryDobavka_, int monthWorkedDay_, double nalogSalary_, int monthDay_);
	void Print();
	double HowMuchSalary();
	double HowMuchFinalSalary();
	double SalaryDobavka();
	int Staj();
	double SalaryTax();
	double PensiaTax();
};