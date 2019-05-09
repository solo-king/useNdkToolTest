OBJ:=helloworld
SRCS:= \
	helloworld.cpp \
	Person.cpp

#ndk的根目录
NDK:=/home/chenqigan/tools/ndk/android-ndk-r19c

#g++编译工具链
G++:=$(NDK)/toolchains/llvm/prebuilt/linux-x86_64/bin/aarch64-linux-android27-clang++

$(OBJ):$(SRCS)
	$(G++)  -o $@ $^

clean:
	rm -rf $(OBJ) *.o
