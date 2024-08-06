#include "List.h"
#include <catch2/catch_test_macros.hpp>
#include <cstdint>


TEST_CASE("List Tests")
{
   List list;

   SECTION("Empty")
   {
      REQUIRE(list.Empty() == true);
   }

   SECTION("Size")
   {
      list.PushBack(1);
      list.PushBack(2);
      list.PushBack(3);

      REQUIRE(list.Size() == 3);
   }


   SECTION("Clear")
   {
      list.Clear();

      REQUIRE(list.Size() == 0);
      REQUIRE(list.Empty() == true);
   }
}
