#pragma once
#include "Strategy.h"
#include <string.h>

enum Country {
	CountryJia = 0,
	CountryYi,
	CountryBin,
};

// ����3�����廷����ɫ��Context��:�������������ģ����Ѵ�����������ͻ�
class Context_Waiter
{
	//����Ա��Ҫ֪���������ĸ����ҵģ����췽����
	//ʹ���÷���Ա���ݴ���Ĳ��������ң�Ϊ��ѡ���Ʒ
public:
	void Waiter(Country country)
	{
		switch (country) {
			//���ھ�ʹ�ô��ڴ����
		case CountryJia:
			strategy = new CookStrategyA();
			break;
			//����ھ�ʹ������ڴ����
		case CountryYi:
			strategy = new CookStrategyB();
			break;
			//ʥ���ھ�ʹ��ʥ���ڴ����
		case CountryBin:
			strategy = new CookStrategyC();
			break;
		}
	}

	//������ṩ��Ʒ
	void WaiterShow() {
		strategy->Show();
	}

private:
	CookStrategy *strategy; //���г���������ָ��

};

/*
enum Festival {
	FestivalSpring = 0,
	FestivalDragonBoat,
	FestivalMidautumn,
};

// ����3�����廷����ɫ��Context��:�������������ģ����Ѵ�����������ͻ�
class Context_SalesMan
{
	//��������Աʵ��ʱ��������Աʲô���գ����췽����
	//ʹ��������Ա���ݴ���Ĳ��������գ�ѡ������������ʹ��һ���򵥵Ĺ���ģʽ��
public:
	void SalesMan(Festival fes)
	{
		switch (fes) {
			//���ھ�ʹ�ô��ڴ����
		case FestivalSpring:
			strategy = new StrategyA();
			break;
			//����ھ�ʹ������ڴ����
		case FestivalMidautumn:
			strategy = new StrategyB();
			break;
			//ʥ���ھ�ʹ��ʥ���ڴ����
		case FestivalDragonBoat:
			strategy = new StrategyC();
			break;
		}
	}

	//��ͻ�չʾ�����
	void SalesManShow() {
		strategy->Show();
	}

private:
	Strategy *strategy; //���г���������ָ��

};
*/


