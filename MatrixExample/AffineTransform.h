#ifndef AFFINE_TRANSFORM_H
#define AFFINE_TRANSFORM_H

#include "Matrix.h"
Matrix<> Translation(double x, double y)
{
	double T[9] = {
		1, 0, x,
		0, 1, y,
		0, 0, 1};
	return Matrix<>(3, 3, T);
}

Matrix<> Identity()
{
	return Translation(0, 0);
}

Matrix<> Rotation(double t)
{
	double R[9] = {
		cos(t), -sin(t), 0,
		sin(t), cos(t), 0,
		0, 0, 1 };
	return Matrix<>(3, 3, R);
}

Matrix<> Rotation(double c, double s)
{
	double cs = sqrt(c * c + s * s);
	c /= cs;
	s /= cs;
	double R[9] = {
		c, -s, 0,
		s, c, 0,
		0, 0, 1 };
	return Matrix<>(3, 3, R);
}

Matrix<> Scaling(double kx, double ky)
{
	double S[9] = {
		kx, 0, 0,
		0, ky, 0,
		0, 0, 1 };
	return Matrix<>(3, 3, S);
}

Matrix<> MappingOX()
{
	return Scaling(1, -1);
}

Matrix<> MappingOY()
{
	return Scaling(-1, 1);
}

Matrix<> MappingO()
{
	return Scaling(-1, -1);
}

// ����� ��������� ����������� �������, ������������ ������� ������� ��:
// Identity() - ������������� ��;
// Rotation(t) - ������� �� ���� t;
// Rotation(c, s) - ������� �� ����, ������� � ����� �������� ��������������� ��������� c � s;
// Scaling(kx, ky) - ���������������;
// Mapping (��������� ���� ���������) - �� �������, ��� �������� ������ ��������� ����� ������������ ������� Scaling.

// � ���������� ������� ������������ ����������� ������� �� ������.
// �������������� ���� � ������ �������� �������� ������.
// ��������, ����� �������, ��������� ��������� �������,
// � ����������� ���������������� ��������� � �������������.

#endif AFFINE_TRANSFORM_H
