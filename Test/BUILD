
load(
	"@platformio_rules//platformio:platformio.bzl",
	"platformio_project",
	"platformio_library"
)

platformio_project(
	name = "Test_Project",
	src = "src/main.cc" ,
	board = "megaatmega2560",
	framework = "arduino",
	platform = "atmelavr",
	deps = ["@LibraryTest//TestLibrary:Test-Library"]
)
