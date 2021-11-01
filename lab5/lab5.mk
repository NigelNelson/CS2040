##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=lab5
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=/home/student/Documents/cs2040/projects/test
ProjectPath            :=/home/student/Documents/cs2040/projects/test/lab5
IntermediateDirectory  :=../build-$(ConfigurationName)/lab5
OutDir                 :=../build-$(ConfigurationName)/lab5
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=student
Date                   :=12/04/21
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
Objects0=../build-$(ConfigurationName)/lab5/cell.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/lab5/map.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/lab5/main.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/lab5/robot.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/lab5/.d $(Objects) 
	@mkdir -p "../build-$(ConfigurationName)/lab5"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@mkdir -p "../build-$(ConfigurationName)/lab5"
	@mkdir -p ""../build-$(ConfigurationName)/bin""

../build-$(ConfigurationName)/lab5/.d:
	@mkdir -p "../build-$(ConfigurationName)/lab5"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/lab5/cell.cpp$(ObjectSuffix): cell.cpp ../build-$(ConfigurationName)/lab5/cell.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/student/Documents/cs2040/projects/test/lab5/cell.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/cell.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/lab5/cell.cpp$(DependSuffix): cell.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/lab5/cell.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/lab5/cell.cpp$(DependSuffix) -MM cell.cpp

../build-$(ConfigurationName)/lab5/cell.cpp$(PreprocessSuffix): cell.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/lab5/cell.cpp$(PreprocessSuffix) cell.cpp

../build-$(ConfigurationName)/lab5/map.cpp$(ObjectSuffix): map.cpp ../build-$(ConfigurationName)/lab5/map.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/student/Documents/cs2040/projects/test/lab5/map.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/map.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/lab5/map.cpp$(DependSuffix): map.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/lab5/map.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/lab5/map.cpp$(DependSuffix) -MM map.cpp

../build-$(ConfigurationName)/lab5/map.cpp$(PreprocessSuffix): map.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/lab5/map.cpp$(PreprocessSuffix) map.cpp

../build-$(ConfigurationName)/lab5/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/lab5/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/student/Documents/cs2040/projects/test/lab5/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/lab5/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/lab5/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/lab5/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/lab5/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/lab5/main.cpp$(PreprocessSuffix) main.cpp

../build-$(ConfigurationName)/lab5/robot.cpp$(ObjectSuffix): robot.cpp ../build-$(ConfigurationName)/lab5/robot.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/student/Documents/cs2040/projects/test/lab5/robot.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/robot.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/lab5/robot.cpp$(DependSuffix): robot.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/lab5/robot.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/lab5/robot.cpp$(DependSuffix) -MM robot.cpp

../build-$(ConfigurationName)/lab5/robot.cpp$(PreprocessSuffix): robot.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/lab5/robot.cpp$(PreprocessSuffix) robot.cpp


-include ../build-$(ConfigurationName)/lab5//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


