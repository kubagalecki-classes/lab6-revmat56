#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > ret_v(people.size());

    // Twoja implementacja tutaj
    
    auto funktor =[](Human &y) {
        y.birthday();
        if (y.isMonster() == true)
        {
        return 'n';
        }
        else
        {
        return 'y';
        }
    };

    std::transform(people.rbegin(), people.rend(),ret_v.begin(),funktor);

    return ret_v;
}
