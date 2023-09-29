#pragma once
#include "payment.h"
#include <iostream>
#include <string.h>
using namespace std;

payment::payment()
{
    name = "";
    surname = "";
    fatherName = "";
    staj = 0;
    monthWorkedDay = 0;
    salaryDobavka = 0;
    nalogSalary = 0;
    salaryPerDay = 0;
    fromSalaryMinus = 0;
    monthDay = 0;
}

payment::payment(string name_, string surname_, string fatherName_, double  salaryPerDay_, int staj_, double salaryDobavka_, int monthWorkedDay_, double nalogSalary_, int monthDay_)
{
    name = name_;
    surname = surname_;
    fatherName = fatherName_;
    salaryPerDay = salaryPerDay_;
    staj = staj_;
    monthWorkedDay = monthWorkedDay_;
    salaryDobavka = salaryDobavka_;
    nalogSalary = nalogSalary_;  
    monthDay = monthDay_; 
   
}

void payment::Print()
{
    cout << "Name: " << name << endl;
    cout << "Surname: " << surname << endl;
    cout << "FatherName: " << fatherName << endl;
    cout << "SalaryPerDay: " << salaryPerDay << " $" << endl;
    cout << "Staj: " << Staj() << " years" << endl;
    cout << "MonthWorkedDay: " << monthWorkedDay << endl;
    cout << "SalaryDobavka: " << salaryDobavka * 100 << " %" << endl;
    cout << "NalogSalary: " << nalogSalary * 100 << " %" << endl;
    cout << "Raw Salary: " << HowMuchSalary() << endl;
    cout << "Salary with dobavka : " << SalaryDobavka() << endl;
    cout << "Salary After Tax: " << HowMuchFinalSalary() << endl;
    cout << "MonthDay: " << monthDay << endl;


}

double payment::HowMuchSalary()
{
    double salary;
    salary = ((salaryPerDay * monthWorkedDay));
    return salary;
}

double payment::HowMuchFinalSalary()
{
    double salaryFinal;
    salaryFinal = (SalaryDobavka() - SalaryTax()- PensiaTax());
    return salaryFinal;
}

double payment::SalaryDobavka()
{
    int salaryDob;
    int buff2;
    buff2 = HowMuchSalary() * salaryDobavka;
    salaryDob = HowMuchSalary() + buff2;
    return salaryDob;
}

int payment::Staj()
{
    int staj_;
    staj_ = 2023 - staj;
    return staj_;
}
double payment::SalaryTax()
{
    double salaryTax;
    salaryTax = (HowMuchSalary() * nalogSalary);
    return salaryTax;
}

double payment::PensiaTax()
{
    double pensiaTax;
    pensiaTax = ((HowMuchSalary()) * 0.01);
    return pensiaTax;
}
