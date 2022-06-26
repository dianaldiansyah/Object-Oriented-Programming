#include <iostream>
#include <string>
using namespace std;
class Person {
	private:
    	int number;
    	string name;
    	string address;
    	int waterUsage;
	
	public:
    	void getData(int id, string nama, string alamat, int air) {
    		number = id;
    		name = nama;
    		address = alamat;
    		waterUsage = air;
    	}
    	
    	double calDebt() {
    		if (waterUsage <= 60) {
    			return waterUsage*2;
    		} else {
        		return (60*1.75)+((waterUsage-60)*1.5);
    		}
    	}
    	
    	double callId() {
    		return number;
    	}
    	
    	string callName() {
    		return name;
    	}
    	
    	string callAddress() {
    		return address;
    	}
    	
    	double callWaterUsage() {
    		return waterUsage;
    	}
};
	
int main() {
    Person p;
    p.getData(1, "John Doe", "Jl. Kemanggisan Ilir III No. 45", 62);
    cout << "Nomor Pelanggan = " << p.callId() << endl;
    cout << "Nama Pelanggan = " << p.callName() << endl;
    cout << "Alamat Pelanggan = " << p.callAddress() << endl;
    cout << "Penggunaan Gas = " << p.callWaterUsage() << "m^3" << endl;
    cout << "Jumlah Hutang = $" << p.calDebt() << endl;
}