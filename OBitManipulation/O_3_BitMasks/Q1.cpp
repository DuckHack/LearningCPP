//
// Created by Andrei Kiryieuski on 15/11/2023.
//

#include <bitset>
#include <cstdint>
#include <iostream>

void runQ1() {
    [[maybe_unused]] constexpr std::uint8_t option_viewed{0x01};
    [[maybe_unused]] constexpr std::uint8_t option_edited{0x02};
    [[maybe_unused]] constexpr std::uint8_t option_favorited{0x04};
    [[maybe_unused]] constexpr std::uint8_t option_shared{0x08};
    [[maybe_unused]] constexpr std::uint8_t option_deleted{0x10};

    std::uint8_t myArticleFlags{option_favorited};
    //Add a line of code to set the article as viewed.
    myArticleFlags |= option_viewed;
    //Add a line of code to check if the article was deleted.
    std::cout << ((myArticleFlags & option_deleted) ? "Article was deleted" : "Article was not deleted") << std::endl;
    //Add a line of code to clear the article as a favorite.
    myArticleFlags &= ~option_favorited;
    std::cout << std::bitset<8>{myArticleFlags} << '\n';
}
