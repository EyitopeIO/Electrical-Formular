
def __TextHandler(DATA):
        
        if 'f' in DATA:
            DATA = float(DATA.replace('f','')) * float(10**-15)
            return DATA
        elif 'k' in DATA:
            DATA = float(DATA.replace('k','')) * float(10**3)
            return DATA
        elif 'M' in DATA:
            DATA = float(DATA.replace('M','')) * float(10**6)
            return DATA
        elif 'n' in DATA:
            DATA = float(DATA.replace('n','')) * float(10**-9)
            return DATA
        elif 'p' in DATA:
            DATA = float(DATA.replace('p','')) * float(10**-12)
            return DATA
        elif 'u' in DATA:
            DATA = float(DATA.replace('u','')) * float(10**-9)
            return DATA
        else:
            print("Error here.\n")
            return None
