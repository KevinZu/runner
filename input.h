#ifndef __INPUT_H__
#define __INPUT_H__


#include "list.h"
#include "module.h"

/*************************** function pointer****************************/

typedef int (*IN_CALLBACK_T)(char *name,unsigned int in);



////////////////////////////// type define ///////////////////////////////


/****************************** input **********************************/

typedef struct input_node {
	char *name;

	IN_CALLBACK_T in_callback_func;
	struct hlist_node node;
}input_t;

typedef struct input_ctrl {
	struct io_head *head_array;

	int (*add_input)(struct input_ctrl *,input_t *);
	IN_CALLBACK_T (*get_callback_func)(char *name);
}input_ctrl_t;

#endif

