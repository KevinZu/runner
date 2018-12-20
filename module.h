#ifndef __MODULE_H__
#define __MODULE_H__


//#include "io.h"
#include "runner.h"


typedef struct ctrl_module{

	int (*out)(char *name,unsigned int out);	
	
} ctrl_module_t;


typedef struct motor_ctrl{

	ctrl_module_t *module;
	runner_node_t *m_node;

} motor_ctrl_t;


typedef struct cylinder_ctrl {
	ctrl_module_t *module;
	runner_node_t *m_node;
}cylinder_ctrl_t;


typedef struct runner_ctrl {

	ctrl_module_t *module;
	runner_node_t *m_node;
}runner_ctrl_t;

#endif

