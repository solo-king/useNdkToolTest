OBJ:=printLibVer
SRCS:= \
	printLibVer.cpp

#ndk的根目录
NDK:=/home/chenqigan/tools/ndk/android-ndk-r19c

#g++编译工具链
G++:=$(NDK)/toolchains/llvm/prebuilt/linux-x86_64/bin/aarch64-linux-android27-clang++
#编译时使用的标志
CPP_FLAGS:= -fPIC --shared

SHARED_LIB_PATH:=../myLib
USED_SHARED_LIB:=myTestLibImpl

$(OBJ):$(SRCS)
	$(G++)  -o $@  $^  -L$(SHARED_LIB_PATH) -l$(USED_SHARED_LIB)

clean:
	rm -rf $(OBJ) *.o
