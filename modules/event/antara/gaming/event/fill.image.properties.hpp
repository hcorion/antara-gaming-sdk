#include <utility>

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

#include <string>
#include "antara/gaming/math/vector.hpp"

namespace antara::gaming::event {
    struct fill_image_properties {
        fill_image_properties(std::string appeareance_, math::vec2u &size) noexcept : appearance(
                std::move(appeareance_)),
                                                                                      image_size(size) {

        }

        fill_image_properties(const fill_image_properties &) = default;

        fill_image_properties &operator=(const fill_image_properties &other) {
            this->appearance = other.appearance;
            this->image_size = other.image_size;
            return *this;
        }

        std::string appearance; //! texture id
        math::vec2u &image_size; //! to fill
    };
}