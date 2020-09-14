name= input("enter file:")
handle=open(name)
d = dict()

for line in handle:
    if line.startswith('From'):
        words=line.split(" ")
        word = words[1] 
       
        if word in d: 
           
            d[word] = d[word] + 1
        else: 
          
            d[word] = 1

max=0
maxword=NONE
for key , value in d.items():
    if max<value:
        max=value
        maxword=key
        
print(maxword , max)
