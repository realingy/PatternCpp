#pragma once
#include <iostream>
using namespace std;

//����2�����������Ʒ���� �����幫���ӿ�
class ProductFamily {
public:
	virtual void Show() = 0;
};

//����3�����������Ʒ��
//��е�۳����Ʒ��
class ProductRobotArm : public ProductFamily {};

//����������Ʒ��
class ProductComputer : public ProductFamily {};

//����4�����������Ʒ�ࣨ�̳г����Ʒ�ࣩ�� ��������Ʒ��
//A�ͻ�е��
class RobotArmAType : public ProductRobotArm {	
public:
	void Show() {
		cout << "����A�ͻ�е��" << endl;
	}
};

//B�ͼ����
class ComputerBType : public ProductComputer {
public:
	void Show() {
		cout << "����B�ͼ����" << endl;
	}
};


//�����ӵ�A�ͼ������Ʒ������A���������������ƻ�
class ComputerAType : public ProductComputer {
public:
	void Show() {
		cout << "����A�ͼ����" << endl;
	}
};

//�����ӵ�B�ͻ�е�۲�Ʒ������B���������������ƻ�
class RobotArmBType : public ProductRobotArm {	
public:
	void Show() {
		cout << "����B�ͻ�е��" << endl;
	}
};

