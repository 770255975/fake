# fakescript

[![Author](https://img.shields.io/badge/author-errhrs-blue.svg?style=flat)](https://github.com/esrrhs/fakescript) [![Platform](https://img.shields.io/badge/platform-Linux,%20Windows-green.svg?style=flat)](https://github.com/esrrhs/fakescript)[![Script](https://img.shields.io/badge/embed-script-pink.svg?style=flat)](https://github.com/esrrhs/fakescript) [![License](https://img.shields.io/github/license/mashape/apistatus.svg?maxAge=2592000?style=flat)](LICENSE)

Lightweight embedded scripting language

## Brief introduction
**fakescript** is a lightweight embedded scripting language , using c ++ language, grammar lessons from lua, golang, erlang, based on flex, bison generative grammar tree , compiled into byte code interpreted. Compared with lua, comparable speed , easier to use , more readable source code

## Script feature
* The syntax is similar to lua
* All function
* Support array, map, unlimited nested
* Support generating routine like fake testfunc (param1), to achieve the effect of multithreading(JIT no support)
* Support binding C functions and class member functions
* With interpreter, support JIT
* Support multi return value
* Support profile, can get the script running time of each function
* Support hot update
* Support Int64
* Support const definitions
* Support Package
* Support struct
* Support packaged bin file or executable file
* Own command line style debugger like gdb, and vs style debugging ide
* Can start a command-line debugging in C through the interface call
* Support byte code optimize



## In Production
![image](img/use1.jpg)[我是大主宰](http://dzz.youxi.com)
![image](img/use2.jpg)[天天炫斗](http://ttxd.qq.com/act/a20160419brandP/)


## Standard Library
* File
* Network
* String
* Xml
* Template
* Json

## Sample

```


-- Current package name
package mypackage.test

-- include file
include "common.fk"

-- struct define
struct teststruct
	sample_a
	sample_b
	sample_c
end

-- const define
const hellostring = "hello"
const helloint = 1234
const hellomap = {1 : "a" 2 : "b" 3 : [1 2 3]}

-- func1 comment
func myfunc1(arg1, arg2)
	
	-- C function calls and class member functions
	arg3 := cfunc1(helloint) + arg2:memfunc1(arg1)
	
	-- Branch
	if arg1 < arg2 then	
		-- create routine
		fake myfunc2(arg1, arg2)
	elseif arg1 == arg2 then	
		print("elseif")
	else
		print("else")
	end
	
	-- for loop
	for var i = 0, i < arg2, i++ then
		print("i = ", i)
	end
	
	-- array use
	var a = array()
	a[1] = 3
	
	-- map use
	var b = map()
	b[a] = 1
	b[1] = a
	
	-- Int64
	var uid = 1241515236123614u
	log("uid = ", uid)

	-- sub func call
	var ret1, var ret2 = myfunc2()

	-- other package call
	ret1 = otherpackage.test.myfunc1(arg1, arg2)
	
	-- struct use
	var tt = teststruct()
	tt->sample_a = 1
	tt->sample_b = teststruct()
	tt->sample_b->sample_a = 10

	-- switch branch
	switch arg1
		case 1 then
			print("1")
		case "a" then
			print("a")
		default
			print("default")
	end

	-- multi return value
	return arg1, arg3
	
end
```

## C++ Sample

```
// create instance
fake * fk = newfake();
// regist global func
fkreg(fk, "cfunc1", cfunc1);
// regist class mem func, diffent class type can regist the same name
fkreg(fk, "memfunc1", &class1::memfunc1);
// parse script file
fkparse(fk, argv[1]);
// run script func myfunc1, put in two param 1 and 2
ret = fkrun<int>(fk, "myfunc1", 1, 2);
// delete instance
delfake(fk);
```

## How to use
#### Windows
1. clone source
2. open **fakescript.sln** by Microsoft Visual Studio 2017
3. compile
4. copy include/**fakescript.h** and bin/**fakescript.lib** to your project
#### Linux
1. clone source
2. install CMake
2. run```./build.sh release```
3. copy include/**fakescript.h** and bin/**libfkcript.a** to your project


## Debugging environment
* IDE

![image](img/ide.png)

* Command-line

![image](img/debug.png)

## Welcome to donate 
![image](img/donate.png)

Donated money will be used to improve performance and subsequent continuous optimization fakescript
