#pragma once
#include "Abstruct.h"

//����˺���˵���
class BaoCai : public  Base
{
protected:
	void  pourVegetable() {
		cout << "������������˺���ˣ��¹����߲��ǰ���" << endl;
	}
	
	void  pourSauce() {
		cout << "������������˺���ˣ��¹��Ľ���������" << endl;
	}
};

//�����ز��ĵ���
class CaiXin : public  Base
{
protected:
	void  pourVegetable() {
		cout << "�������������ز��ģ��¹����߲��ǲ���" << endl;
	}

	void  pourSauce() {
		cout << "�������������ز��ģ��¹��Ľ���������" << endl;
	}
};
