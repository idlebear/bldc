

#include "encoder/encoder_hwconf.h"

#include "encoder/encoders.h"

#include "ch.h"
#include "hal.h"
#include "stm32f4xx_conf.h"
#include "hw.h"
#include "mc_interface.h"
#include "utils.h"
#include <math.h>

#define ENCODERS_CONFIG_UNUSED 0
#define ENCODERS_INCREMENTAL_UNUSED {{ENCODERS_CONFIG_UNUSED}, {ENCODERS_CONFIG_UNUSED}}
#define ENCODERS_SPI_UNUSED {{ENCODERS_CONFIG_UNUSED}, {ENCODERS_CONFIG_UNUSED}, {ENCODERS_CONFIG_UNUSED}, {ENCODERS_CONFIG_UNUSED}}
#define ENCODERS_ABI_COUNTER_DEFAULT_VALUE 10000ul

 encoders_config_t conf_AS5047 = {
        ENCODERS_TYPE_AS504x,
        AS5047_SAMPLE_RATE_HZ,
        {//SPI
                {//NSS
                        HW_HALL_ENC_GPIO3, HW_HALL_ENC_PIN3
                },
                {//MISO
                        HW_HALL_ENC_GPIO2, HW_HALL_ENC_PIN2
                },
                {//MOSI
                        HW_SPI_PORT_MOSI, HW_SPI_PIN_MOSI
                },
                {//SCK
                        HW_HALL_ENC_GPIO1, HW_HALL_ENC_PIN1
                }
        },
        ENCODERS_CONFIG_UNUSED,
		ENCODERS_INCREMENTAL_UNUSED
};

 encoders_config_t conf_MT6816 = {
        ENCODERS_TYPE_MT6816,
        MT6816_SAMPLE_RATE_HZ,
        {//SPI
                {//NSS
                        HW_HALL_ENC_GPIO3, HW_HALL_ENC_PIN3
                },
                {//MISO
                        HW_HALL_ENC_GPIO2, HW_HALL_ENC_PIN2
                },
                {//MOSI
                        HW_SPI_PORT_MOSI, HW_SPI_PIN_MOSI
                },
                {//SCK
                        HW_HALL_ENC_GPIO1, HW_HALL_ENC_PIN1
                }
         },
	     ENCODERS_CONFIG_UNUSED,
		 ENCODERS_INCREMENTAL_UNUSED
};

 encoders_config_t conf_AD2S1205 = {
        ENCODERS_TYPE_AD2S1205_SPI,
        AD2S1205_SAMPLE_RATE_HZ,
        {//SPI
                {//NSS
                        HW_HALL_ENC_GPIO3, HW_HALL_ENC_PIN3
                },
                {//MISO
                        HW_HALL_ENC_GPIO2, HW_HALL_ENC_PIN2
                },
                {//MOSI
                        HW_SPI_PORT_MOSI, HW_SPI_PIN_MOSI
                },
                {//SCK
                        HW_HALL_ENC_GPIO1, HW_HALL_ENC_PIN1
                }
        },
	     ENCODERS_CONFIG_UNUSED,
		 ENCODERS_INCREMENTAL_UNUSED
};

 encoders_config_t conf_ABI = {
		 ENCODERS_TYPE_ABI,
		 ENCODERS_CONFIG_UNUSED,
		 ENCODERS_SPI_UNUSED,
		 ENCODERS_ABI_COUNTER_DEFAULT_VALUE,
		 {// INCREMENTAL PROTOCOL
				 {
						 HW_HALL_ENC_GPIO1, HW_HALL_ENC_PIN1
				 },
				 {
					 	 HW_HALL_ENC_GPIO2, HW_HALL_ENC_PIN2
				 }

		 }
 };

