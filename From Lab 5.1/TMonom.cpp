#pragma once
#include<string>
#include<iostream>
#include"TDatValue.h"
#include"TMonom.h"

// �����������
TMonom::TMonom(float coeff_copy, int index_copy) {
	this->Coeff = coeff_copy;
	this->Index = index_copy;
}

// �������� �����
TDatValue* TMonom::GetCopy(void) {
	TDatValue* temp = new TMonom(this->Coeff, this->Index);
	return temp;
}

// ������� ����������� � ���� ������ (type = 1 - �� ������ ����������, type = 0 - ���)
std::string TMonom::ToStr(void) {
	std::string result = "";
	result += std::to_string(this->Coeff);
	result = result + "(" + std::to_string(this->Index) + ")";
	return result;
}

// ������ ���������
void TMonom::SetCoeff(float coeff_copy) {
	this->Coeff = coeff_copy;
}

// �������� ���������
float TMonom::GetCoeff(void) {
	return this->Coeff;
}

// ������ ������
void TMonom::SetIndex(int index_copy) {
	this->Index = index_copy;
}

// �������� ������
int TMonom::GetIndex(void) {
	return this->Index;
}

TMonom& TMonom::operator=(const TMonom& tm) {
	this->Coeff = tm.Coeff;
	this->Index = tm.Index;
	return *this;
}

bool TMonom::operator==(const TMonom& tm) {
	if (this->Index == tm.Index)
		return true;
	return false;
}

bool TMonom::operator<(const TMonom& tm) {
	if (this->Index < tm.Index)
		return true;
	else
		return false;
}

bool TMonom::operator>(const TMonom& tm) {
	if (this->Index > tm.Index)
		return true;
	return false;
}

std::ostream& operator<<(std::ostream& os, TMonom& tm) {
	os << tm.ToStr();
	return os;
}