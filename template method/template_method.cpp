/*
实例概况

背景：小明希望学炒菜：手撕包菜 & 蒜蓉炒菜心
冲突：两道菜的炒菜步骤有的重复有的却差异很大
解决方案：利用代码记录下来

步骤1： 创建抽象模板结构（Abstract Class）：炒菜的步骤（见Abstruct.h声明的Base类）
步骤2： 创建具体模板（Concrete Class）,“即手撕包菜”和“蒜蓉炒菜心”的具体步骤(见Derived.h声明的两个类)
步骤3： 创建子类对象

早绑定：应用程序对库类方法的调用叫做早绑定（库类的方法实现较早）
晚绑定：库类方法对程序方法的调用叫做晚绑定（程序方法实现的较晚）
*/

#include "Derived.h"
#include "Abstruct.h"

int main()
{
	Base *p1 = new BaoCai;
	Base *p2 = new CaiXin;

	p1->cookProcess();
	p2->cookProcess();

	delete p1;
	delete p2;
	p1 = NULL;
	p2 = NULL;
	system("pause");
	return 0;
}
