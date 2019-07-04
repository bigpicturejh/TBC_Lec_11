#include <iostream>
using namespace std;

class USBDevice
{
private:
	long _id;

public:
	USBDevice(long id)
		:_id(id)
	{

	}

	long getID() { return _id; }
	void plugAndPlay() {}
};

class NetworkDevice
{
private:
	long _id;

public:
	NetworkDevice(long id)
		:_id(id)
	{

	}

	long getID() { return _id; }
	void networking() {}

};

//다중상속
class USBNetworkDevice : public USBDevice, public  NetworkDevice
{
public:
	USBNetworkDevice(long usb_id, long net_id)
		:USBDevice(usb_id), NetworkDevice(net_id)
	{}

};


int main()
{
	USBNetworkDevice my_device(3.14, 6.133);

	my_device.networking();
	my_device.plugAndPlay();


	//my_device.getID(); // 다중상속 받은 클래스에 동일한 함수명이 있기 때문에 모호성으로 인해 오류가 발생함. 아래와 같이 해결 가능
	my_device.USBDevice::getID();
	my_device.NetworkDevice::getID();
	return 0;
}

