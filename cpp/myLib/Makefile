OBJ:=libmyTestLibImpl.so
SRCS:= \
	myTestLibImpl.cpp

#ndk的根目录
NDK:=/home/chenqigan/tools/ndk/android-ndk-r19c

#g++编译工具链
G++:=$(NDK)/toolchains/llvm/prebuilt/linux-x86_64/bin/aarch64-linux-android27-clang++
#编译时使用的标志
CPP_FLAGS:= -fPIC --shared

$(OBJ):$(SRCS)
	$(G++)  $(CPP_FLAGS)  -o $@  $^  

clean:
	rm -rf $(OBJ) *.o
