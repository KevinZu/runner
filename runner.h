#ifndef __RUNNER_H__
#define __RUNNER_H__


typedef struct runner_node {

	unsigned int node_status;
	struct runner_node *next;
	
}runner_node_t;


typedef struct runner_manager {
	runner_node_t *first_node;
	int (*add_runner_node)(runner_ctrl_t *node);
}runner_manager_t;

#endif

