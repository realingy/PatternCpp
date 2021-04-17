#pragma once
#include <iostream>
using namespace std;

//����1:���������Խ�ɫ��Strategy��:���
class CookStrategy {
public:
	virtual void Show() = 0;
};

//����2�����������Խ�ɫ��Concrete Strategy��:����ͬ�Ĳ�
//Ϊ�׹�����׼��A��
class CookStrategyA : public CookStrategy {
public:
	void Show() {
		cout << "Ϊ�׹�����׼��A�ײ�" << endl;
	}
};

//Ϊ�ҹ�����׼��B��
class CookStrategyB : public CookStrategy {
public:
	void Show() {
		cout << "Ϊ�ҹ�����׼��B�ײ�" << endl;
	}
};

//Ϊ��������׼��C��
class CookStrategyC : public CookStrategy {
public:
	void Show() {
		cout << "Ϊ��������׼��C�ײ�" << endl;
	}
};

/*
//����1:���������Խ�ɫ��Strategy��:�ٻ���˾���д�����Ĺ�ͬ�ӿ�
class Strategy {
public:
	virtual void Show() = 0;
};

//����2�����������Խ�ɫ��Concrete Strategy��:ÿ�����վ���Ĵ����
//Ϊ����׼���Ĵ����A
class StrategyA : public Strategy {
public:
	void Show() {
		cout << "Ϊ����׼���Ĵ����A" << endl;
	}
};

//Ϊ�����׼���Ĵ����B
class StrategyB : public Strategy {
public:
	void Show() {
		cout << "Ϊ����׼���Ĵ����B" << endl;
	}
};

//Ϊ�����׼���Ĵ����C
class StrategyC : public Strategy {
public:
	void Show() {
		cout << "Ϊ����׼���Ĵ����C" << endl;
	}
};
*/


