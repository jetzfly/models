/*----------------------------------------------------------------------------
 * File:  assoc_unformal_D_class.c
 *
 * Class:       dog owner  (D)
 * Component:   assoc_unformal
 *
 * (C) Copyright 1998-2012 Mentor Graphics Corporation.  All rights reserved.
 *--------------------------------------------------------------------------*/

#include "assoc_unformal_sys_types.h"
#include "ARCH_bridge.h"
#include "LOG_bridge.h"
#include "NVS_bridge.h"
#include "PERSIST_bridge.h"
#include "assoc_unformal_classes.h"


/*
 * Statically allocate space for the instance population for this class.
 * Allocate space for the class instance and its attribute values.
 * Depending upon the collection scheme, allocate containoids (collection
 * nodes) for gathering instances into free and active extents.
 */
static Escher_SetElement_s assoc_unformal_D_container[ assoc_unformal_D_MAX_EXTENT_SIZE ];
static assoc_unformal_D assoc_unformal_D_instances[ assoc_unformal_D_MAX_EXTENT_SIZE ];
Escher_Extent_t pG_assoc_unformal_D_extent = {
  {0}, {0}, &assoc_unformal_D_container[ 0 ],
  (Escher_iHandle_t) &assoc_unformal_D_instances,
  sizeof( assoc_unformal_D ), 0, assoc_unformal_D_MAX_EXTENT_SIZE
  };


