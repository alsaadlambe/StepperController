#ifndef __ENCODER_H
#define __ENCODER_H

typedef enum
{
	state00=0,
	state01,
	state10,
	state11
}encoder_t;


void ScanEncoder2(void);
void ScanEncoder4(void);


#endif /* __ENCODER_H */
