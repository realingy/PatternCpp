#pragma once
#include "Strategy.h"
#include <string.h>

enum Country {
	CountryJia = 0,
	CountryYi,
	CountryBin,
};

// 步骤3：定义环境角色（Context）:用于连接上下文，即把促销活动推销给客户
class Context_Waiter
{
	//服务员需要知晓来人是哪个国家的（构造方法）
	//使得让服务员根据传入的参数（国家）为其选择菜品
public:
	void Waiter(Country country)
	{
		switch (country) {
			//春节就使用春节促销活动
		case CountryJia:
			strategy = new CookStrategyA();
			break;
			//中秋节就使用中秋节促销活动
		case CountryYi:
			strategy = new CookStrategyB();
			break;
			//圣诞节就使用圣诞节促销活动
		case CountryBin:
			strategy = new CookStrategyC();
			break;
		}
	}

	//向客人提供菜品
	void WaiterShow() {
		strategy->Show();
	}

private:
	CookStrategy *strategy; //持有抽象策略类的指针

};

/*
enum Festival {
	FestivalSpring = 0,
	FestivalDragonBoat,
	FestivalMidautumn,
};

// 步骤3：定义环境角色（Context）:用于连接上下文，即把促销活动推销给客户
class Context_SalesMan
{
	//生成销售员实例时告诉销售员什么节日（构造方法）
	//使得让销售员根据传入的参数（节日）选择促销活动（这里使用一个简单的工厂模式）
public:
	void SalesMan(Festival fes)
	{
		switch (fes) {
			//春节就使用春节促销活动
		case FestivalSpring:
			strategy = new StrategyA();
			break;
			//中秋节就使用中秋节促销活动
		case FestivalMidautumn:
			strategy = new StrategyB();
			break;
			//圣诞节就使用圣诞节促销活动
		case FestivalDragonBoat:
			strategy = new StrategyC();
			break;
		}
	}

	//向客户展示促销活动
	void SalesManShow() {
		strategy->Show();
	}

private:
	Strategy *strategy; //持有抽象策略类的指针

};
*/


