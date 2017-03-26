//
//  ItemType.cpp
//  CIS.279
//
//  Created by CIS on 3/22/17.
//  Copyright © 2017 Anthony Nash. All rights reserved.
//

#include "ItemType.hpp"


RelationType ComparedTo( ItemType Item )
{
    if (this < Item) { return LESS; }
    if (this > Item) { return GREATER; }
    if (this < Item) { return EQUAL; }
}
