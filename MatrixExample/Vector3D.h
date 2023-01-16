#pragma once
#ifndef VECTOR_3D_H
#define VECTOR_3D_H

#include <iostream>
#include <fstream>

using namespace std;

class Vector3D
{
private:
	double x, y, z;
public:
	Vector3D() :x(0), y(0), z(0) {};
	Vector3D(double x, double y, double z) :x(x), y(y), z(z) {}
	double GetX() { return x; }
	double GetY() { return y; }
	double GetZ() { return z; }
	Vector3D operator+ (const Vector3D& v)
	{
		Vector3D res(*this);
		res.x += v.x;
		res.y += v.y;
		res.z += v.z;
		return res;
	}
	Vector3D operator-(const Vector3D& v)
	{
		Vector3D res(*this);
		res.x -= v.x;
		res.y -= v.y;
		res.z -= v.z;
		return res;
	}
	Vector3D operator* (int a)
	{
		Vector3D res(*this);
		res.x *= a;
		res.y *= a;
		res.z *= a;
		return res;
	}
	Vector3D operator*= (int a)
	{
		return (*this) * a;
	}
	bool operator==(const Vector3D& v)
	{
		return x == v.x && y == v.y && z == v.z;
	}
	bool operator!=(const Vector3D& v)
	{
		return x != v.x || y != v.y || z != v.z;
	}
	double operator * (const Vector3D& v)//��������� ������������ ��������
	{
		return x * v.x + y * v.y + z * v.z;
	}
	Vector3D operator % (const Vector3D& v)// ��������� �����������
	{
		Vector3D res;
		res.x = y * v.z - z * v.y;
		res.y = z * v.x - x * v.z;
		res.z = x * v.y - y * v.x;
		return res;
	}

	friend istream& operator >> (istream& fi, Vector3D& v)
	{
		fi >> v.x >> v.y >> v.z;
		return fi;
	}

	friend ostream& operator <<(ostream& fo, Vector3D& v)
	{
		fo << v.x << "\t" << v.y << "\t" << v.z;
		return fo;
	}

	double length()	//����� �������
	{
		double res = sqrt((*this) * (*this));
		return res;
	}
};


#endif VECTOR_#D_H
