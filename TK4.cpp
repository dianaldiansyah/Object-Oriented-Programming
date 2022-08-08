#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>

using namespace std;

class Employee
{
   char name[255];
   int workingHours;
   float honor, overtime, empHonor;

    public:
        void employee_form(){
            static int increment;  
            increment = increment+1;  

            cout << "Data Ke-" << increment << endl;
            cout << "Nama Pegawai       : ";
            cin.ignore();
            cin.getline(name, 255);
            cout << "Jumlah Jam Kerja   : ";
            cin >> workingHours;
            cout << endl;
        }

        void employee_honor(){
            if (workingHours <= 8) {
                honor = 200000;
                overtime = 0;
            } else {
                honor = 200000;
                overtime = (workingHours - 8) * 25000;
            }

            empHonor += (honor+overtime);
        }

        void employee_display() {
            static int increment;  
            increment = increment+1; 

            cout << left << setw(5) << increment
                << left << setw(15) << name
                << left << setw(12) << honor
                << left << setw(20) << workingHours
                << left << setw(15) << overtime
                << left << setw(10) << (honor+overtime)
                << endl;
        }

        float employee_total_honor() {
            return empHonor;
        }
};

int main(){
    Employee emp[100];
    int total, i;
    char date[10];
   
    cout << "PT. Meriang Gembira" << endl << endl;
   
    cout << "Jumlah                     : ";
    cin >> total;
    cout << "Tanggal Input (dd/mm/yyyy) : ";
    cin >> date;

    cout << "-------------------------------------------------------" << endl;
   
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    for(i=0; i < total; i++) {
        emp[i].employee_form();
        emp[i].employee_honor();
    }

    cout << "\nPT. Meriang Gembira" << endl << endl;
    
    cout << "Tanggal : " << date << endl;  
    cout << "====================================================================================" << endl;
    cout << left << setw(5) << "No" 
        << left << setw(15) << "Nama Pegawai" 
        << left << setw(12) << "Honor" 
        << left << setw(20) << "Jumlah Jam Kerja"  
        << left << setw(15) << "Honor Lembur" 
        << left << setw(10) << "Total Honor" 
        << endl;
    cout << "====================================================================================" << endl;

    for(i=0; i < total; i++) {
        emp[i].employee_display();
    }

    cout << "Total Honor Pegawai Sebesar : " << emp->employee_total_honor() << endl; 
    return 0;
}