DString=input()
OutString=''
flag='T'
for i in DString:
    if i not in ['G','C','A','T']:
        print('Invalid Input') 
        flag='F'
        break
    else:
            if i=='G':
                OutString+='C'
            elif i=='C':
                OutString+='G'
            elif i=='T':
                OutString+='A'
            elif i=='A':
                OutString+='U'
if flag=='T':
    print(OutString)