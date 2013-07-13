#ifndef _TEST-MODULE_H_
#define	_TEST-MODULE_H_
#include <stdlib.h>
#include <stdio.h>
#include "module.h"

#ifdef	__cplusplus
extern "C" {
#endif

typedef struct{
	double x;
} TEST-MODULE_t;

TEST-MODULE_t TEST-MODULE_state;
data_spec_t TEST-MODULE_data_spec;
data_t TEST-MODULE_data;
range_t range;
data_value_spec_t TEST-MODULE_data_value_spec;


void TEST-MODULE_init();
void TEST-MODULE_run();
void TEST-MODULE_close();

#ifdef	__cplusplus
}
#endif

#endif	/* TEST_H */

