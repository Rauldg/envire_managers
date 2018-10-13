/*
 *  Copyright 2018 DFKI GmbH Robotics Innovation Center
 *
 *  This file is part of the MARS simulation framework.
 *
 *  MARS is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License
 *  as published by the Free Software Foundation, either version 3
 *  of the License, or (at your option) any later version.
 *
 *  MARS is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *
 *   You should have received a copy of the GNU Lesser General Public License
 *   along with MARS.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * \file EnvireHeightMapLoader.hpp
 * \author Raul Dominguez
 * \brief Manages the loading of heightmaps into the envire graph
 * 
 */

#ifndef MARS_PLUGINS_ENVIRE_HEIGHTMAPLOADER_H
#define MARS_PLUGINS_ENVIRE_HEIGHTMAPLOADER_H

#ifdef _PRINT_HEADER_
    #warning "EnvireHeightMapLoader.hpp"
#endif

#include <envire_core/graph/EnvireGraph.hpp>
#include <envire_core/items/Item.hpp>

#include <mars/interfaces/sim/LoadCenter.h>

namespace mars {
  namespace plugins {
    namespace envire_managers {

    /**
     * The declaration of the Envire_HeightMapLoader class.
     */
    class EnvireHeightMapLoader : public interfaces::LoadHeightmapInterface {
    public:
      virtual void readPixelData(interfaces::terrainStruct *terrain) = 0;
    //private:

    };// end of EnvireHeightMapLoader

    }// end of namespace envire_managers
  } // end of namespace plugins
} // end of namespace mars

#endif  // JOINT_MANAGER_H
