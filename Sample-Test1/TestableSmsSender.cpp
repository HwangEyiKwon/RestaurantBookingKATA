#include <iostream>
#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "../Project17/BookingScheduler.cpp"

class TestableSmsSender : public SmsSender {
public:
	void send(Schedule* schedule) override {
		std::cout << "�׽�Ʈ�� SmsSender class�� send�޼��� �����\n";
		sendMethodIsCalled = true;
	}

	bool isSendMethodIsCalled() {
		return sendMethodIsCalled;
	}

private:
	bool sendMethodIsCalled;
};