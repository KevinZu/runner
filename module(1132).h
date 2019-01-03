#ifndef __MODULE_H__
#define __MODULE_H__

#include "output.h"
#include "runner.h"


/*************************** function pointer****************************/

typedef int (*IN_CALLBACK_T)(char *name,unsigned int in);


/**************************** module ************************************/
typedef struct ctrl_module{
	output_ctrl_t *output;
	IN_CALLBACK_T callback;
} ctrl_module_t;


typedef struct motor_ctrl{

	ctrl_module_t module;
	runner_node_t *m_node;

	int (*ctrl_module_init)();
} motor_ctrl_t;


typedef struct cylinder_ctrl {
	ctrl_module_t module;
	runner_node_t *m_node;

	int (*ctrl_module_init)();
}cylinder_ctrl_t;


typedef struct runner_ctrl {

	ctrl_module_t module;
	runner_node_t *m_node;

	int (*ctrl_module_init)();
}runner_ctrl_t;


typedef struct carrier_ctrl {
	ctrl_module_t module;
	runner_node_t *m_node;

	int (*ctrl_module_init)();
}carrier_ctrl_t;

#endif

