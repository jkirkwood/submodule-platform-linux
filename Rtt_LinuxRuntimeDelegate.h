//////////////////////////////////////////////////////////////////////////////
//
// Copyright (C) 2018 Corona Labs Inc.
// Contact: support@coronalabs.com
//
// This file is part of the Corona game engine.
//
// Commercial License Usage
// Licensees holding valid commercial Corona licenses may use this file in
// accordance with the commercial license agreement between you and 
// Corona Labs Inc. For licensing terms and conditions please contact
// support@coronalabs.com or visit https://coronalabs.com/com-license
//
// GNU General Public License Usage
// Alternatively, this file may be used under the terms of the GNU General
// Public license version 3. The license is as published by the Free Software
// Foundation and appearing in the file LICENSE.GPL3 included in the packaging
// of this file. Please review the following information to ensure the GNU 
// General Public License requirements will
// be met: https://www.gnu.org/licenses/gpl-3.0.html
//
// For overview and more information on licensing please refer to README.md
//
//////////////////////////////////////////////////////////////////////////////

#pragma once

#include "Rtt_RuntimeDelegate.h"
#include "Rtt_DeviceOrientation.h"

namespace Rtt
{
	/// Delegate used to receive events from the Corona Runtime.
	/// This is done by assigning an instance of this class to the Runtime.SetDelegate() function.
	class LinuxRuntimeDelegate : public RuntimeDelegate
	{
	public:
		LinuxRuntimeDelegate();
		virtual ~LinuxRuntimeDelegate();

		virtual void DidInitLuaLibraries( const Runtime& sender ) const;
		virtual void WillLoadMain(const Runtime& sender) const;
		virtual void WillLoadConfig( const Runtime& sender, lua_State *L ) const;
		virtual void DidLoadConfig( const Runtime& sender, lua_State *L ) const;

		mutable int fContentWidth;
		mutable int fContentHeight;
		mutable int fFPS;
		DeviceOrientation::Type fOrientation;

	};
} // namespace Rtt

