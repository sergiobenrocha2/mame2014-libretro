// license:BSD-3-Clause
// copyright-holders:XXX
/**********************************************************************

    Electronika MC 1502 FDC device

    Copyright MESS Team.
    Visit http://mamedev.org for licensing and usage restrictions.

**********************************************************************/

#pragma once

#ifndef __MC1502_FDC__
#define __MC1502_FDC__

#include "emu.h"

#include "imagedev/flopdrv.h"
#include "machine/isa.h"
#include "machine/wd_fdc.h"

//**************************************************************************
//  TYPE DEFINITIONS
//**************************************************************************

class mc1502_fdc_device : public device_t,
	public device_isa8_card_interface
{
public:
	// construction/destruction
	mc1502_fdc_device(const machine_config &mconfig, const char *tag, device_t *owner, UINT32 clock);

	// optional information overrides
	virtual machine_config_constructor device_mconfig_additions() const;
	virtual const rom_entry *device_rom_region() const;

	DECLARE_FLOPPY_FORMATS( floppy_formats );
	TIMER_CALLBACK_MEMBER( motor_callback );


protected:
	// device-level overrides
	virtual void device_start();
	virtual void device_reset();

private:
	required_device<fd1793_t> m_fdc;
	int motor_on;
	emu_timer *motor_timer;

public:
	void mc1502_wd17xx_aux_w(UINT8 data);
	UINT8 mc1502_wd17xx_aux_r();
	UINT8 mc1502_wd17xx_drq_r();
	UINT8 mc1502_wd17xx_motor_r();
	void mc1502_fdc_irq_drq(bool state);

};


// device type definition
extern const device_type MC1502_FDC;


#endif