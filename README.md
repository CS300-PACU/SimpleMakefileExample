# Simple Makefile Example

The makefile to build:

```
sayhi:
	echo hello world
  
hello.txt:
	echo hello > hello.txt
	
sayhello: hello.txt
	cat hello.txt
  ```
