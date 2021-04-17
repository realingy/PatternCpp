#pragma once
#include <iostream>
using namespace std;

//步骤1:定义抽象策略角色（Strategy）:烹饪
class CookStrategy {
public:
	virtual void Show() = 0;
};

//步骤2：定义具体策略角色（Concrete Strategy）:做不同的菜
//为甲国客人准备A菜
class CookStrategyA : public CookStrategy {
public:
	void Show() {
		cout << "为甲国客人准备A套餐" << endl;
	}
};

//为乙国客人准备B菜
class CookStrategyB : public CookStrategy {
public:
	void Show() {
		cout << "为乙国客人准备B套餐" << endl;
	}
};

//为丙国客人准备C菜
class CookStrategyC : public CookStrategy {
public:
	void Show() {
		cout << "为丙国客人准备C套餐" << endl;
	}
};

/*
//步骤1:定义抽象策略角色（Strategy）:百货公司所有促销活动的共同接口
class Strategy {
public:
	virtual void Show() = 0;
};

//步骤2：定义具体策略角色（Concrete Strategy）:每个节日具体的促销活动
//为春节准备的促销活动A
class StrategyA : public Strategy {
public:
	void Show() {
		cout << "为春节准备的促销活动A" << endl;
	}
};

//为中秋节准备的促销活动B
class StrategyB : public Strategy {
public:
	void Show() {
		cout << "为中秋准备的促销活动B" << endl;
	}
};

//为端午节准备的促销活动C
class StrategyC : public Strategy {
public:
	void Show() {
		cout << "为端午准备的促销活动C" << endl;
	}
};
*/


