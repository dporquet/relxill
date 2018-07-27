/*
   This file is part of the RELXILL model code.

   RELXILL is free software: you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   any later version.

   RELXILL is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
   GNU General Public License for more details.
   For a copy of the GNU General Public License see
   <http://www.gnu.org/licenses/>.

    Copyright 2018 Thomas Dauser, Remeis Observatory & ECAP
*/
#ifndef RELLP_H_
#define RELLP_H_

#include "relbase.h"
#include "relutility.h"


void calc_emis_profile(relParam* param, relParam* cached_param, relSysPar* sysPar, int* status);

void get_emis_jet(relParam* param, double* emis, double* del_emit, double* del_inc,
		double* re, int n_r, int* status);

void free_cached_lpTable(void);

typedef struct{
	double a;
	double height;
	double gamma;
	double rin;
	double rout;
	double* emis;
	int n_rad;
}lpParam;

#endif /* RELLP_H_ */
