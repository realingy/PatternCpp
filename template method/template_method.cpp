/*
ʵ���ſ�

������С��ϣ��ѧ���ˣ���˺���� & ���س�����
��ͻ�������˵ĳ��˲����е��ظ��е�ȴ����ܴ�
������������ô����¼����

����1�� ��������ģ��ṹ��Abstract Class�������˵Ĳ��裨��Abstruct.h������Base�ࣩ
����2�� ��������ģ�壨Concrete Class��,������˺���ˡ��͡����س����ġ��ľ��岽��(��Derived.h������������)
����3�� �����������

��󶨣�Ӧ�ó���Կ��෽���ĵ��ý�����󶨣�����ķ���ʵ�ֽ��磩
��󶨣����෽���Գ��򷽷��ĵ��ý�����󶨣����򷽷�ʵ�ֵĽ���
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
