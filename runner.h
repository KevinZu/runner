#ifndef __RUNNER_H__
#define __RUNNER_H__


#define RUNNER_NODE_BUSY 1
#define RUNNER_NODE_IDLE 2
#define RUNNER_NODE_EXCEPTION 3



typedef struct runner_node {

	unsigned int node_status;
	struct runner_node *next;
	
}runner_node_t;


typedef struct runner_manager {
	runner_node_t *first_node;
	int (*add_runner_node)(runner_ctrl_t *node);
}runner_manager_t;

#endif

