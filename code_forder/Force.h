#pragma once

class force		//simulation���� ���� ��Ÿ���� Ŭ����
{
private:
	double x;	//x���� ��
	double y;	//y���� ��

public:
	void print_force();		//force�� ������ ����Ѵ�
	double get_force_x();	//x������ ���� ��ȯ�Ѵ�.
	double get_force_y();	//y������ ���� ��ȯ�Ѵ�.
};