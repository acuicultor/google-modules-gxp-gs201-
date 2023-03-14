/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Chip-dependent power configuration and states.
 *
 * Copyright (C) 2022 Google LLC
 */

#ifndef __AMALTHEA_CONFIG_PWR_STATE_H__
#define __AMALTHEA_CONFIG_PWR_STATE_H__

enum aur_power_rate {
	AUR_OFF_RATE = 0,
	AUR_UUD_RATE = 178000,
	AUR_SUD_RATE = 373000,
	AUR_UD_RATE = 750000,
	AUR_NOM_RATE = 1155000,
	AUR_READY_RATE = 178000,
	AUR_UUD_PLUS_RATE = 268000,
	AUR_SUD_PLUS_RATE = 560000,
	AUR_UD_PLUS_RATE = 975000,
};

enum aur_mem_int_rate {
	AUR_MEM_INT_MIN = 0,
	AUR_MEM_INT_VERY_LOW = 0,
	AUR_MEM_INT_LOW = 200000,
	AUR_MEM_INT_HIGH = 332000,
	AUR_MEM_INT_VERY_HIGH = 465000,
	AUR_MEM_INT_MAX = 533000,
};

enum aur_mem_mif_rate {
	AUR_MEM_MIF_MIN = 0,
	AUR_MEM_MIF_VERY_LOW = 0,
	AUR_MEM_MIF_LOW = 1014000,
	AUR_MEM_MIF_HIGH = 1352000,
	AUR_MEM_MIF_VERY_HIGH = 2028000,
	AUR_MEM_MIF_MAX = 3172000,
};

#endif /* __AMALTHEA_CONFIG_PWR_STATE_H__ */
