#include "runner.h"




runner_node_t g_runner_node_3 = {
	.node_status = RUNNER_NODE_IDLE,
	.next = NULL
};


runner_node_t g_runner_node_2 = {
	.node_status = RUNNER_NODE_IDLE,
	.next = &g_runner_node_3;
};

runner_node_t g_runner_node_1 = {
	.node_status = RUNNER_NODE_IDLE,
	.next = &g_runner_node_2;
};


runner_manager_t g_runner_manager = {
	.first_node = &g_runner_node_1;

};


