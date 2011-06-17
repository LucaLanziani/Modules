#ifndef _QUINTO_H_
#define	_QUINTO_H_
#include <stdlib.h>
#include <stdio.h>
#include "module.h"

#ifdef	__cplusplus
extern "C" {
#endif

typedef struct{
	double x;
} QUINTO_t;

QUINTO_t BASEMODULE_state;
data_spec_t QUINTO_data_spec;
data_t QUINTO_data;
range_t range;
data_value_spec_t QUINTO_data_value_spec;


void QUINTO_init();
void QUINTO_run();
void QUINTO_close();

#ifdef	__cplusplus
}
#endif

#endif	/* TEST_H */

