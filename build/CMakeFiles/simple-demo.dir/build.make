# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.26.0/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.26.0/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/raul/projects/opencv/simple_demo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/raul/projects/opencv/simple_demo/build

# Include any dependencies generated for this target.
include CMakeFiles/simple-demo.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/simple-demo.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/simple-demo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/simple-demo.dir/flags.make

CMakeFiles/simple-demo.dir/project1.cpp.o: CMakeFiles/simple-demo.dir/flags.make
CMakeFiles/simple-demo.dir/project1.cpp.o: /Users/raul/projects/opencv/simple_demo/project1.cpp
CMakeFiles/simple-demo.dir/project1.cpp.o: CMakeFiles/simple-demo.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/raul/projects/opencv/simple_demo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/simple-demo.dir/project1.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/simple-demo.dir/project1.cpp.o -MF CMakeFiles/simple-demo.dir/project1.cpp.o.d -o CMakeFiles/simple-demo.dir/project1.cpp.o -c /Users/raul/projects/opencv/simple_demo/project1.cpp

CMakeFiles/simple-demo.dir/project1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/simple-demo.dir/project1.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/raul/projects/opencv/simple_demo/project1.cpp > CMakeFiles/simple-demo.dir/project1.cpp.i

CMakeFiles/simple-demo.dir/project1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/simple-demo.dir/project1.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/raul/projects/opencv/simple_demo/project1.cpp -o CMakeFiles/simple-demo.dir/project1.cpp.s

# Object files for target simple-demo
simple__demo_OBJECTS = \
"CMakeFiles/simple-demo.dir/project1.cpp.o"

# External object files for target simple-demo
simple__demo_EXTERNAL_OBJECTS =

simple-demo: CMakeFiles/simple-demo.dir/project1.cpp.o
simple-demo: CMakeFiles/simple-demo.dir/build.make
simple-demo: /opt/homebrew/lib/libopencv_gapi.4.7.0.dylib
simple-demo: /opt/homebrew/lib/libopencv_stitching.4.7.0.dylib
simple-demo: /opt/homebrew/lib/libopencv_alphamat.4.7.0.dylib
simple-demo: /opt/homebrew/lib/libopencv_aruco.4.7.0.dylib
simple-demo: /opt/homebrew/lib/libopencv_barcode.4.7.0.dylib
simple-demo: /opt/homebrew/lib/libopencv_bgsegm.4.7.0.dylib
simple-demo: /opt/homebrew/lib/libopencv_bioinspired.4.7.0.dylib
simple-demo: /opt/homebrew/lib/libopencv_ccalib.4.7.0.dylib
simple-demo: /opt/homebrew/lib/libopencv_dnn_objdetect.4.7.0.dylib
simple-demo: /opt/homebrew/lib/libopencv_dnn_superres.4.7.0.dylib
simple-demo: /opt/homebrew/lib/libopencv_dpm.4.7.0.dylib
simple-demo: /opt/homebrew/lib/libopencv_face.4.7.0.dylib
simple-demo: /opt/homebrew/lib/libopencv_freetype.4.7.0.dylib
simple-demo: /opt/homebrew/lib/libopencv_fuzzy.4.7.0.dylib
simple-demo: /opt/homebrew/lib/libopencv_hfs.4.7.0.dylib
simple-demo: /opt/homebrew/lib/libopencv_img_hash.4.7.0.dylib
simple-demo: /opt/homebrew/lib/libopencv_intensity_transform.4.7.0.dylib
simple-demo: /opt/homebrew/lib/libopencv_line_descriptor.4.7.0.dylib
simple-demo: /opt/homebrew/lib/libopencv_mcc.4.7.0.dylib
simple-demo: /opt/homebrew/lib/libopencv_quality.4.7.0.dylib
simple-demo: /opt/homebrew/lib/libopencv_rapid.4.7.0.dylib
simple-demo: /opt/homebrew/lib/libopencv_reg.4.7.0.dylib
simple-demo: /opt/homebrew/lib/libopencv_rgbd.4.7.0.dylib
simple-demo: /opt/homebrew/lib/libopencv_saliency.4.7.0.dylib
simple-demo: /opt/homebrew/lib/libopencv_sfm.4.7.0.dylib
simple-demo: /opt/homebrew/lib/libopencv_stereo.4.7.0.dylib
simple-demo: /opt/homebrew/lib/libopencv_structured_light.4.7.0.dylib
simple-demo: /opt/homebrew/lib/libopencv_superres.4.7.0.dylib
simple-demo: /opt/homebrew/lib/libopencv_surface_matching.4.7.0.dylib
simple-demo: /opt/homebrew/lib/libopencv_tracking.4.7.0.dylib
simple-demo: /opt/homebrew/lib/libopencv_videostab.4.7.0.dylib
simple-demo: /opt/homebrew/lib/libopencv_viz.4.7.0.dylib
simple-demo: /opt/homebrew/lib/libopencv_wechat_qrcode.4.7.0.dylib
simple-demo: /opt/homebrew/lib/libopencv_xfeatures2d.4.7.0.dylib
simple-demo: /opt/homebrew/lib/libopencv_xobjdetect.4.7.0.dylib
simple-demo: /opt/homebrew/lib/libopencv_xphoto.4.7.0.dylib
simple-demo: /opt/homebrew/lib/libopencv_shape.4.7.0.dylib
simple-demo: /opt/homebrew/lib/libopencv_highgui.4.7.0.dylib
simple-demo: /opt/homebrew/lib/libopencv_datasets.4.7.0.dylib
simple-demo: /opt/homebrew/lib/libopencv_plot.4.7.0.dylib
simple-demo: /opt/homebrew/lib/libopencv_text.4.7.0.dylib
simple-demo: /opt/homebrew/lib/libopencv_ml.4.7.0.dylib
simple-demo: /opt/homebrew/lib/libopencv_phase_unwrapping.4.7.0.dylib
simple-demo: /opt/homebrew/lib/libopencv_optflow.4.7.0.dylib
simple-demo: /opt/homebrew/lib/libopencv_ximgproc.4.7.0.dylib
simple-demo: /opt/homebrew/lib/libopencv_video.4.7.0.dylib
simple-demo: /opt/homebrew/lib/libopencv_videoio.4.7.0.dylib
simple-demo: /opt/homebrew/lib/libopencv_imgcodecs.4.7.0.dylib
simple-demo: /opt/homebrew/lib/libopencv_objdetect.4.7.0.dylib
simple-demo: /opt/homebrew/lib/libopencv_calib3d.4.7.0.dylib
simple-demo: /opt/homebrew/lib/libopencv_dnn.4.7.0.dylib
simple-demo: /opt/homebrew/lib/libopencv_features2d.4.7.0.dylib
simple-demo: /opt/homebrew/lib/libopencv_flann.4.7.0.dylib
simple-demo: /opt/homebrew/lib/libopencv_photo.4.7.0.dylib
simple-demo: /opt/homebrew/lib/libopencv_imgproc.4.7.0.dylib
simple-demo: /opt/homebrew/lib/libopencv_core.4.7.0.dylib
simple-demo: CMakeFiles/simple-demo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/raul/projects/opencv/simple_demo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable simple-demo"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/simple-demo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/simple-demo.dir/build: simple-demo
.PHONY : CMakeFiles/simple-demo.dir/build

CMakeFiles/simple-demo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/simple-demo.dir/cmake_clean.cmake
.PHONY : CMakeFiles/simple-demo.dir/clean

CMakeFiles/simple-demo.dir/depend:
	cd /Users/raul/projects/opencv/simple_demo/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/raul/projects/opencv/simple_demo /Users/raul/projects/opencv/simple_demo /Users/raul/projects/opencv/simple_demo/build /Users/raul/projects/opencv/simple_demo/build /Users/raul/projects/opencv/simple_demo/build/CMakeFiles/simple-demo.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/simple-demo.dir/depend
