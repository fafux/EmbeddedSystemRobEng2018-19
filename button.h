#ifndef BUTTON_H
#define	BUTTON_H

void __attribute__((__interrupt__, __auto_psv__)) _INT1Interrupt ();
void __attribute__((__interrupt__, __auto_psv__)) _INT0Interrupt ();

#endif	/* BUTTON_H */

