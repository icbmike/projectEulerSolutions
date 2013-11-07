#!/usr/bin/env python
import subprocess, sys

def main():
	probNum = sys.argv[1]
	subprocess.call("gcc -g -std='c99' -o prob" + probNum + " prob" + probNum + ".c", shell=True)
	subprocess.call("./prob" + probNum, shell=True)
	

if __name__ == '__main__':
	main()

