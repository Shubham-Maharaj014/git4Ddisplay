SET(SOURCES components/ui_comp_updatetimepanel.c
    components/ui_comp.c
    screens/ui_Screen1.c
    screens/ui_configscreen.c
    screens/ui_settingscreen.c
    ui.c
    components/ui_comp_hook.c
    ui_helpers.c)

add_library(ui ${SOURCES})
