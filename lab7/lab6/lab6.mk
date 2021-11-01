##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=lab6
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=/home/student/Documents/cs2040/projects/test
ProjectPath            :=/home/student/Documents/cs2040/projects/test/lab6
IntermediateDirectory  :=../build-$(ConfigurationName)/lab6
OutDir                 :=../build-$(ConfigurationName)/lab6
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=student
Date                   :=26/04/21
CodeLitePath           :=/home/student/.codelite
LinkerName             :=/usr/bin/g++
SharedObjectLinkerName :=/usr/bin/g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=../build-$(ConfigurationName)/bin/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++
CC       := /usr/bin/gcc
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=../build-$(ConfigurationName)/lab6/main.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/lab6/maze.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/lab6/room.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/lab6/bag.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/lab6/treasure.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/lab6/rogue.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/lab6/exit.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/lab6/teleporter.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/lab6/game_controller.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/lab6/key.cpp$(ObjectSuffix) \
	../build-$(ConfigurationName)/lab6/item.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/lab6/collection.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/lab6/.d $(Objects) 
	@mkdir -p "../build-$(ConfigurationName)/lab6"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@mkdir -p "../build-$(ConfigurationName)/lab6"
	@mkdir -p ""../build-$(ConfigurationName)/bin""

../build-$(ConfigurationName)/lab6/.d:
	@mkdir -p "../build-$(ConfigurationName)/lab6"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/lab6/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/lab6/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/student/Documents/cs2040/projects/test/lab6/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/lab6/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/lab6/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/lab6/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/lab6/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/lab6/main.cpp$(PreprocessSuffix) main.cpp

../build-$(ConfigurationName)/lab6/maze.cpp$(ObjectSuffix): maze.cpp ../build-$(ConfigurationName)/lab6/maze.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/student/Documents/cs2040/projects/test/lab6/maze.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/maze.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/lab6/maze.cpp$(DependSuffix): maze.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/lab6/maze.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/lab6/maze.cpp$(DependSuffix) -MM maze.cpp

../build-$(ConfigurationName)/lab6/maze.cpp$(PreprocessSuffix): maze.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/lab6/maze.cpp$(PreprocessSuffix) maze.cpp

../build-$(ConfigurationName)/lab6/room.cpp$(ObjectSuffix): room.cpp ../build-$(ConfigurationName)/lab6/room.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/student/Documents/cs2040/projects/test/lab6/room.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/room.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/lab6/room.cpp$(DependSuffix): room.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/lab6/room.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/lab6/room.cpp$(DependSuffix) -MM room.cpp

../build-$(ConfigurationName)/lab6/room.cpp$(PreprocessSuffix): room.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/lab6/room.cpp$(PreprocessSuffix) room.cpp

../build-$(ConfigurationName)/lab6/bag.cpp$(ObjectSuffix): bag.cpp ../build-$(ConfigurationName)/lab6/bag.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/student/Documents/cs2040/projects/test/lab6/bag.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/bag.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/lab6/bag.cpp$(DependSuffix): bag.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/lab6/bag.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/lab6/bag.cpp$(DependSuffix) -MM bag.cpp

../build-$(ConfigurationName)/lab6/bag.cpp$(PreprocessSuffix): bag.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/lab6/bag.cpp$(PreprocessSuffix) bag.cpp

../build-$(ConfigurationName)/lab6/treasure.cpp$(ObjectSuffix): treasure.cpp ../build-$(ConfigurationName)/lab6/treasure.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/student/Documents/cs2040/projects/test/lab6/treasure.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/treasure.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/lab6/treasure.cpp$(DependSuffix): treasure.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/lab6/treasure.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/lab6/treasure.cpp$(DependSuffix) -MM treasure.cpp

../build-$(ConfigurationName)/lab6/treasure.cpp$(PreprocessSuffix): treasure.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/lab6/treasure.cpp$(PreprocessSuffix) treasure.cpp

../build-$(ConfigurationName)/lab6/rogue.cpp$(ObjectSuffix): rogue.cpp ../build-$(ConfigurationName)/lab6/rogue.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/student/Documents/cs2040/projects/test/lab6/rogue.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/rogue.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/lab6/rogue.cpp$(DependSuffix): rogue.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/lab6/rogue.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/lab6/rogue.cpp$(DependSuffix) -MM rogue.cpp

../build-$(ConfigurationName)/lab6/rogue.cpp$(PreprocessSuffix): rogue.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/lab6/rogue.cpp$(PreprocessSuffix) rogue.cpp

../build-$(ConfigurationName)/lab6/exit.cpp$(ObjectSuffix): exit.cpp ../build-$(ConfigurationName)/lab6/exit.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/student/Documents/cs2040/projects/test/lab6/exit.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/exit.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/lab6/exit.cpp$(DependSuffix): exit.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/lab6/exit.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/lab6/exit.cpp$(DependSuffix) -MM exit.cpp

../build-$(ConfigurationName)/lab6/exit.cpp$(PreprocessSuffix): exit.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/lab6/exit.cpp$(PreprocessSuffix) exit.cpp

../build-$(ConfigurationName)/lab6/teleporter.cpp$(ObjectSuffix): teleporter.cpp ../build-$(ConfigurationName)/lab6/teleporter.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/student/Documents/cs2040/projects/test/lab6/teleporter.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/teleporter.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/lab6/teleporter.cpp$(DependSuffix): teleporter.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/lab6/teleporter.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/lab6/teleporter.cpp$(DependSuffix) -MM teleporter.cpp

../build-$(ConfigurationName)/lab6/teleporter.cpp$(PreprocessSuffix): teleporter.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/lab6/teleporter.cpp$(PreprocessSuffix) teleporter.cpp

../build-$(ConfigurationName)/lab6/game_controller.cpp$(ObjectSuffix): game_controller.cpp ../build-$(ConfigurationName)/lab6/game_controller.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/student/Documents/cs2040/projects/test/lab6/game_controller.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/game_controller.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/lab6/game_controller.cpp$(DependSuffix): game_controller.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/lab6/game_controller.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/lab6/game_controller.cpp$(DependSuffix) -MM game_controller.cpp

../build-$(ConfigurationName)/lab6/game_controller.cpp$(PreprocessSuffix): game_controller.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/lab6/game_controller.cpp$(PreprocessSuffix) game_controller.cpp

../build-$(ConfigurationName)/lab6/key.cpp$(ObjectSuffix): key.cpp ../build-$(ConfigurationName)/lab6/key.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/student/Documents/cs2040/projects/test/lab6/key.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/key.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/lab6/key.cpp$(DependSuffix): key.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/lab6/key.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/lab6/key.cpp$(DependSuffix) -MM key.cpp

../build-$(ConfigurationName)/lab6/key.cpp$(PreprocessSuffix): key.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/lab6/key.cpp$(PreprocessSuffix) key.cpp

../build-$(ConfigurationName)/lab6/item.cpp$(ObjectSuffix): item.cpp ../build-$(ConfigurationName)/lab6/item.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/student/Documents/cs2040/projects/test/lab6/item.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/item.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/lab6/item.cpp$(DependSuffix): item.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/lab6/item.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/lab6/item.cpp$(DependSuffix) -MM item.cpp

../build-$(ConfigurationName)/lab6/item.cpp$(PreprocessSuffix): item.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/lab6/item.cpp$(PreprocessSuffix) item.cpp

../build-$(ConfigurationName)/lab6/collection.cpp$(ObjectSuffix): collection.cpp ../build-$(ConfigurationName)/lab6/collection.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/student/Documents/cs2040/projects/test/lab6/collection.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/collection.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/lab6/collection.cpp$(DependSuffix): collection.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/lab6/collection.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/lab6/collection.cpp$(DependSuffix) -MM collection.cpp

../build-$(ConfigurationName)/lab6/collection.cpp$(PreprocessSuffix): collection.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/lab6/collection.cpp$(PreprocessSuffix) collection.cpp


-include ../build-$(ConfigurationName)/lab6//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


