total=int(input("How tall do you want your triangle? "))
orig=total
for x in range(total):
    if total==orig:
        print("*"*orig)
    elif total!=orig and total!=1:
        print("*"+str(" "*(int(total)-2))+"*")
    elif total==1:
        print("*")
    total-=1