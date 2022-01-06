
reg = /constexpr\scolor\s([a-zA-Z_]+)\s+=\srgb/

file = File.open("cols.txt")
str = file.read


outstr = "auto elem = vtile( \n"
str.scan(reg) {|match|
  outstr += "\tmake_color_line(\"#{match[0]}\", colors::#{match[0]}),\n"
}
outstr += ")\n"

puts outstr
