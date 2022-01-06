/*=============================================================================
   Copyright (c) 2016-2020 Joel de Guzman

   Distributed under the MIT License [ https://opensource.org/licenses/MIT ]
=============================================================================*/
#include <elements/element/gallery/radio_button.hpp>

namespace cycfi { namespace elements
{
   namespace colors = artist::colors;

   void radio_button_element::draw(context const& ctx)
   {
      auto&       canvas_ = ctx.canvas;
      auto        canvas_state = canvas_.new_state();
      auto const& theme_ = get_theme();
      rect        box = ctx.bounds.move(15, 0);
      float       size = box.height();
      float       radius = size/2;
      float       dot_radius = radius/2.5;

      box.width(size);
      point center = center_point(box);
      auto  state = value();
      auto  value = state.value;
      auto  hilite = state.hilite;
      auto  tracking = state.tracking;;

      if (value || tracking)
      {
         color c1 = hilite? theme_.indicator_hilite_color : theme_.indicator_bright_color;
         if (tracking)
            c1 = c1.level(0.4);

         canvas_.begin_path();
         canvas_.fill_style(c1);
         canvas_.add_circle(circle(center, dot_radius));
         canvas_.fill();
      }

      auto line_width = theme_.controls_frame_stroke_width;
      color outline_color = hilite? theme_.frame_hilite_color : theme_.frame_color;
      canvas_.line_width(line_width);
      canvas_.begin_path();
      canvas_.add_circle(circle(center, radius-1));
      canvas_.stroke_style(outline_color);
      canvas_.stroke();

      // Pseudo glow
      auto glow_width = hilite? line_width*2 : line_width;
      canvas_.add_circle(circle(center, radius-(glow_width/3)));
      canvas_.line_width(glow_width);
      canvas_.stroke_style(outline_color.opacity(0.1));
      canvas_.stroke();

      canvas_.fill_style(theme_.label_font_color);
      canvas_.font(theme_.label_font);
      canvas_.text_align(canvas_.left | canvas_.middle);
      float cx = box.right + 10;
      float cy = ctx.bounds.top + (ctx.bounds.height() / 2);
      canvas_.fill_text(_text.c_str(), point{ cx, cy });
   }
}}
