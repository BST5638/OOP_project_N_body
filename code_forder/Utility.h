#pragma once
#include "Set.h"
class utility
{
public:
	int particle_number;		//particle�� ���� �����Ѵ�
	int set_number;				//set�� ���� �����Ѵ�
	int force_number;			//force�� ���� �����Ѵ�
	bool enable_gravity = false;		//gravity ��� ���θ� �����ϴ� ����

	void print_usage();			//memory ��뷮 ���
	void delete_particle();		//particle�� �޸𸮿��� ����
	void delete_force();		//force�� �޸𸮿��� ����
	void delete_all();			//�޷θ� �ʱ�ȭ
};