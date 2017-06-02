/* -*- Mode: C; tab-width: 4; indent-tabs-mode: t; c-basic-offset: 4 -*- */
/* NetworkManager -- Network link manager
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * Copyright (C) 2017 Red Hat, Inc.
 */

#ifndef __NETWORKMANAGER_SD_PASSWORD_AGENT_H__
#define __NETWORKMANAGER_SD_PASSWORD_AGENT_H__

#include "nm-connection.h"
#include "nm-agent.h"

#define NM_TYPE_SD_PASSWORD_AGENT            (nm_sd_password_agent_get_type ())
#define NM_SD_PASSWORD_AGENT(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), NM_TYPE_SD_PASSWORD_AGENT, NMSdPasswordAgent))
#define NM_SD_PASSWORD_AGENT_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass), NM_TYPE_SD_PASSWORD_AGENT, NMSdPasswordAgentClass))
#define NM_IS_SD_PASSWORD_AGENT(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), NM_TYPE_SD_PASSWORD_AGENT))
#define NM_IS_SD_PASSWORD_AGENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), NM_TYPE_SD_PASSWORD_AGENT))
#define NM_SD_PASSWORD_AGENT_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj), NM_TYPE_SD_PASSWORD_AGENT, NMSdPasswordAgentClass))

typedef struct _NMSdPasswordAgentClass NMSdPasswordAgentClass;

typedef struct _NMSdPasswordAgent        NMSdPasswordAgent;

GType nm_sd_password_agent_get_type (void);

NMSdPasswordAgent *nm_sd_password_agent_new (void);

#endif /* __NETWORKMANAGER_SD_PASSWORD_AGENT_H__ */