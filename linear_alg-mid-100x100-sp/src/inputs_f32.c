/*
(C) 2014 EEMBC(R).  All rights reserved.                            

All EEMBC Benchmark Software are products of EEMBC 
and are provided under the terms of the EEMBC Benchmark License Agreements.  
The EEMBC Benchmark Software are proprietary intellectual properties of EEMBC and its Members 
and is protected under all applicable laws, including all applicable copyright laws.  
If you received this EEMBC Benchmark Software without having 
a currently effective EEMBC Benchmark License Agreement, you must discontinue use. 
Please refer to LICENSE.md for the specific license agreement that pertains to this Benchmark Software.
*/

#include "th_lib.h"
#include "linpack.h"
static linpack_params in_data[]={
/* dataset 0 */
	{	101,100,10,0,0,
	NULL,NULL,NULL,NULL,
	NULL,
	{0,0,0x00000000,0x00800001}/*1.000000119209289551e+00*/,
	{0,0,0x00000000,0x00800001}/*1.000000119209289551e+00*/,
	{0,-17,0x00000000,0x00c60000}/*1.180171966552734375e-05*/,
	{0,-23,0x00000000,0x00800000}/*1.192092895507812500e-07*/,
	{0,0,0x00000000,0x00800000}/*1.000000000000000000e+00*/,
	{0,0,0x00000000,0x00800000}/*1.000000000000000000e+00*/,
	{0,-1,0x00000000,0x00fdda2b}/*9.916102290153503418e-01*/,
	0,0,
	0x00000fff,NULL,MIN_ACC_BITS_FP,
	0.0,0.0,0.0,0.0,0.0,0.0,0.0},
/* dataset 1 */
	{	101,100,10,73686179,0,
	NULL,NULL,NULL,NULL,
	NULL,
	{0,0,0x00000000,0x00800001}/*1.000000119209289551e+00*/,
	{0,0,0x00000000,0x00800000}/*1.000000000000000000e+00*/,
	{0,-17,0x00000000,0x00d44000}/*1.265108585357666016e-05*/,
	{0,-23,0x00000000,0x00800000}/*1.192092895507812500e-07*/,
	{0,0,0x00000000,0x00800000}/*1.000000000000000000e+00*/,
	{0,0,0x00000000,0x00800000}/*1.000000000000000000e+00*/,
	{0,0,0x00000000,0x008a09cf}/*1.078424334526062012e+00*/,
	0,0,
	0x00000fff,NULL,MIN_ACC_BITS_FP,
	0.0,0.0,0.0,0.0,0.0,0.0,0.0},
/* dataset 2 */
	{	722,721,2,73686179,0,
	NULL,NULL,NULL,NULL,
	NULL,
	{0,-1,0x00000000,0x00fffff2}/*9.999991655349731445e-01*/,
	{0,-1,0x00000000,0x00fffff5}/*9.999993443489074707e-01*/,
	{0,-11,0x00000000,0x00a48800}/*6.276369094848632812e-04*/,
	{0,-23,0x00000000,0x00800000}/*1.192092895507812500e-07*/,
	{0,0,0x00000000,0x00800000}/*1.000000000000000000e+00*/,
	{0,0,0x00000000,0x00800000}/*1.000000000000000000e+00*/,
	{0,2,0x00000000,0x00ed58da}/*7.417096138000488281e+00*/,
	0,0,
	0x00000fff,NULL,MIN_ACC_BITS_FP,
	0.0,0.0,0.0,0.0,0.0,0.0,0.0},
/* dataset 3 */
	{	1000,999,2,73686179,0,
	NULL,NULL,NULL,NULL,
	NULL,
	{0,-1,0x00000000,0x00fffff0}/*9.999990463256835938e-01*/,
	{0,-1,0x00000000,0x00ffffe8}/*9.999985694885253906e-01*/,
	{0,-11,0x00000000,0x00b50500}/*6.905347108840942383e-04*/,
	{0,-23,0x00000000,0x00800000}/*1.192092895507812500e-07*/,
	{0,0,0x00000000,0x00800000}/*1.000000000000000000e+00*/,
	{0,0,0x00000000,0x00800000}/*1.000000000000000000e+00*/,
	{0,2,0x00000000,0x00bc62bc}/*5.887052536010742188e+00*/,
	0,0,
	0x00000fff,NULL,MIN_ACC_BITS_FP,
	0.0,0.0,0.0,0.0,0.0,0.0,0.0},
/* dataset 4 */
	{	101,100,10,73686179,0,
	NULL,NULL,NULL,NULL,
	NULL,
	{0,0,0x00000000,0x00800001}/*1.000000119209289551e+00*/,
	{0,0,0x00000000,0x00800000}/*1.000000000000000000e+00*/,
	{0,-17,0x00000000,0x00d44000}/*1.265108585357666016e-05*/,
	{0,-23,0x00000000,0x00800000}/*1.192092895507812500e-07*/,
	{0,0,0x00000000,0x00800000}/*1.000000000000000000e+00*/,
	{0,0,0x00000000,0x00800000}/*1.000000000000000000e+00*/,
	{0,0,0x00000000,0x008a09cf}/*1.078424334526062012e+00*/,
	0,0,
	0x00000fff,NULL,MIN_ACC_BITS_FP,
	0.0,0.0,0.0,0.0,0.0,0.0,0.0},
/* dataset 5 */
	{	51,50,10,73686179,0,
	NULL,NULL,NULL,NULL,
	NULL,
	{0,0,0x00000000,0x00800003}/*1.000000357627868652e+00*/,
	{0,-1,0x00000000,0x00fffffd}/*9.999998211860656738e-01*/,
	{0,-19,0x00000000,0x00f46c00}/*3.642169758677482605e-06*/,
	{0,-23,0x00000000,0x00800000}/*1.192092895507812500e-07*/,
	{0,0,0x00000000,0x00800000}/*1.000000000000000000e+00*/,
	{0,0,0x00000000,0x00800000}/*1.000000000000000000e+00*/,
	{0,-1,0x00000000,0x009ef5e8}/*6.209397315979003906e-01*/,
	0,0,
	0x00000fff,NULL,MIN_ACC_BITS_FP,
	0.0,0.0,0.0,0.0,0.0,0.0,0.0}
}; //ref input data

void init_presets_linpack() {
	int idx;
	for (idx=0; idx<NUM_DATAS; idx++) {
		th_memcpy(&(presets_linpack[idx]),&(in_data[idx]),sizeof(linpack_params));
		presets_linpack[idx].ref_data=&(in_data[idx]);
	}
}

