#pragma once
#include <Vector3.h>
#include <Matrix4x4.h>
#include <Novice.h>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>
#include <time.h>
#define _USE_MATH_DEFINE
#include <assert.h>

//1.X軸回転行列
Matrix4x4 MakeRotateXMatrix(float radian);

//2.Y軸回転行列
Matrix4x4 MakeRotateYMatrix(float radian);

//3.Z軸回転行列
Matrix4x4 MakeRotateZMatrix(float radian);

// 行列の積
Matrix4x4 Multiply(const Matrix4x4& m1, const Matrix4x4& m2);

//結果の表示
static const int kRowHeight = 20;
static const int kColumnWidth = 60;

void VectorScreenPrint(int x, int y, Vector3& vector, const char* label);

void MatrixScreenPrintf(int x, int y, const Matrix4x4& matrix, const char* label);