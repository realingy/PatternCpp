#pragma once
#include <iostream>
using namespace std;

//步骤2：创建抽象产品族类 ，定义公共接口
class ProductFamily {
public:
	virtual void Show() = 0;
};

//步骤3：创建抽象产品类
//机械臂抽象产品类
class ProductRobotArm : public ProductFamily {};

//计算机抽象产品类
class ProductComputer : public ProductFamily {};

//步骤4：创建具体产品类（继承抽象产品类）， 定义具体产品；
//A型机械臂
class RobotArmAType : public ProductRobotArm {	
public:
	void Show() {
		cout << "生产A型机械臂" << endl;
	}
};

//B型计算机
class ComputerBType : public ProductComputer {
public:
	void Show() {
		cout << "生产B型计算机" << endl;
	}
};


//新增加的A型计算机产品需求，由A厂负责新增生产计划
class ComputerAType : public ProductComputer {
public:
	void Show() {
		cout << "生产A型计算机" << endl;
	}
};

//新增加的B型机械臂产品需求，由B厂负责新增生产计划
class RobotArmBType : public ProductRobotArm {	
public:
	void Show() {
		cout << "生产B型机械臂" << endl;
	}
};

