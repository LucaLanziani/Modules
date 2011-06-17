#ifndef _TERZO_H_
#define	_TERZO_H_
#include <stdlib.h>
#include <stdio.h>
#include "module.h"

#ifdef	__cplusplus
extern "C" {
#endif

typedef struct{
	double x;
} TERZO_t;

TERZO_t BASEMODULE_state;
data_spec_t TERZO_data_spec;
data_t TERZO_data;
range_t range;
data_value_spec_t TERZO_data_value_spec;


void TERZO_init();
void TERZO_run();
void TERZO_close();

#ifdef	__cplusplus
}
#endif

#endif	/* TEST_H */

