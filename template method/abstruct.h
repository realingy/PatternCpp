#pragma once

#include <iostream>
using namespace std;

//模板方法，用来控制炒菜的流程 （炒菜的流程是一样的可以做到复用）
class Base {
public:
	//声明为 不希望子类覆盖这个方法 
	void cookProcess() {
		//第一步：倒油
		pourOil();
		//第二步：热油
		HeatOil();
		//第三步：倒蔬菜
		pourVegetable();
		//第四步：倒调味料
		pourSauce();
		//第五步：翻炒
		fry();
		cout << endl;
	}

protected:
	//定义结构里哪些方法是所有过程都是一样的(可复用的)，哪些是需要子类进行实现的
	//第一步：倒油是一样的，所以直接实现
	void pourOil() {
		std::cout << "第一步：倒油" << endl;
	}

	//第二步：热油是一样的，所以直接实现
	void  HeatOil() {
		cout << "第二步：热油" << endl;
	}

	//第三步：倒蔬菜是不一样的（一个下包菜，一个是下菜心）
	//所以声明为虚方法，具体实现由子类进行覆盖
	virtual void  pourVegetable() = 0;

	//第四步：倒调味料是不一样的（一个下辣椒，一个是下蒜蓉）
	//所以声明为虚方法，具体实现由子类进行覆盖
	virtual void  pourSauce() = 0;

	//第五步：翻炒是一样的，所以直接实现
	void fry() {
		cout << "第五步：炒啊炒啊炒到熟啊" <<endl;
	}
};
