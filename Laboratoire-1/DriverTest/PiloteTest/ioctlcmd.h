
#ifndef IOCTLCMD_H
#define IOCTLCMD_H

#include <linux/ioctl.h>

#define SERIAL_MAGIC_NUM 'B'

#define SERIAL_SET_BAUD		_IOW(SERIAL_MAGIC_NUM, 0 ,int) 	//50 A 115200 

#define SERIAL_SET_DATASIZE	_IOW(SERIAL_MAGIC_NUM, 1 ,int) 	//5 A 8 BIT

#define SERIAL_SET_PARITY_EN	_IOW(SERIAL_MAGIC_NUM, 2 ,int) 	//0 PAS DE PARITE


#define SERIAL_SET_PARITY_SEL	_IOW(SERIAL_MAGIC_NUM, 3 ,int)	//1 PARITE IMPAIRE
								//2 PARITE PAIRE

#define SERIAL_SET_BUF_SIZE	_IOW(SERIAL_MAGIC_NUM, 4 ,int)	//
#define SERIAL_GET_BUF_SIZE	_IOR(SERIAL_MAGIC_NUM, 5 ,int)
#define SERIAL_SET_FIFO		_IOW(SERIAL_MAGIC_NUM, 6 ,int)


#define SERIAL_IOC_MAXNUMBER		10


#endif /* IOCTLCMD_H */
