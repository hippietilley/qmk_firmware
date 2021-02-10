#if defined PMW_3360
    #include "../pmw/pmw.h"
    #define config_optical_sensor_t config_pmw_t
    #define report_optical_sensor_t report_pmw_t
    #define optical_sensor_init pmw_init
    #define optical_sensor_get_config pmw_get_config
    #define optical_sensor_set_config pmw_set_config
    #define optical_sensor_get_report pmw_get_report
#else
    /* fallback stub */
    
    #include <stdint.h>

    typedef struct {
        uint16_t cpi;
    } config_optical_sensor_t;

    typedef struct {
        int16_t x;
        int16_t y;
    } report_optical_sensor_t;

    #define optical_sensor_init() { }
    #define optical_sensor_get_config() (config_optical_sensor_t) { }
    #define optical_sensor_set_config(config_optical_sensor_t) { }
    #define optical_sensor_get_report() (report_optical_sensor_t) { }
#endif
