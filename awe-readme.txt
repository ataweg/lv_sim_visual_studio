LVGL_Simulator                                            2023-08-29, A.Werner
------------------------------------------------------------------------------

cd /d F:\Projects\InternetOfThings\_Tools\LVGL_Simulator.dev

update LvglWindowsSimulator project files
-----------------------------------------

pushd F:\Projects\InternetOfThings\_Tools\LVGL_Simulator.dev\LvglWindowsSimulator
set ProjectFileUpdater="F:\Projects\Evaluation\C#\ProjectFileUpdater\bin\Release\net8.0\win-x64\publish\ProjectFileUpdater.exe"
set ProjectPath=LvglWindowsSimulator.vcxproj
set LvglRootPath="..\LvglPlatform\lvgl"

@echo ProjectFileUpdater : %ProjectFileUpdater%
@echo ProjectPath        : %ProjectPath%
@echo LvglRootPath       : %LvglRootPath%
cls&%ProjectFileUpdater%  %ProjectPath% %LvglRootPath%

remove HeaderPanel from WeatherStation.vcxproj, WeatherStation.vcxproj.filters

2024-09-04
----------
clone from https://github.com/ataweg/lv_sim_visual_studio.git
update ataweg lvgl from https://github.com/ataweg/lvgl.git

cd /d F:\Projects\InternetOfThings\_Tools\LVGL_Simulator.dev\LvglPlatform\lvgl

git remote -v
git remote set-url origin https://github.com/ataweg/lvgl.git
git remote add upstream https://github.com/lvgl/lvgl.git

git fetch upstream
git checkout master
git merge upstream/master
git status
git commit -m "merge lvgl/lvgl"
git push

------------------------------------------------------------------------------
https://github.com/lvgl/lv_port_pc_visual_studio
use refs/remotes/origin/master

cd /d F:\Projects\InternetOfThings\_Tools\
git clone --recurse-submodules https://github.com/lvgl/lv_port_pc_visual_studio.git LVGL_Simulator.dev
cd LVGL_Simulator.dev
git pull
git submodule update --init --checkout  --recursive

cd /d F:\Projects\InternetOfThings\_Tools\LVGL_Simulator.dev\LvglWindowsSimulator
mklink /J WeatherDisplay F:\Projects\InternetOfThings\Devices\Wifi-WeatherStation\Tools\LVGL_Simulator\WeatherDisplay.dev
dir WeatherDisplay

update files for my usage
   .\LvglWindowsSimulator\LvglWindowsSimulator.cpp
   .\LvglWindowsSimulator\lv_conf.h

   .\LvglPlatform\LVGL_Simulator.vcxproj.filters
   .\LvglPlatform\LVGL_Simulator.vcxproj

   .\LvglPlatform\lvgl\examples\widgets\lv_example_widgets.h

add files to
   .\LvglPlatform\lvgl\examples\widgets\keyboard
      font_montserrat_ger_14.c
      font_montserrat_ger_16.c
      lv_example_keyboard_2.c
      lv_example_keyboard_3.c

cd /d F:\Projects\InternetOfThings\_Tools\LVGL_Simulator.dev\LvglWindowsSimulator
mklink /J WeatherDisplay F:\Projects\InternetOfThings\Devices\Wifi-WeatherStation\Tools\LVGL_Simulator\WeatherDisplay.dev

$(MSBuildThisFileDirectory)\WeatherDisplay\cJSON2\src\;$(MSBuildThisFileDirectory)\WeatherDisplay\myAddons\;$(MSBuildThisFileDirectory)\WeatherDisplay\main\;$(MSBuildThisFileDirectory)\WeatherDisplay\components_ws\ws_fonts\include\;$(MSBuildThisFileDirectory)\WeatherDisplay\components_ws\ws_owm\include\;$(MSBuildThisFileDirectory)\WeatherDisplay\components_ws\ws_panels\include\;$(MSBuildThisFileDirectory)\WeatherDisplay\components_ws\ws_views\include\;

    <IncludePath>$(MSBuildThisFileDirectory)
$(MSBuildThisFileDirectory)\WeatherDisplay\cJSON2\src\
$(MSBuildThisFileDirectory)\WeatherDisplay\myAddons\
$(MSBuildThisFileDirectory)\WeatherDisplay\main\
$(MSBuildThisFileDirectory)\WeatherDisplay\components_ws\ws_fonts\include\
$(MSBuildThisFileDirectory)\WeatherDisplay\components_ws\ws_owm\include\
$(MSBuildThisFileDirectory)\WeatherDisplay\components_ws\ws_panels\include\
$(MSBuildThisFileDirectory)\WeatherDisplay\components_ws\ws_views\include\
$(MSBuildThisFileDirectory)\lvgl
$(IncludePath)</IncludePath>

    <IncludePath>$(MSBuildThisFileDirectory)
$(MSBuildThisFileDirectory)..\LvglPlatform\lvgl\
$(MSBuildThisFileDirectory)..\LvglPlatform\
$(IncludePath)</IncludePath>


rebuild all user fonts
----------------------


--------------------------------------------------------------------------------

code beautification
-------------------
using Artistic Style Version 3.0.1

#         -A1   Allman style formatting/indenting.     Broken braces.
#         -s3   Indent using 3 spaces per indent.
#         -c    Convert tabs to the appropriate number of spaces.
#         -D    Insert space padding around parenthesis on the inside only.
#         -S    Indent 'switch' blocks, so that the inner 'case XXX:' headers are indented in relation to the switch block.
#         -p    Insert space padding around operators.
#         -U    Remove unnecessary space padding around parenthesis. This can be used in combination with the 'pad' options above.
#         -L    Indent labels so that they appear one indent less than the current indentation level
#         --lineend=linux    OR  -z2
#         -xW   Indent preprocessor blocks at brace level 0.  Without this option the preprocessor block is not indented.
#         -xl   Attach braces to class inline function definitions.
#         -N    Indent the contents of namespace blocks.
#         -m2   indent at least two additional indents.
#         -O    Don't break blocks residing completely on one line.
#         -o    Don't break lines containing multiple statements into multiple single-statement lines.
#         -C    Indent 'class' blocks so that the entire block is indented.

# not used
#         -xj   Remove brackets from a bracketed one line conditional statements.

// on a windows system we use DOS lineendings CRLF
"C:\Program Files (x86)\AStyle\AStyle.exe" -A1 -s3 -c -D -S -p -U -z1 -xW -xl -xb -y -N -m2 -O -o -C -R *.c* *.h *.ino

del /s .\*.orig .\*.bak


--------------------------------------------------------------------------------

update repository github.com/ataweg
-----------------------------------

cd F:\working\GIT\ataweg\lvgl
git pull
git checkout master
git pull  https://github.com/lvgl/lvgl
   CONFLICT (content): Merge conflict in component.mk
   Auto-merging examples/arduino/LVGL_Arduino/LVGL_Arduino.ino
   CONFLICT (add/add): Merge conflict in examples/arduino/LVGL_Arduino/LVGL_Arduino.ino
   # fix conflicts
git merge --continue
git push -u https://github.com/ataweg/lvgl.git master


cd F:\working\GIT\ataweg\lv_sim_visual_studio
git pull
git branch work_LVGL.dev
git pull https://github.com/ataweg/lv_sim_visual_studio.git work_LVGL.dev
git submodule update --init --recursive
git push https://github.com/ataweg/lv_sim_visual_studio.git work_LVGL.dev


git remote -v
git remote set-url origin https://github.com/ataweg/lv_sim_visual_studio.git

# fix .gitmodules
git add .gitmodules
git commit -m "fix .gitmodules"
git push https://github.com/ataweg/lv_sim_visual_studio.git work_LVGL.dev
