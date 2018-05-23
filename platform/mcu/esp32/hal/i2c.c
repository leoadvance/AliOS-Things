/*
 * Copyright (C) 2015-2017 Alibaba Group Holding Limited
 */

#include <stdio.h>


#define i2c_dev_t aos_i2c_dev_t
#define i2c_config_t aos_i2c_config_t
#include <stdint.h>
#include <stddef.h>

#include <hal/soc/adc.h>
#include <hal/soc/i2c.h>
#include <hal/soc/interpt.h>
#undef i2c_dev_t
#undef i2c_config_t

#include <rom/ets_sys.h>
#include <driver/i2c.h>

#define I2C0_SCL_IO             26               /*!<gpio number for i2c slave clock  */
#define I2C0_SDA_IO             25               /*!<gpio number for i2c slave data */

#define I2C1_SCL_IO             27               /*!<gpio number for i2c slave clock  */
#define I2C1_SDA_IO             28               /*!<gpio number for i2c slave data */

#define DATA_LENGTH             64              /*!<Data buffer length for test buffer*/

#define I2C_SLAVE_TX_BUF_LEN       (2 * DATA_LENGTH)  /*!<I2C slave tx buffer size */
#define I2C_SLAVE_RX_BUF_LEN       (2 * DATA_LENGTH)  /*!<I2C slave rx buffer size */

int32_t hal_i2c_init(aos_i2c_dev_t *i2c)
{
    int32_t ret = 0;
    i2c_config_t conf;
    i2c_port_t i2c_port;

    if (i2c->config.mode == AOS_I2C_MODE_MASTER)
    {
        conf.mode = I2C_MODE_MASTER;
    }
    else
    {
        conf.mode = I2C_MODE_SLAVE;    
    }
    if (i2c->port == 0)
    {
        conf.sda_io_num = I2C0_SDA_IO;
        conf.scl_io_num = I2C0_SCL_IO;
        i2c_port        = I2C_NUM_0;
    }
    else
    {
        conf.sda_io_num = I2C1_SDA_IO;
        conf.scl_io_num = I2C1_SCL_IO; 
        i2c_port        = I2C_NUM_1;    
    }

    conf.sda_pullup_en = GPIO_PULLUP_ENABLE;   
    conf.scl_pullup_en = GPIO_PULLUP_ENABLE;

    conf.master.clk_speed = i2c->config.freq;

    i2c_param_config(i2c_port, &conf);

    if (conf.mode == I2C_MODE_MASTER)
    {
        i2c_driver_install(i2c_port, conf.mode, 0, 0, 0);
    }
    else
    {
        i2c_driver_install(i2c_port, conf.mode, I2C_SLAVE_TX_BUF_LEN, I2C_SLAVE_RX_BUF_LEN, 0);    
    }

    return ret;
}

int32_t hal_i2c_master_send(aos_i2c_dev_t *i2c, uint16_t dev_addr, const uint8_t *data,
                            uint16_t size, uint32_t timeout)
{
    int32_t ret = 0;

    return ret;
}

int32_t hal_i2c_master_recv(aos_i2c_dev_t *i2c, uint16_t dev_addr, uint8_t *data,
                            uint16_t size, uint32_t timeout)
{
    int32_t ret = 0;

    return ret;
}

int32_t hal_i2c_slave_send(aos_i2c_dev_t *i2c, const uint8_t *data, uint16_t size, uint32_t timeout)
{
    int32_t ret = 0;

    return ret;
}

int32_t hal_i2c_slave_recv(aos_i2c_dev_t *i2c, uint8_t *data, uint16_t size, uint32_t timeout)
{
    int32_t ret = 0;

    return ret;
}

int32_t hal_i2c_mem_write(aos_i2c_dev_t *i2c, uint16_t dev_addr, uint16_t mem_addr,
                          uint16_t mem_addr_size, const uint8_t *data, uint16_t size,
                          uint32_t timeout)
{
    int32_t ret = 0;

    return ret;
};

int32_t hal_i2c_mem_read(aos_i2c_dev_t *i2c, uint16_t dev_addr, uint16_t mem_addr,
                         uint16_t mem_addr_size, uint8_t *data, uint16_t size,
                         uint32_t timeout)
{
    int32_t ret = 0;

    return ret;
};

int32_t hal_i2c_finalize(aos_i2c_dev_t *i2c)
{
    int32_t ret = 0;
    ret = i2c_driver_delete(i2c->port);
    return ret;
}
