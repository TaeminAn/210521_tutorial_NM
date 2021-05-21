/*----------------------------------------------------------------\
@ Numerical Methods by Young-Keun Kim - Handong Global University

Author           : Taemin An
Created          : 26-03-2018
Modified         : 06-04-2021
Language/ver     : C++ in MSVS2019

Description      : myNM.h
----------------------------------------------------------------*/

#ifndef		_MY_NM_H		// use either (#pragma once) or  (#ifndef ...#endif)
#define		_MY_NM_H

#include "myMatrix.h"
#include <math.h>


//================ ���� 1 (��ư, �̺й�) ===========================

extern double originfunc(double _x);

extern double func(double _x);

extern double dfunc(double _x);

extern double newtonRahpson(double _x0, double eps);

extern double bisection(double _a0, double _b0, double eps);

extern double hybrid(double _a0, double _b0, double _x0, double eps);

// ===========================���� 1 ���� =======================
// 
// ===========================���� 2 (���콺 ���� )���� ========================

extern void gaussElim(Matrix _a, Matrix _b, Matrix _u, Matrix _d);

// ===========================���� 2 ���� ========================

//============================���� 3 (LU ��������)���� ========================

extern void LUdecomp(Matrix _A, Matrix _L, Matrix _U, Matrix _P);

extern void forwardsub(Matrix _a, Matrix _b, Matrix _x);

extern void backsub(Matrix _a, Matrix _b, Matrix _x);

extern void  solveLU(Matrix _L, Matrix _U, Matrix _P, Matrix _B, Matrix _x);

extern Matrix inv(Matrix a, Matrix ainv);

// ===========================���� 3 ���� ==========================

// ==========================QR factorization ========================
extern Matrix QRfactor(Matrix _A);

extern Matrix findeigen(Matrix _A);


extern double F1(double x, double y);
extern double F2(double x, double y);
extern double dF11(double x, double y);
extern double dF12(double x, double y);
extern double dF21(double x, double y);
extern double dF22(double x, double y);

extern Matrix Fx(double x, double y);
extern Matrix Jx(double x, double y);

extern Matrix myfunc(double x, double y);

double cond(Matrix A);

#endif