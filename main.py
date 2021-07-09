#!/usr/bin/python

import os
import subprocess

print ("This output is generated in python")
inputString = input('Enter your name: ')
print ("Sending arguments and executing C++ program \n \n ")
proc = subprocess.Popen(["./main", inputString])
proc.wait()