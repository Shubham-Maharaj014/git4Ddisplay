// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.1
// LVGL version: 8.3.6
// Project name: WordClock

#include "../ui.h"

// COMPONENT updatetimepanel

lv_obj_t * ui_updatetimepanel_create(lv_obj_t * comp_parent)
{

    lv_obj_t * cui_updatetimepanel;
    cui_updatetimepanel = lv_obj_create(comp_parent);
    lv_obj_set_width(cui_updatetimepanel, 400);
    lv_obj_set_height(cui_updatetimepanel, 50);
    lv_obj_set_x(cui_updatetimepanel, 0);
    lv_obj_set_y(cui_updatetimepanel, -107);
    lv_obj_set_align(cui_updatetimepanel, LV_ALIGN_CENTER);
    lv_obj_clear_flag(cui_updatetimepanel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_shadow_color(cui_updatetimepanel, lv_color_hex(0xD62121), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(cui_updatetimepanel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * cui_updatetimeswitch;
    cui_updatetimeswitch = lv_switch_create(cui_updatetimepanel);
    lv_obj_set_width(cui_updatetimeswitch, 80);
    lv_obj_set_height(cui_updatetimeswitch, 25);
    lv_obj_set_x(cui_updatetimeswitch, -148);
    lv_obj_set_y(cui_updatetimeswitch, -1);
    lv_obj_set_align(cui_updatetimeswitch, LV_ALIGN_CENTER);

    lv_obj_t * cui_Label7;
    cui_Label7 = lv_label_create(cui_updatetimepanel);
    lv_obj_set_width(cui_Label7, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(cui_Label7, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(cui_Label7, 8);
    lv_obj_set_y(cui_Label7, 1);
    lv_obj_set_align(cui_Label7, LV_ALIGN_CENTER);
    lv_label_set_text(cui_Label7, "Update Time Using NTP");
    lv_obj_set_style_text_font(cui_Label7, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t ** children = lv_mem_alloc(sizeof(lv_obj_t *) * _UI_COMP_UPDATETIMEPANEL_NUM);
    children[UI_COMP_UPDATETIMEPANEL_UPDATETIMEPANEL] = cui_updatetimepanel;
    children[UI_COMP_UPDATETIMEPANEL_UPDATETIMESWITCH] = cui_updatetimeswitch;
    children[UI_COMP_UPDATETIMEPANEL_LABEL7] = cui_Label7;
    lv_obj_add_event_cb(cui_updatetimepanel, get_component_child_event_cb, LV_EVENT_GET_COMP_CHILD, children);
    lv_obj_add_event_cb(cui_updatetimepanel, del_component_child_event_cb, LV_EVENT_DELETE, children);
    ui_comp_updatetimepanel_create_hook(cui_updatetimepanel);
    return cui_updatetimepanel;
}

