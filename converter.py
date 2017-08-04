#!/usr/bin/env python3

"""This module accepts only strings. The error must be caught by the calling program"""

# THERE IS NO ERROR CHECKING


def Cap(C1):
    # Tried using string.translate((None,remove)) but it didn't give the required output
    # I got TypeError because multiplying float with string wasn't possible
    if 'p' in C1:
        C1 = float(C1.replace('p','')) * float(10**-12)
        return C1
    elif 'P' in C1:
        C1 = float(C1.replace('P', '')) * float(10**-12)
        return C1
    elif 'u' in C1:
        C1 = float(C1.replace('u','')) * float(10**-6)
        return C1
    elif 'U' in C1:
        C1 = float(C1.replace('U','')) * float(10**-6)
        return C1
    elif 'n' in C1:
        C1 = float(C1.replace('n','')) * float(10**-9)
        return C1
    elif 'N' in C1:
        C1 = float(C1.replace('N',''))* float(10**-9)
        return C1
    elif 'f' in C1:
        C1 = float(C1.replace('f','')) * float(10**-15)
        return C1
    elif 'F' in C1:
        C1 = float(C1.replace('F','')) * float(10**-15)
        return C1
    elif (C1 == int(C1)) or (C1 == float(C1)): #check if the number has no letter with it.s
        return C1
    else:
        return False


def Res(R):
    # Main code should make sure the right values get in here
    if ('k' in R) :
        R = float(R.replace('k', '')) * float(10 ** 3)
        return R
    elif 'M' in R:
        R = float(R.replace('M','')) * float(10**6)
        return R
    elif (int(R) == R):#Check if the number is an integer. It won't work if number is a string though
        return R
    else:
        return False




