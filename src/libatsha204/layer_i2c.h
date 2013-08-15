#ifndef LAYER_I2C_H
#define LAYER_I2C_H

#include<stdbool.h>

void i2c_wait();
int i2c_wake(struct atsha_handle *handle, unsigned char **answer);
int i2c_idle(struct atsha_handle *handle);
int i2c_command(struct atsha_handle *handle, unsigned char *raw_packet, unsigned char **answer);

#endif //LAYER_I2C_H