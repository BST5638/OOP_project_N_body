#pragma once

class particle			//N_body_simulation���� particle�� ǥ��
{
protected:
	double location[2]; //particle�� ��ġ
	double velocity[2]; //particle�� �ӵ�
	double mass;		//particle�� ���� ����
	bool movavle;		//particle�� ������ ���θ� �����ϴ� boolean��

public:
	void Print_particle(); //particle object�� ������ ����ϴ� �Լ�
};