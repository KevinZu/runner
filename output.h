#ifndef __OUTPUT_H__
#define __OUTPUT_H__


#include "list.h"

/*************************** function pointer****************************/

typedef int (*OUT_FUNC_T)(char *name,unsigned int out);



////////////////////////////// type define ///////////////////////////////

/******************************* output *********************************/
typedef struct output_node {
	char *name;
	
	OUT_FUNC_T out_func;
	struct hlist_node node;
}output_t;

struct io_head
{
	struct hlist_head head;
	
};



typedef struct output_ctrl {
	struct io_head *head_array;

	int (*add_output)(struct output_ctrl *,output_t *);
	int (*output)(char *name,unsigned int out);
} output_ctrl_t;



#endif

