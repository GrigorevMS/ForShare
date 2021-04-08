#pragma once
#include<string>
#include<iostream>
#include"TDatValue.h"

class TMonom : public TDatValue {

protected:
	float Coeff; //��������� ������
	int Index; // ������ ( ������� �������� )

public:
	TMonom(float coeff_copy = 1, int index_copy = 0); // �����������
	virtual ~TMonom() {} // ����������

	virtual TDatValue* GetCopy(void); // �������� �����
	virtual std::string ToStr(void); // ������� ����������� � ���� ������ (type = 1 - �� ������ ����������, type = 0 - ���)

	void SetCoeff(float coeff_copy); // ������ ���������
	float GetCoeff(void); // �������� ���������
	void SetIndex(int index_copy); // ������ ������
	int GetIndex(void); // �������� ������

	TMonom& operator=(const TMonom& tm);
	bool operator==(const TMonom& tm);
	bool operator<(const TMonom& tm);
	bool operator>(const TMonom& tm);

	friend std::ostream& operator<<(std::ostream& os, TMonom& tm);
	friend class TPolinom;
};