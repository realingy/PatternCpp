#pragma once

#include "Product.h"

//步骤1： 创建抽象工厂类，定义公共行为
class Factory {
public:
	virtual ProductFamily * ManufactureRobotArm() = 0; //生产机械臂产品
	virtual ProductFamily * ManufactureComputer() = 0; //生产计算机产品
};

//步骤5：创建具体工厂类（继承抽象工厂类），定义创建对应具体产品实例的方法
//A厂 — 生产A型机械臂+A型计算机产品
class FactoryA : public Factory {
public:
	ProductFamily * ManufactureRobotArm() {
		//生产A型机械臂产品
		return new RobotArmAType();
	}

	ProductFamily * ManufactureComputer() {
		//生产A型计算机产品
		return new ComputerAType();
	}
};

//新建B厂—用于生产B型产品
class FactoryB : public Factory {
public:
	ProductFamily * ManufactureRobotArm() {
		//生产B型机械臂产品
		return new RobotArmBType();
	}

	ProductFamily * ManufactureComputer() {
		//生产B型计算机产品
		return new ComputerBType();
	}
};

