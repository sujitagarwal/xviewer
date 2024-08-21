/* Xviewer - Application Facade (internal)
 *
 * Copyright (C) 2006-2012 The Free Software Foundation
 *
 * Author: Lucas Rocha <lucasr@gnome.org>
 *
 * Based on evince code (shell/ev-application.h) by:
 * 	- Martin Kretzschmar <martink@gnome.org>
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
 * 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef __XVIEWER_APPLICATION_INTERNAL_H__
#define __XVIEWER_APPLICATION_INTERNAL_H__

#include <glib.h>
#include <glib-object.h>

#include <libpeas/peas-extension-set.h>
#include <libxapp/xapp-dark-mode-manager.h>

#include "xviewer-application.h"
#include "xviewer-plugin-engine.h"
#include "xviewer-window.h"

G_BEGIN_DECLS

struct _XviewerApplicationPrivate {
	XviewerPluginEngine  *plugin_engine;

	XviewerStartupFlags   flags;

	GSettings        *ui_settings;

    XAppDarkModeManager *dark_mode_manager;

	PeasExtensionSet *extensions;
};

void              xviewer_application_screensaver_enable  (XviewerApplication *application);

void              xviewer_application_screensaver_disable (XviewerApplication *application);

G_END_DECLS

#endif /* __XVIEWER_APPLICATION_INTERNAL_H__ */
