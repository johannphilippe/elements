/*=============================================================================
   Copyright (c) 2022 Johann Philippe

   Distributed under the MIT License (https://opensource.org/licenses/MIT)
=============================================================================*/
#include <elements.hpp>

using namespace cycfi::elements;

// Main window background color
auto constexpr bkd_color = rgba(35, 35, 37, 255);
auto background = box(bkd_color);

auto make_color_line(std::string name, color c)
{
	return vtile(htile(
				label(name), 
				hspacer(50),
				align_right(hsize(300, rbox(c, 6)))
				), vspacer(10));
}

int main(int argc, char* argv[])
{
   app _app(argc, argv, "Color Palette", "com.cycfi.color-palette");
   window _win(_app.name());
   _win.on_close = [&_app]() { _app.stop(); };

   view view_(_win);

			  
   auto elem = vtile( 
	make_color_line("alice_blue", colors::alice_blue),
	make_color_line("antique_white", colors::antique_white),
	make_color_line("aquamarine", colors::aquamarine),
	make_color_line("azure", colors::azure),
	make_color_line("beige", colors::beige),
	make_color_line("bisque", colors::bisque),
	make_color_line("black", colors::black),
	make_color_line("blanched_almond", colors::blanched_almond),
	make_color_line("blue", colors::blue),
	make_color_line("blue_violet", colors::blue_violet),
	make_color_line("brown", colors::brown),
	make_color_line("burly_wood", colors::burly_wood),
	make_color_line("cadet_blue", colors::cadet_blue),
	make_color_line("chocolate", colors::chocolate),
	make_color_line("coral", colors::coral),
	make_color_line("cornflower_blue", colors::cornflower_blue),
	make_color_line("corn_silk", colors::corn_silk),
	make_color_line("cyan", colors::cyan),
	make_color_line("dark_goldenrod", colors::dark_goldenrod),
	make_color_line("dark_green", colors::dark_green),
	make_color_line("dark_khaki", colors::dark_khaki),
	make_color_line("dark_olive_green", colors::dark_olive_green),
	make_color_line("dark_orange", colors::dark_orange),
	make_color_line("dark_orchid", colors::dark_orchid),
	make_color_line("dark_salmon", colors::dark_salmon),
	make_color_line("dark_sea_green", colors::dark_sea_green),
	make_color_line("dark_slate_blue", colors::dark_slate_blue),
	make_color_line("dark_slate_gray", colors::dark_slate_gray),
	make_color_line("dark_turquoise", colors::dark_turquoise),
	make_color_line("dark_violet", colors::dark_violet),
	make_color_line("deep_pink", colors::deep_pink),
	make_color_line("deep_sky_blue", colors::deep_sky_blue),
	make_color_line("dim_gray", colors::dim_gray),
	make_color_line("dodger_blue", colors::dodger_blue),
	make_color_line("firebrick", colors::firebrick),
	make_color_line("floral_white", colors::floral_white),
	make_color_line("forest_green", colors::forest_green),
	make_color_line("gains_boro", colors::gains_boro),
	make_color_line("ghost_white", colors::ghost_white),
	make_color_line("gold", colors::gold),
	make_color_line("goldenrod", colors::goldenrod),
	make_color_line("green", colors::green),
	make_color_line("green_yellow", colors::green_yellow),
	make_color_line("honeydew", colors::honeydew),
	make_color_line("hot_pink", colors::hot_pink),
	make_color_line("indian_red", colors::indian_red),
	make_color_line("ivory", colors::ivory),
	make_color_line("khaki", colors::khaki),
	make_color_line("lavender", colors::lavender),
	make_color_line("lavender_blush", colors::lavender_blush),
	make_color_line("lawn_green", colors::lawn_green),
	make_color_line("lemon_chiffon", colors::lemon_chiffon),
	make_color_line("light_blue", colors::light_blue),
	make_color_line("light_coral", colors::light_coral),
	make_color_line("light_cyan", colors::light_cyan),
	make_color_line("light_goldenrod", colors::light_goldenrod),
	make_color_line("light_goldenrod_yellow", colors::light_goldenrod_yellow),
	make_color_line("light_gray", colors::light_gray),
	make_color_line("light_pink", colors::light_pink),
	make_color_line("light_salmon", colors::light_salmon),
	make_color_line("light_sea_green", colors::light_sea_green),
	make_color_line("light_sky_blue", colors::light_sky_blue),
	make_color_line("light_slate_blue", colors::light_slate_blue),
	make_color_line("light_slate_gray", colors::light_slate_gray),
	make_color_line("light_steel_blue", colors::light_steel_blue),
	make_color_line("light_yellow", colors::light_yellow),
	make_color_line("lime_green", colors::lime_green),
	make_color_line("linen", colors::linen),
	make_color_line("magenta", colors::magenta),
	make_color_line("maroon", colors::maroon),
	make_color_line("medium_aquamarine", colors::medium_aquamarine),
	make_color_line("medium_blue", colors::medium_blue),
	make_color_line("medium_forest_green", colors::medium_forest_green),
	make_color_line("medium_goldenrod", colors::medium_goldenrod),
	make_color_line("medium_orchid", colors::medium_orchid),
	make_color_line("medium_purple", colors::medium_purple),
	make_color_line("medium_sea_green", colors::medium_sea_green),
	make_color_line("medium_slate_blue", colors::medium_slate_blue),
	make_color_line("medium_spring_green", colors::medium_spring_green),
	make_color_line("medium_turquoise", colors::medium_turquoise),
	make_color_line("medium_violet_red", colors::medium_violet_red),
	make_color_line("midnight_blue", colors::midnight_blue),
	make_color_line("mint_cream", colors::mint_cream),
	make_color_line("misty_rose", colors::misty_rose),
	make_color_line("moccasin", colors::moccasin),
	make_color_line("navajo_white", colors::navajo_white),
	make_color_line("navy", colors::navy),
	make_color_line("navy_blue", colors::navy_blue),
	make_color_line("old_lace", colors::old_lace),
	make_color_line("olive_drab", colors::olive_drab),
	make_color_line("orange", colors::orange),
	make_color_line("orange_red", colors::orange_red),
	make_color_line("orchid", colors::orchid),
	make_color_line("pale_goldenrod", colors::pale_goldenrod),
	make_color_line("pale_green", colors::pale_green),
	make_color_line("pale_turquoise", colors::pale_turquoise),
	make_color_line("pale_violet_red", colors::pale_violet_red),
	make_color_line("papaya_whip", colors::papaya_whip),
	make_color_line("peach_puff", colors::peach_puff),
	make_color_line("peru", colors::peru),
	make_color_line("pink", colors::pink),
	make_color_line("plum", colors::plum),
	make_color_line("powder_blue", colors::powder_blue),
	make_color_line("purple", colors::purple),
	make_color_line("red", colors::red),
	make_color_line("rosy_brown", colors::rosy_brown),
	make_color_line("royal_blue", colors::royal_blue),
	make_color_line("saddle_brown", colors::saddle_brown),
	make_color_line("salmon", colors::salmon),
	make_color_line("sandy_brown", colors::sandy_brown),
	make_color_line("sea_green", colors::sea_green),
	make_color_line("sea_shell", colors::sea_shell),
	make_color_line("sienna", colors::sienna),
	make_color_line("sky_blue", colors::sky_blue),
	make_color_line("slate_blue", colors::slate_blue),
	make_color_line("slate_gray", colors::slate_gray),
	make_color_line("snow", colors::snow),
	make_color_line("spring_green", colors::spring_green),
	make_color_line("steel_blue", colors::steel_blue),
	make_color_line("tan", colors::tan),
	make_color_line("thistle", colors::thistle),
	make_color_line("tomato", colors::tomato),
	make_color_line("turquoise", colors::turquoise),
	make_color_line("violet", colors::violet),
	make_color_line("violet_red", colors::violet_red),
	make_color_line("wheat", colors::wheat),
	make_color_line("white", colors::white),
	make_color_line("white_smoke", colors::white_smoke),
	make_color_line("yellow", colors::yellow),
	make_color_line("yellow_green", colors::yellow_green)
		);

   view_.content(
		   margin({10, 10, 10, 10}, vscroller(right_margin(20, elem))),

      background     // Replace background with your main element,
                     // or keep it and add another layer on top of it.
   );

   _app.run();
   return 0;
}
