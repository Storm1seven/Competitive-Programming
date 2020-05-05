def core(sentence):
    if sentence[0] not in '([{':        
        firstBlank = sentence.index(' ')
        fb = firstBlank
        conjunction, remain = sentence[:fb], sentence[(fb + 1):]                
        result = [conjunction]
        result+=(core(remain))        
        return result
    obj = sentence[(sentence.index('{') + 1):sentence.index('}')]
    sub = sentence[(sentence.index('(') + 1):sentence.index(')')]
    ver = sentence[(sentence.index('[') + 1):sentence.index(']')]
    return [obj, sub, ver]
line = input()
line = line.lower()
isSimple = True
if ',' in line:
    isSimple = False
    preComma = line[:line.index(',')]    
    postComma = line[(line.index(',') + 2):]
    
    combined = ' '.join(core(preComma)) + ', ' + ' '.join(core(postComma))
else:
    [obj, sub, ver] = core(line)
    combined = ' '.join([obj, sub, ver])
head = combined[0]
print(head.upper() + combined[1:])