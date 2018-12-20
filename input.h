#ifndef __INPUT_H__
#define __INPUT_H__


#include "list.h"
#include "module.h"


////////////////////////////// type define ///////////////////////////////


/****************************** input **********************************/

typedef struct input_node {
	char *name;
	ctrl_module_t *module;
	
	struct hlist_node node;
}input_t;

typedef struct input_ctrl {
	struct io_head *head_array;

	int (*build_input)(struct input_ctrl *ctrl);
	int (*add_input)(struct input_ctrl *,input_t *);
	IN_CALLBACK_T (*get_callback_func)(char *name);
}input_ctrl_t;

#endif

