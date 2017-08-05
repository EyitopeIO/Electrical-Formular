#!/usr/bin/env python3
"""
This python module determines the ratio r2 / (r1 + r2) in a voltage divider formula that would give Vout / Vin
"""


#There's a bug that doesn't seem to make ratio() run at all.
#input [18,5,100,150] doesn't work
 
import converter


def ratio(v_in, v_out, l_limit, u_limit): 
 """
 1. Perhaps forlarge values of limit, the limits could be split to smaller numbers run in separate threads or processors, 
 then all their output combined.
  2. I could check for standard resistor values and only print those closest to them instead of a whole lot of pairs
  """
    answer_to_return = []
    if u_limit == 0: #if no upper limit is specified, default to 100k
        _ulimit = 33000 
    else:
        _ulimit = u_limit
    if l_limit == 0: #if no lower limit, default to 10k
        _llimit = 10000
    else:
        _llimit = l_limit
    for r1 in range(_llimit, _ulimit+1):
        for r2 in range(_llimit, _ulimit+1):
            if round((r2 / (r1 + r2)),2) == round((v_out / v_in),2):
                answer_to_return.append([r2, r1])
    return answer_to_return


def main():
    # First item is input voltage
    # Second parameter is output voltage
    # Third parameter is lower limit of resistor
    # Fourth parameter is upper limit of resistance
        print("\nFirst parameter = V(in)\nSecond=V(out)\nThird=lower limit\nFourth=upper limit")
        parameters = input("Enter your parameters: ")  # Expecting 3 inputs
        parameters = parameters.split(",")
        for i in range(0, len(parameters)):  # convert all value to numbers
            parameters[i] = int(parameters[i])
        if len(parameters) == 2: #if no upper or and lower limit specified
            parameters.append(0) #for lower limit
            parameters.append(0) #for upper limit
        elif len(parameters) == 3: #if not upper limit specified
            parameters.append(0) #for upper limit
    
        print(parameters)
        print("Loading...")
        answer = ratio(parameters[0], parameters[1], parameters[2], parameters[3])
        for i in range(0, len(answer)):
            print(answer[i],"",end="")
            if i % 5 == 0:
                print("\n")





while True:
    main()

