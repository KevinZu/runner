#include "module.h"



int motor_init(struct motor_ctrl *motor)
{
	motor->m_node->m_motor_module = &motor->module;
	
	return 0;
}


int cylinder_init(struct cylinder_ctrl *cylinder)
{
	cylinder->m_node->m_cylinder_module = &cylinder->module;

	return 0;
}


int carrier_init(struct carrier_ctrl *carrier)
{
	carrier->m_node->m_carrier_module = &carrier->module;

	return 0;
}


motor_ctrl_t g_motor_ctrl_1 = {

	.m_node = &g_runner_node_1
	.ctrl_module_init = motor_init;
};


motor_ctrl_t g_motor_ctrl_2 = {

	.m_node = &g_runner_node_2
	.ctrl_module_init = motor_init;

};



motor_ctrl_t g_motor_ctrl_3 = {

	.m_node = &g_runner_node_3
	.ctrl_module_init = motor_init;
};




cylinder_ctrl_t g_cylinder_ctrl_1 = {
	.m_node = &g_runner_node_1
	.ctrl_module_init = cylinder_init;
};


cylinder_ctrl_t g_cylinder_ctrl_2 = {
	.m_node = &g_runner_node_2
	.ctrl_module_init = cylinder_init;
};



cylinder_ctrl_t g_cylinder_ctrl_3 = {
	.m_node = &g_runner_node_3
	.ctrl_module_init = cylinder_init;
};




carrier_ctrl_t g_carrier_ctrl_1 = {
	.m_node = &g_runner_node_1
	.ctrl_module_init = carrier_init;
};

carrier_ctrl_t g_carrier_ctrl_2 = {
	.m_node = &g_runner_node_2
	.ctrl_module_init = carrier_init;
};

carrier_ctrl_t g_carrier_ctrl_3 = {
	.m_node = &g_runner_node_3
	.ctrl_module_init = carrier_init;
};




runner_ctrl_t g_runner_ctrl = {
	
};





