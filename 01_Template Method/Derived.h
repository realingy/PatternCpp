#pragma once
#include "Abstruct.h"

//炒手撕包菜的类
class BaoCai : public  Base
{
protected:
	void  pourVegetable() {
		cout << "第三步：超手撕包菜：下锅的蔬菜是包菜" << endl;
	}
	
	void  pourSauce() {
		cout << "第三步：超手撕包菜：下锅的酱料是辣椒" << endl;
	}
};

//炒蒜蓉菜心的类
class CaiXin : public  Base
{
protected:
	void  pourVegetable() {
		cout << "第三步：炒蒜蓉菜心：下锅的蔬菜是菜心" << endl;
	}

	void  pourSauce() {
		cout << "第三步：炒蒜蓉菜心：下锅的酱料是蒜蓉" << endl;
	}
};
