
load(
	"@platformio_rules//platformio:platformio.bzl",
	"platformio_project",
	"platformio_library"
)

platformio_library(
	name = "Test",
	hdr = "src/test.h",
	src = "src/test.cc"
)

platformio_project(
	name = "Test_Project",
	src = "src/main.cc" ,
	board = "megaatmega2560",
	framework = "arduino",
	platform = "atmelavr",
	deps = [":Test"]
)
