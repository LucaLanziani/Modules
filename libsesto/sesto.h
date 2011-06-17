#ifndef _SESTO_H_
#define	_SESTO_H_
#include <stdlib.h>
#include <stdio.h>
#include "module.h"

#ifdef	__cplusplus
extern "C" {
#endif

typedef struct{
	double x;
} SESTO_t;

SESTO_t BASEMODULE_state;
data_spec_t SESTO_data_spec;
data_t SESTO_data;
range_t range;
data_value_spec_t SESTO_data_value_spec;


void SESTO_init();
void SESTO_run();
void SESTO_close();

#ifdef	__cplusplus
}
#endif

#endif	/* TEST_H */

