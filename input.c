#include <stdlib.h>
#include "input.h"


static int  ctrl_add_input(struct input_ctrl *ctrl,input_t *input)
{

	return 0;
}


static int ctrl_build_input(struct input_ctrl *ctrl) //只能初始化调用一次
{
	/************************ carrier processing completed ************************/
	input_t *input1 = malloc(sizeof(input_t));
	input1->name = "carrier_processing_completed";
	g_carrier_ctrl_1.ctrl_module_init();
	input1->module = &g_carrier_ctrl_1.module;
	
	ctrl->add_input(ctrl,input1);


	input_t *input2 = malloc(sizeof(input_t));
	input2->name = "carrier_processing_completed";
	g_carrier_ctrl_2.ctrl_module_init();
	input2->module = &g_carrier_ctrl_2.module;

	ctrl->add_input(ctrl,input2);


	input_t *input3 = malloc(sizeof(input_t));
	input2->name = "carrier_processing_completed";
	g_carrier_ctrl_3.ctrl_module_init();
	input2->module = &g_carrier_ctrl_3.module;

	ctrl->add_input(ctrl,input3);

	/************************** carrier release ************************************/

	input_t *input4 = malloc(sizeof(input_t));
	input4->name = "carrier_release";
	input4->module = &g_carrier_ctrl_1.module;
	
	ctrl->add_input(ctrl,input4);


	input_t *input5 = malloc(sizeof(input_t));
	input5->name = "carrier_release";
	input5->module = &g_carrier_ctrl_2.module;

	ctrl->add_input(ctrl,input5);


	input_t *input6 = malloc(sizeof(input_t));
	input6->name = "carrier_release";
	input6->module = &g_carrier_ctrl_3.module;

	ctrl->add_input(ctrl,input6);

	/************************* carrier in place **********************************/
	input_t *input7 = malloc(sizeof(input_t));
	input7->name = "carrier_in_place";
	input7->module = &g_carrier_ctrl_1.module;
	
	ctrl->add_input(ctrl,input7);


	input_t *input8 = malloc(sizeof(input_t));
	input8->name = "carrier_in_place";
	input8->module = &g_carrier_ctrl_2.module;

	ctrl->add_input(ctrl,input8);


	input_t *input9 = malloc(sizeof(input_t));
	input9->name = "carrier_in_place";
	input9->module = &g_carrier_ctrl_3.module;

	ctrl->add_input(ctrl,input9);

	/**************************** deceleration signal ***********************************/


	/************************* jacking carrier cylinder origin **************************/
	input_t *input13 = malloc(sizeof(input_t));
	input13->name = "jacking_carrier_cylinder_origin";
	g_cylinder_ctrl_1.ctrl_module_init();
	input13->module = &g_cylinder_ctrl_1.module;
	
	ctrl->add_input(ctrl,input13);


	input_t *input14 = malloc(sizeof(input_t));
	input14->name = "jacking_carrier_cylinder_origin";
	g_cylinder_ctrl_2.ctrl_module_init();
	input14->module = &g_cylinder_ctrl_2.module;

	ctrl->add_input(ctrl,input14);


	input_t *input15 = malloc(sizeof(input_t));
	input15->name = "jacking_carrier_cylinder_origin";
	g_cylinder_ctrl_3.ctrl_module_init();
	input15->module = &g_cylinder_ctrl_3.module;

	ctrl->add_input(ctrl,input15);
	
	/*********************** jacking carrier cylinder destination ***********************/
	input_t *input16 = malloc(sizeof(input_t));
	input16->name = "jacking_carrier_cylinder_destination";
	input16->module = &g_cylinder_ctrl_1.module;
	
	ctrl->add_input(ctrl,input16);


	input_t *input17 = malloc(sizeof(input_t));
	input17->name = "jacking_carrier_cylinder_destination";
	input17->module = &g_cylinder_ctrl_2.module;

	ctrl->add_input(ctrl,input17);


	input_t *input18 = malloc(sizeof(input_t));
	input18->name = "jacking_carrier_cylinder_destination";
	input18->module = &g_cylinder_ctrl_3.module;

	ctrl->add_input(ctrl,input18);
	
	/************************* block carrier cylinder origin ****************************/
	input_t *input19 = malloc(sizeof(input_t));
	input19->name = "block_carrier_cylinder_origin";
	input19->module = &g_cylinder_ctrl_1.module;
	
	ctrl->add_input(ctrl,input19);


	input_t *input20 = malloc(sizeof(input_t));
	input20->name = "block_carrier_cylinder_origin";
	input20->module = &g_cylinder_ctrl_2.module;

	ctrl->add_input(ctrl,input20);


	input_t *input21 = malloc(sizeof(input_t));
	input21->name = "block_carrier_cylinder_origin";
	input21->module = &g_cylinder_ctrl_3.module;

	ctrl->add_input(ctrl,input21);
	
	/************************ block carrier cylinder destination ************************/
	input_t *input22 = malloc(sizeof(input_t));
	input22->name = "block_carrier_cylinder_destination";
	input22->module = &g_cylinder_ctrl_1.module;
	
	ctrl->add_input(ctrl,input22);


	input_t *input23 = malloc(sizeof(input_t));
	input23->name = "block_carrier_cylinder_destination";
	input23->module = &g_cylinder_ctrl_2.module;

	ctrl->add_input(ctrl,input23);


	input_t *input24 = malloc(sizeof(input_t));
	input24->name = "block_carrier_cylinder_destination";
	input24->module = &g_cylinder_ctrl_3.module;

	ctrl->add_input(ctrl,input24);
	
	/******************************** motor alarm ***************************************/
	input_t *input25 = malloc(sizeof(input_t));
	input25->name = "motor_alarm";
	g_motor_ctrl_1.ctrl_module_init();
	input25->module = &g_motor_ctrl_1.module;
	
	ctrl->add_input(ctrl,input25);


	input_t *input26 = malloc(sizeof(input_t));
	input26->name = "motor_alarm";
	g_motor_ctrl_2.ctrl_module_init();
	input26->module = &g_motor_ctrl_2.module;

	ctrl->add_input(ctrl,input26);


	input_t *input27 = malloc(sizeof(input_t));
	input27->name = "motor_alarm";
	g_motor_ctrl_3.ctrl_module_init();
	input27->module = &g_motor_ctrl_3.module;

	ctrl->add_input(ctrl,input27);

	/******************************** runner start **************************************/

	
	return 0;
}


input_ctrl_t g_input_ctrl = {
	
	.build_input = ctrl_build_input,
	.add_input = ctrl_add_input
};

