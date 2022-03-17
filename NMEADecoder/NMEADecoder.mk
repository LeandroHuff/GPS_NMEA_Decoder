##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=NMEADecoder
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=/home/leandro/Projects/GPS_NMEA_Decoder
ProjectPath            :=/home/leandro/Projects/GPS_NMEA_Decoder/NMEADecoder
IntermediateDirectory  :=../build-$(ConfigurationName)/NMEADecoder
OutDir                 :=../build-$(ConfigurationName)/NMEADecoder
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=leandro
Date                   :=16/03/2022
CodeLitePath           :=/home/leandro/.codelite
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
Objects0=../build-$(ConfigurationName)/NMEADecoder/text.c$(ObjectSuffix) ../build-$(ConfigurationName)/NMEADecoder/nmea.c$(ObjectSuffix) ../build-$(ConfigurationName)/NMEADecoder/main.c$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/NMEADecoder/.d $(Objects) 
	@mkdir -p "../build-$(ConfigurationName)/NMEADecoder"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@mkdir -p "../build-$(ConfigurationName)/NMEADecoder"
	@mkdir -p ""../build-$(ConfigurationName)/bin""

../build-$(ConfigurationName)/NMEADecoder/.d:
	@mkdir -p "../build-$(ConfigurationName)/NMEADecoder"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/NMEADecoder/text.c$(ObjectSuffix): text.c ../build-$(ConfigurationName)/NMEADecoder/text.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/leandro/Projects/GPS_NMEA_Decoder/NMEADecoder/text.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/text.c$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/NMEADecoder/text.c$(DependSuffix): text.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/NMEADecoder/text.c$(ObjectSuffix) -MF../build-$(ConfigurationName)/NMEADecoder/text.c$(DependSuffix) -MM text.c

../build-$(ConfigurationName)/NMEADecoder/text.c$(PreprocessSuffix): text.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/NMEADecoder/text.c$(PreprocessSuffix) text.c

../build-$(ConfigurationName)/NMEADecoder/nmea.c$(ObjectSuffix): nmea.c ../build-$(ConfigurationName)/NMEADecoder/nmea.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/leandro/Projects/GPS_NMEA_Decoder/NMEADecoder/nmea.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/nmea.c$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/NMEADecoder/nmea.c$(DependSuffix): nmea.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/NMEADecoder/nmea.c$(ObjectSuffix) -MF../build-$(ConfigurationName)/NMEADecoder/nmea.c$(DependSuffix) -MM nmea.c

../build-$(ConfigurationName)/NMEADecoder/nmea.c$(PreprocessSuffix): nmea.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/NMEADecoder/nmea.c$(PreprocessSuffix) nmea.c

../build-$(ConfigurationName)/NMEADecoder/main.c$(ObjectSuffix): main.c ../build-$(ConfigurationName)/NMEADecoder/main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/leandro/Projects/GPS_NMEA_Decoder/NMEADecoder/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.c$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/NMEADecoder/main.c$(DependSuffix): main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/NMEADecoder/main.c$(ObjectSuffix) -MF../build-$(ConfigurationName)/NMEADecoder/main.c$(DependSuffix) -MM main.c

../build-$(ConfigurationName)/NMEADecoder/main.c$(PreprocessSuffix): main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/NMEADecoder/main.c$(PreprocessSuffix) main.c


-include ../build-$(ConfigurationName)/NMEADecoder//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


