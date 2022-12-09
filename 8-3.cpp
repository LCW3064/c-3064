#include <iostream>
#include <string>
using namespace std;

class TV {
	int size;
public:
	TV();
	TV(int size) { this->size = size; }
	int getSize() { return size; }
};

class WideTV :public TV {
	bool videoln;
public:
	WideTV(int size, bool videoIn) :TV(size) {
		this->videoln = videoIn;
	}
	bool getVidedIn() { return videoln; }
};

class SmarTV : public WideTV {
	string ipAddr;
public:
	SmarTV(string ipAddr, int size) : WideTV(size, true) {
		this->ipAddr = ipAddr;
	}
	string getIpAddr() { return ipAddr; }
};

int main() {
	SmarTV htv("192.0.0.1", 32);
	cout << "size=" << htv.getSize() << endl;
	cout << "videoIn=" << boolalpha << htv.getVidedIn() << endl;
	cout << "IP=" << htv.getIpAddr() << endl;
}