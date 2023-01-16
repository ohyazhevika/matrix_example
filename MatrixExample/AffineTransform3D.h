#ifndef AFFINE_TRANSFORM_3D_H
#define AFFINE_TRANSFORM_3D_H

#include "Matrix.h"

Matrix<> Translation(double x, double y, double z)
{
	double T[16] = {
		1, 0, 0, x, 
		0, 1, 0, y, 
		0, 0, 1, z, 
		0, 0, 0, 1 };
	return Matrix<>(4, 4, T);
}

Matrix<> Identity()
{
	return Translation(0, 0, 0);
}

Matrix<> RotationX(double t)
{
	double
		c = cos(t),
		s = sin(t);
	double R[16] = {
		1, 0, 0, 0, 
		0, c, -s, 0, 
		0, s, c, 0, 
		0, 0, 0, 1 };
	return Matrix<>(4, 4, R);
}

Matrix<> RotationY(double t)
{
	double
		c = cos(t),
		s = sin(t);
	double R[16] = {
		c, 0, s, 0, 
		0, 1, 0, 0, 
		-s, 0, c, 0, 
		0, 0, 0, 1 };
	return Matrix<>(4, 4, R);
}

Matrix<> RotationZ(double t)
{
	double
		c = cos(t),
		s = sin(t);
	double R[16] = {
		c, -s, 0, 0,
		s, c, 0, 0,
		0, 0, 1, 0,
		0, 0, 0, 1 };
	return Matrix<>(4, 4, R);
}

Matrix<> RotationX(double c, double s)
{
	double cs = sqrt(c * c + s * s);
	c /= cs;
	s /= cs;
	double R[16] = {
		1, 0, 0, 0,
		0, c, -s, 0,
		0, s, c, 0,
		0, 0, 0, 1 };
	return Matrix<>(4, 4, R);
}

Matrix<> RotationY(double c, double s)
{
	double cs = sqrt(c * c + s * s);
	c /= cs;
	s /= cs;
	double R[16] = {
		c, 0, s, 0,
		0, 1, 0, 0,
		-s, 0, c, 0,
		0, 0, 0, 1 };
	return Matrix<>(4, 4, R);
}

Matrix<> RotationZ(double c, double s)
{
	double cs = sqrt(c * c + s * s);
	c /= cs;
	s /= cs;
	double R[16] = {
		c, -s, 0, 0,
		s, c, 0, 0,
		0, 0, 1, 0,
		0, 0, 0, 1 };
	return Matrix<>(4, 4, R);
}

Matrix<> Scaling(double kx, double ky, double kz)
{
	double S[16] = {
		kx, 0, 0, 0, 
		0, ky, 0, 0, 
		0, 0, kz, 0, 
		0, 0, 0, 1 };
	return Matrix<>(4, 4, S);
}

// Identity() - тождественное јѕ;
// RotationX(t), RotationY(t), RotationZ(t) - повороты вокруг координатных
// осей на угол t против часовой стрелки;
// RotationX(c, s), RotationY(c, s), RotationZ(c, s) - 
// повороты вокруг коордитнатных осей на угол, косинус и синус которого пропорциональны c и s соответственно
// Scaling(kx, ky, kz) - масштабирование вдоль координатных осей;

#endif AFFINE_TRANSFORM_3D_H
