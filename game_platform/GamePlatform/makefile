COMPLIER := g++
COMPLIER_FLAGS := -Wall -std=c++11
OUTPUT_FILE_NAME := TinyAi

LINK_FLAGS := -lncurses

all:$(OUTPUT_FILE_NAME)

SRC := main.cpp
SRC += GameLibrary/*.cpp PlatformSettings/*.cpp PlatformInterface/*.cpp PlatformManager/*.cpp

$(OUTPUT_FILE_NAME):InterfaceManager PlatformSettings PlatformInterface GameLibrary
	@echo"****正在编译整个项目，请稍后****"
	$(COMPLIER) $(COMPLIER_FLAGS) $^ -o $@ $(LINER)
	@echo"***编译完成，请使用./"$(OUTPUT_FILE_NAME)

.PHONY:main cleanAll clean rebuildAll InterfaceManager GameLibrary PlatformSettings PlatformInterface

rebuildAll:cleanAll clean all

main:
	@echo"正在编译 main文件......"
	$(COMPLIER) $(COMPLIER_FLAGS) -c main.cpp 
cleanAll:
	@echo"正在清除所有目标文件....."
	rm -r *.o 
clean:
	@echo"清除可执行文件....."
	rm $(OUTPUT_FILE_NAME)

InterfaceManager:
	@echo"正在编译界面模块......"
	$(COMPLIER) $(COMPLIER_FLAGS) -c InterfaceManager/*.cpp -o InterfaceManager/

GameLibrary:
	@echo"正在编译游戏库模块......"
	$(COMPLIER) $(COMPLIER_FLAGS) -c GameLibrary/*.cpp -o GameLibrary/

PlatformManager:
	@echo"正在编译游戏管理模块"
	$(COMPLIER) $(COMPLIER_FLAGS) -c PlatformManager/*.cpp -o PlatformManager/

PlatformSettings:
	@echo"正在编译整个项目"
	$(COMPLIER) $(COMPLIER_FLAGS) -c PlatformSettings/*.cpp -o PlatformSettings/


