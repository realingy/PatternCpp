#pragma once

#include "Product.h"

//����1�� �������󹤳��࣬���幫����Ϊ
class Factory {
public:
	virtual ProductFamily * ManufactureRobotArm() = 0; //������е�۲�Ʒ
	virtual ProductFamily * ManufactureComputer() = 0; //�����������Ʒ
};

//����5���������幤���ࣨ�̳г��󹤳��ࣩ�����崴����Ӧ�����Ʒʵ���ķ���
//A�� �� ����A�ͻ�е��+A�ͼ������Ʒ
class FactoryA : public Factory {
public:
	ProductFamily * ManufactureRobotArm() {
		//����A�ͻ�е�۲�Ʒ
		return new RobotArmAType();
	}

	ProductFamily * ManufactureComputer() {
		//����A�ͼ������Ʒ
		return new ComputerAType();
	}
};

//�½�B������������B�Ͳ�Ʒ
class FactoryB : public Factory {
public:
	ProductFamily * ManufactureRobotArm() {
		//����B�ͻ�е�۲�Ʒ
		return new RobotArmBType();
	}

	ProductFamily * ManufactureComputer() {
		//����B�ͼ������Ʒ
		return new ComputerBType();
	}
};

