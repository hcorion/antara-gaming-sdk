/******************************************************************************
 * Copyright © 2013-2019 The Komodo Platform Developers.                      *
 *                                                                            *
 * See the AUTHORS, DEVELOPER-AGREEMENT and LICENSE files at                  *
 * the top-level directory of this distribution for the individual copyright  *
 * holder information and the developer policies on copyright and licensing.  *
 *                                                                            *
 * Unless otherwise agreed in a custom licensing agreement, no part of the    *
 * Komodo Platform software, including this file may be copied, modified,     *
 * propagated or distributed except according to the terms contained in the   *
 * LICENSE file                                                               *
 *                                                                            *
 * Removal or modification of this copyright notice is prohibited.            *
 *                                                                            *
 ******************************************************************************/

#pragma once

//! Dependencies Headers
#include <meta/sequence/list.hpp> ///< doom::meta::list

//! SDK Headers
#include "antara/gaming/transform/component.position.hpp"   ///< transform::position_2d
#include "antara/gaming/transform/component.properties.hpp" ///< transform::properties

namespace antara::gaming::transform
{
    using components_list = doom::meta::list<position_2d, properties>;
}