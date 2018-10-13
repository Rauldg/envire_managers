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

#include "EnvireHeightMapLoader.hpp"


namespace mars {
  namespace plugins {
    namespace envire_managers{

      void EnvireHeightMapLoader::readPixelData(interfaces::terrainStruct *terrain)
      {
        // The loading of HeightMaps is done by some other code.
        // It most likely does not load it in the envire graph
        std::cout << "[EnvireHeightMapLoader::readPixelData] FOO" << std::endl;
      }

    } // end of namespace envire_managers#
  } // end of namespace sim
} // end of namespace mars