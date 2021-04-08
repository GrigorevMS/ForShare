#pragma once
#include<iostream>
#include"TMonom.h"
#include"TDatList.h"
#include"TDatValue.h"

class TPolinom {

protected:
	TDatList* List; // ������

public:
	TPolinom(float Coeff_mas[] = nullptr, int Index_mas[] = nullptr, int monom_len = 0); // �����������
	TPolinom(const TPolinom& q); // ����������� �����������
	
	TPolinom operator+(TPolinom& q); // �������� ���������
	TPolinom operator-(TPolinom& q); // ��������� ���������
	TPolinom operator=(const TPolinom& q); // ������������

	friend std::ostream& operator<<(std::ostream& os, TPolinom& q);

};